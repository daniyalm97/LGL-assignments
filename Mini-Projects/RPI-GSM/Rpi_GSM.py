import serial
import time
import RPi.GPIO as GPIO
num=0
def init():
	ser.write('AT\r')
	time.sleep(1)
	ser.write('ATE0\r')
	time.sleep(1)

def init_msg():
	ser.write('AT+CMGF=1\r')
	time.sleep(1)

def msg_send():
	msg1='AT+CMGS="'
	msg2='"\r'
	msg=msg1+str(num)+msg2
	ser.write(msg)
	send=raw_input('Enter msg:')
	ser.write(send)
	send2='\x1A'
	ser.write(send2)
	print 'sending message'
	time.sleep(5)



def call(num):
	dial='ATD'+str(num)+';\r'
	ser.write(dial)
	time.sleep(15)

def answer():
	ser.write('ATA\r')
	time.sleep(2)

def halt():
	ser.write('ATH\r')
	time.sleep(1)

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BOARD)
ser=serial.Serial('/dev/ttyS0',9600,timeout=1)
print 'Initialized'
init()
while True:
	print '-----------'
	print '1.Dial Call\n2.Receive Call\n3.Send Msg\n4.Receive Msg\n0.Exit'
        choice=input(':')
	if choice==1:
		num=input('Enter Number:')
		print 'calling',num
		call(num)
		print 'call halted'
		halt()

	elif choice==2:
		print 'waiting for call'
		while True:
			if ser.read(8)=='\r\nRING\r\n':
				print 'call answered'
				answer()
				print 'call halted'
				halt()
				break

	elif choice==3:
		num=input('Enter number:')
		print 'Entered text mode'
		init_msg()
		msg_send()
		print 'message sent'

	elif choice==4:
		send="AT+CNMI=2,1,0,0,0\r"
		ser.write(send)
		print ser.read(20)

	else:
		break
