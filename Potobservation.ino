const int moistureAO=0;
int AO=0;
int tmp=0;
int buzzPin=11;
int LED=13;
void setup(){
  Serial.begin(9600);
  Serial.println("Soil moisture sensor");
  pinMode(moistureAO,INPUT);
  pinMode(buzzPin,OUTPUT);
  pinMode(LED,OUTPUT);
}
void loop(){
  tmp=analogRead(moistureAO);
  if(tmp!=AO){
    AO=tmp;
    Serial.print("A=");
    Serial.println("AO");
  }
  delay(1000);
  {
    if(analogRead(0)>900){
      digitalWrite(buzzPin,HIGH);
      digitalWrite(LED,HIGH);
      delay(1000);
      digitalWrite(buzzPin,LOW);
      digitalWrite(LED,HIGH);
    }else{
      digitalWrite(buzzPin,LOW);
      digitalWrite(LED,LOW);
    }
  }
}
