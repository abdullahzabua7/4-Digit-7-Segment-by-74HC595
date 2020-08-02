int latchPin = 2; //pin 12 on the 595
int dataPin = 3; //pin 14 on the 595
int clockPin = 4; //pin 11 on the 595
int sec1 ;
int sec2;
int sec3; 
int sec4;
unsigned long int counter;

//D1 = 128, D2 = 256, D3 = 512, D4 = 1024
void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  //determines the counter 
 if (counter >= 1000){
  counter = 0;
  //increment of first digit unit place
  sec4= sec4+1;
 }
 //if unit place = 9 then it will be zero and tenth place will be counting with unit place
 if (sec4 == 10){
  sec4 = 0;
  //increment of tenth place
  sec3 = sec3 + 1;
  //when tenth place = 9 it makes it zero and hundereth place starts counting 
  if (sec3 ==10){
    sec3=0;
    //increment the hundereth place
    sec2= sec2 +1;
  }
  //when hundereth place = 9 it makes zero and starts counting at thousandth place
  if(sec2 == 10){
    sec2=0;
    //increment the thousandth place
    sec1=sec1 + 1;
  }
  //when thousandth place equals to 9 makes it zero and makes the counter restart
  if (sec1 == 10){
    sec1=0;
  }
 }
led4(sec1); //display the unit place
delay(3);
led3(sec2); //display the tenth place
delay(3); 
led2(sec3); //display the hundereth place
delay(3);
led1(sec4); //display the thousandth place
delay(3);
counter = counter+10;
}

//define first LED segment to turn on and diplay specific numbers
void led4(int a){
  int t1=128+64>>8;
  int t2=128;
  //switch to the number to call specific it and display
  switch (a) {
    case 0:
      zero(t1,t2);
      break;
    case 1:
      one(t1,t2);
      break;
    case 2:
      two(t1,t2);
      break;
    case 3:
      three(t1,t2);
      break;
    case 4:
      four(t1,t2);
      break;
    case 5:
      five(t1,t2);
      break;
    case 6:
      six(t1,t2);
      break;
    case 7:
      seven(t1,t2);
      break;
    case 8:
      eight(t1,t2);
      break;
    case 9:
      nine(t1,t2);
      break;
  }
}
//define second LED segment to turn on and diplay specific numbers
void led3(int b){
    int t1=256 + 64 >> 8;
  int t2=256;
  //switch to the number to call specific it and display
  switch (b) {
    case 0:
      zero(t1,t2);
      break;
    case 1:
      one(t1,t2);
      break;
    case 2:
      two(t1,t2);
      break;
    case 3:
      three(t1,t2);
      break;
    case 4:
      four(t1,t2);
      break;
    case 5:
      five(t1,t2);
      break;
    case 6:
      six(t1,t2);
      break;
    case 7:
      seven(t1,t2);
      break;
    case 8:
      eight(t1,t2);
      break;
    case 9:
      nine(t1,t2);
      break;
  }
}
void led2(int c){
    int t1=512 + 64 >> 8;
  int t2=512;
  //switch to the number to call specific it and display
  switch (c) {
    case 0:
      zero(t1,t2);
      break;
    case 1:
      one(t1,t2);
      break;
    case 2:
      two(t1,t2);
      break;
    case 3:
      three(t1,t2);
      break;
    case 4:
      four(t1,t2);
      break;
    case 5:
      five(t1,t2);
      break;
    case 6:
      six(t1,t2);
      break;
    case 7:
      seven(t1,t2);
      break;
    case 8:
      eight(t1,t2);
      break;
    case 9:
      nine(t1,t2);
      break;
  }
}
void led1(int d){
    int t1= 1024 + 64 >> 8;
  int t2=1024;
  //switch to the number to call specific it and display
  switch (d) {
    case 0:
      zero(t1,t2);
      break;
    case 1:
      one(t1,t2);
      break;
    case 2:
      two(t1,t2);
      break;
    case 3:
      three(t1,t2);
      break;
    case 4:
      four(t1,t2);
      break;
    case 5:
      five(t1,t2);
      break;
    case 6:
      six(t1,t2);
      break;
    case 7:
      seven(t1,t2);
      break;
    case 8:
      eight(t1,t2);
      break;
    case 9:
      nine(t1,t2);
      break;
  }
}

void zero(int a,int b)
{
    //0
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, a);
  shiftOut(dataPin, clockPin, MSBFIRST, b+64);
  digitalWrite(latchPin, HIGH);
  delay(1);
}
void one(int a,int b){
   //1
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, a);
  shiftOut(dataPin, clockPin, MSBFIRST, b+121);
  digitalWrite(latchPin, HIGH);
  delay(1);
}
void two(int a,int b){
    //2
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, a);
  shiftOut(dataPin, clockPin, MSBFIRST, b+36);
  digitalWrite(latchPin, HIGH);
  delay(1);
}
void three(int a,int b){
  

  //3
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, a);
  shiftOut(dataPin, clockPin, MSBFIRST, b+48);
  digitalWrite(latchPin, HIGH);
  delay(1);
   
}
void four(int a,int b){
    //4
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, a);
  shiftOut(dataPin, clockPin, MSBFIRST, b+25);
  digitalWrite(latchPin, HIGH);
  delay(1);  
  
}
void five(int a,int b){
    //5
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST,a);
  shiftOut(dataPin, clockPin, MSBFIRST, b+18);
  digitalWrite(latchPin, HIGH);
  delay(1);
}
void six(int a,int b){
  
  //6
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, a);
  shiftOut(dataPin, clockPin, MSBFIRST, b+2);
  digitalWrite(latchPin, HIGH);
  delay(1);
}
void seven(int a,int b){
    //7
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, a);
  shiftOut(dataPin, clockPin, MSBFIRST, b+120);
  digitalWrite(latchPin, HIGH);
  delay(1);

}
void eight(int a,int b){
    //8
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, a);
  shiftOut(dataPin, clockPin, MSBFIRST, b+0);
  digitalWrite(latchPin, HIGH);
  delay(1);
}
void nine(int a,int b){
  //9
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST,a);
  shiftOut(dataPin, clockPin, MSBFIRST, b+24);
  digitalWrite(latchPin, HIGH);
  delay(1); 
}
