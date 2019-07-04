void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  
  Serial.begin(9600);
}

int income = 0;

void loop()
{
  if(Serial.available()>0){
    income = Serial.read();
    switch(income){
      case 'f':
        forward();
      break;
      case 'b':
        backward();
      break;
      case 'l':
        left();
      break;
      case 'r':
        right();
      break;
      case 's':
        stop();
      break;
      default:
      break;
      
    }
  }
}
void forward(){
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(12,HIGH);
  
}

void backward(){
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(12,LOW);
  
  
}

void left(){
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(8,LOW);
  digitalWrite(12,LOW);
  
}

void right(){
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(12,LOW);
  
}

void stop(){
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(12,LOW);
  
}
