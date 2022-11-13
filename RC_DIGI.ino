#define lmb 2
 #define rmb 4
 #define lmbb 7
 #define rmbb 8
#include <Servo.h>
Servo q;
Servo w;
Servo e;
Servo t;
int i ;
int o ;
int p ;
int k ;
 char d;
int x=100;

int inc=4;
void setup() {
  Serial. begin(9600);
 pinMode(lmb, OUTPUT);
 pinMode (rmb , OUTPUT);
 pinMode(lmbb , OUTPUT);
 pinMode (rmbb , OUTPUT);
  q.attach(3);
  w.attach(5);
  e.attach(6);
  t.attach(9);
 
}

void loop() {
  if (Serial.available()){
    d=Serial.read();
    Serial.println(d);
     if(d=='F'){
      digitalWrite(lmb,HIGH);
      digitalWrite(lmbb,LOW);
      digitalWrite(rmb,HIGH);
      digitalWrite(rmbb,LOW);
      }
    else if(d=='B'){
      digitalWrite(lmb,LOW);
      digitalWrite(lmbb,HIGH);
      digitalWrite(rmb,LOW);
      digitalWrite(rmbb,HIGH);
        }
   else if(d=='R'){
    digitalWrite(lmb,HIGH);
      digitalWrite(lmbb,LOW);
      digitalWrite(rmb,LOW);
      digitalWrite(rmbb,LOW);
    }
    else if(d=='L'){
   digitalWrite(lmb,LOW);
      digitalWrite(lmbb,LOW);
      digitalWrite(rmb,HIGH);
      digitalWrite(rmbb,LOW);
}
  
  else if(d=='S')
      {
      digitalWrite(lmb,LOW);
      digitalWrite(lmbb,LOW);
      digitalWrite(rmb,LOW);
      digitalWrite(rmbb,LOW);
  
  }
    if(d=='Q'){
    if(i>180){
      i=180;
    }
    q.write(i);
    Serial.println(i);
    i=i+inc;
    delay(x);
    }
    else if(d=='q'){
    if(i<0){
      i=0;
    }
    q.write(i);
    Serial.println(i);
    i=i-inc;
    delay(x);
    }
    else if(d=='W'){
    if(o>120){
      o=120;
    }
    w.write(o);
    Serial.println(o);
    o=o+inc;
    delay(x);
    }
    else if(d=='w'){
    if(o<45){
      o=45;
    }
    w.write(o);
    Serial.println(o);
    o=o-inc;
    delay(x);
    }
    else if(d=='E'){
    if(p>175){
      p=175;
    }
    e.write(p);
    Serial.println(p);
    p=p+inc;
    delay(x);
    }
    else if(d=='e'){
    if(p<15){
      p=15;
    }
    e.write(p);
    Serial.println(p);
    p=p-inc;
    delay(x);
    }
    else if(d=='T'){
    if(k>100){
      k=100;
    }
    t.write(k);
    Serial.println(k);
    k=k+inc;
    delay(x);
    }
    else if(d=='t'){
    if(k<40){
      k=40;
    }
    t.write(k);
    Serial.println(k);
    k=k-inc;
    delay(x);
    }
  
  
  }

}
