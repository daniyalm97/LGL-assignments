A simulation of  call and messaging services access using the Raspberry PI and
GSM module. GSM modules consisting of the AT firmware is sent with respective 
commands using UART protocol in python2.7.

The following functions are implemented in the above setup:
1. Dial call
2. Receive call
3. Send SMS
4. Receive SMS

Components used are listed below:
Raspberry Pi 3 B+
SIM800L quad band GSM module
Micro sim of supported carrier

Dependencies:
RPi.GPIO python library
Time python library
