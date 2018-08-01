#include<reg51.h>  
#include<stdio.h>
sbit C4 = P0^0;    
sbit C3 = P0^1;
sbit C2 = P0^2;
sbit C1 = P0^3;
sbit R4 = P0^4;
sbit R3 = P0^5;
sbit R2 = P0^6;
sbit R1 = P0^7;
void delay(unsigned int a)  
{
    unsigned i,j ;
    for(i=0;i<a;i++)    
    for(j=0;j<1275;j++);
}
void trans(unsigned char x)
{
	SBUF=x;
	while(!TI);
	TI=0;
}
char recv()
{
	char y;
	while(!RI);
	y=SBUF;
	RI=0;
	return y;
}


void str(unsigned char *x)
{
	while(*x)
	{
		trans(*x++);
	}
}
void serialinit()
{
	TMOD=0X20;
	SCON=0X50;
	TH1=-3;
	TR1=1;
}

char func()
{
	while(1)
	{
	C1=C2=C3=C4=1;
	R1=R2=R3=R4=0;
	
	if(C1==0)
	{
	R1=R2=R3=R4=1;
	C1=C2=C3=C4=0;
	if(R1==0)
	{
		while(R1==0);
		return '1';
	}
	if(R2==0)
	{
		while(R2==0);
		return '4';
	}
	if(R3==0)
	{
		while(R3==0);
		return '7';
	}
	if(R4==0)
	{
		while(R4==0);
		return '*';
	}
 }
	
 else if(C2==0) 
	{
	R1=R2=R3=R4=1;
	C1=C2=C3=C4=0;
	if(R1==0)
	{
		while(R1==0);
		return '2';
	}
	if(R2==0)
	{
		while(R2==0);
		return '5';
	}
	if(R3==0)
	{
		while(R3==0);
		return '8';
	}
	if(R4==0)
	{
		while(R4==0);
		return '0';
	}
	}	

	else if(C3==0) 
	{
	R1=R2=R3=R4=1;
	C1=C2=C3=C4=0;
	if(R1==0)
	{
		while(R1==0);
		return '3';
	}
	if(R2==0)
	{
		while(R2==0);
		return '6';
	}
	if(R3==0)
	{
		while(R3==0);
		return '9';
	}
	if(R4==0)
	{
		while(R4==0);
		return '#';
	}
	}
	
	else if(C4==0)
	{
	R1=R2=R3=R4=1;
	C1=C2=C3=C4=0;
	if(R1==0)
	{
		while(R1==0);
		return 'A';
	}
	if(R2==0)
	{
		while(R2==0);
		return 'B';
	}
	if(R3==0)
	{
		while(R3==0);
		return 'C';
	}
	if(R4==0)
	{
		while(R4==0);
	  return 'D';
	}
	}
}
}

void main()
{
	int i,j,count;
	char res[50];
	char a[5],b[9],c[4]="1234";
	serialinit();
	str("karnataka bank \r\n");
	delay(50);
	str("ATM balance is : 500000\r\n");
	delay(50);
	while(1)
	{
	str("swipe the card \r \n");
	for(j=0;j<=8;j++)
	{
		b[i]=recv();
	}
	trans(b);
	
	str("Enter the password: ");
	for(i=0;i<4;i++)
	{
		a[i]=func();
		trans('*');
	}
	a[i]='\0';
	for(i=0;i<4;i++)
	{
		if(a[i]==c[i])
		{
			count++;
		}
		else
		{
			str("not valid");
			break;
		}
	}
	if(count==4)
	{
		str("Valid \r\n");
		str("Account holder name \r \n");
		str("Varun");
	}
	else
	{
		str("wrong password");
		
	}
	str("1. Withdrawal \r \n 2. Balance");
	
	recv(a[i]);
	if(a[i]==1)
	{
		str("withdrawal");
		delay(30);
		str("enter the amount to withdrawal \r \n");
		delay(20);
		str("2000");
		delay(30);
		str("thank you");
	}
	else if(a[i]==2)
	{
		str("balance \r \n");
		delay(40);
		str(" the balance is:50000");
		delay(40);
		str("thank you \r \n ");	
	}
}
}