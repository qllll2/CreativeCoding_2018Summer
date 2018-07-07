int ledPin=10;
 int val=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

 pinMode(2,INPUT);
pinMode(10,OUTPUT);
 pinMode(ledPin,OUTPUT);
}

void loop() {

  // put your main code here, to run repeatedly:
 int n=digitalRead(2);

  if(n==HIGH){
    
for(int val=0;val<=255;val=val+5){
   int i =analogRead(A0);
   Serial.write(i/4);
delay(100);
//Serial.println(i);
   
if (i>550){
 
    analogWrite(ledPin,val);
         delay(1000);
}

 
 for(int vl = val;vl>=0;vl=vl-5){
  int i =analogRead(A0);
  Serial.write(i/4);
delay(100);
//Serial.println(i);
if(i<550){
 
   analogWrite(ledPin,vl);
   delay(1000);
}
}
 }
}



}
