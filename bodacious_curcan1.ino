char reading;
void setup()
{
  Serial.begin(9600);
  pinMode(13, INPUT);
  pinMode(12, INPUT);
   pinMode(11, INPUT);
  pinMode(10, INPUT);
}

void loop()
{
  while(Serial.available()==0){
  }
    reading = Serial.read();
    if(reading == 'R'){
      digitalWrite(11,HIGH);
   
    }
    if(reading == 'L'){
      
    digitalWrite(10,HIGH);
    }
   if(reading == 'S'){
    digitalWrite(13,LOW);
     digitalWrite(12,LOW);
      digitalWrite(11,LOW);
     digitalWrite(10,LOW);
    }
  
  }


    
    
  
  
   

