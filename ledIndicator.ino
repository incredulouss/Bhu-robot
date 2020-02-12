void ledInit()
{
    pinMode(13, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}


void ledIndicator(int ledDelay , int noTimes   , int color)
{

for(int i =0;i<noTimes;i++)
{
digitalWrite(color,1);
delay(ledDelay);
digitalWrite(color,0);
delay(ledDelay);
}


  
}

