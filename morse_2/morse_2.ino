void setup()
{
  pinMode(13, OUTPUT);
  
  Serial.begin(9600);
}
int pin =13;
int dottime=250;
int income = 0;

void loop()
{
  if(Serial.available() > 0){
    income = Serial.read();
  
  
    switch(income){
      case 32:w_space();break;
      case 97:dot();dash();c_space();break;
      case 98:dash();dot();dot();dot();c_space();break;
      case 99:dash();dot();dash();dot();c_space();break;
      case 100:dash();dot();dot();c_space();break;
      case 101:dot();c_space();break;
      case 102:dot();dot();dash();dot();c_space();break;
      case 103:dash();dash();dot();c_space();break;
      case 104:dot();dot();dot();dot();c_space();break;
      case 105:dot();dot();c_space();break;
      case 106:dot();dash();dash();dash();c_space();break;
      case 107:dash();dot();dash();c_space();break;
      case 108:dot();dash();dot();dot();c_space();break;
      case 109:dash();dash();c_space();break;
      case 110:dash();dot();c_space();break;
      case 111:dash();dash();dash();c_space();break;
      case 112:dot();dash();dash();dot();c_space();break;
      case 113:dash();dash();dot();dash();c_space();break;
      case 114:dot();dash();dot();c_space();break;
      case 115:dot();dot();dot();c_space();break;
      case 116:dash();c_space();break;
      case 117:dot();dot();dash();c_space();break;
      case 118:dot();dot();dot();dash();c_space();break;
      case 119:dot();dash();dash();c_space();break;
      case 120:dash();dot();dot();dash();c_space();break;
      case 121:dash();dot();dash();dash();c_space();break;
      case 122:dash();dash();dot();dot();c_space();break;
     
    }
  }
}


void dot()
{
  digitalWrite(pin,HIGH);
  delay(dottime);
  digitalWrite(pin,LOW);
  delay(dottime);
}

void dash()
{
  digitalWrite(pin,HIGH);
  delay(dottime*4);
  digitalWrite(pin,LOW);
  delay(dottime);
}

void c_space()
{
  digitalWrite(pin,LOW);
  delay(dottime*3);
}

void w_space()
{
  digitalWrite(pin,LOW);
  delay(dottime*7);
}
