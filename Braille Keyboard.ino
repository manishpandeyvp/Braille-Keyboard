// include the library code:
#include <LiquidCrystal.h>

#include <SPI.h>
#include <TMRpcm.h>
#include <SD.h>


TMRpcm tmrpcm;
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int s1=A5;
int s2=A4;
int s3=A3;
int s4=A2;
int s5=A1;
int s6=A0;

int s7=7;

int x=0;

void setup() {
  lcd.begin(16, 2);

  //for defining button
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);
  pinMode(s3,INPUT);
  pinMode(s4,INPUT);  
  pinMode(s5,INPUT);
  pinMode(s6,INPUT);  

  pinMode(s7,INPUT);

  Serial.begin(9600);

  lcd.print("PR201 Project");
  lcd.setCursor(0,1);
  lcd.print("Blind Keyboard");
  
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  int i=digitalRead(s1);  //switch 1
  int j=digitalRead(s2);  //switch 2
  int k=digitalRead(s3);  //switch 3
  int l=digitalRead(s4);  //switch 4
  int m=digitalRead(s5);  //switch 5
  int n=digitalRead(s6);  //switch 6
  int slide=digitalRead(s7);  //slide switch(from alphabets to number)


  if (slide==LOW)
  {

    if(i==HIGH&&j==LOW&&k==LOW&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.print("A");
     tmrpcm.setVolume(5);
     tmrpcm.play("A.wav");
    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.print("B");
      tmrpcm.setVolume(5);
     tmrpcm.play("B.wav");
    }
    else
    if(i==HIGH&&j==LOW&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print("C");
     tmrpcm.setVolume(5);
     tmrpcm.play("C.wav");
    }
    else
    if(i==HIGH&&j==LOW&&k==LOW&&l==HIGH&&m==HIGH&&n==LOW)
    {
      Serial.print("D");
     tmrpcm.setVolume(5);
     tmrpcm.play("D.wav");
    }
    else
    if(i==HIGH&&j==LOW&&k==LOW&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.print("E");
     tmrpcm.setVolume(5);
     tmrpcm.play("E.wav");
    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print("F");
     tmrpcm.setVolume(5);
     tmrpcm.play("F.wav");
    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==HIGH&&m==HIGH&&n==LOW)
    {
      Serial.print("G");
     tmrpcm.setVolume(5);
     tmrpcm.play("G.wav");
    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.print("H");
     tmrpcm.setVolume(5);
     tmrpcm.play("H.wav");
    }
    else
    if(i==LOW&&j==HIGH&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print("I");
     tmrpcm.setVolume(5);
     tmrpcm.play("I.wav");
    }
    else
    if(i==LOW&&j==HIGH&&k==LOW&&l==HIGH&&m==HIGH&&n==LOW)
    {
      Serial.print("J");
     tmrpcm.setVolume(5);
     tmrpcm.play("J.wav");
    }
    else
    if(i==HIGH&&j==LOW&&k==HIGH&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.print("K");
     tmrpcm.setVolume(5);
     tmrpcm.play("K.wav");
    }
    else
    if(i==HIGH&&j==HIGH&&k==HIGH&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.print("L");
     tmrpcm.setVolume(5);
     tmrpcm.play("L.wav");
    }
    else
    if(i==HIGH&&j==LOW&&k==HIGH&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print("M");
     tmrpcm.setVolume(5);
     tmrpcm.play("M.wav");
    }
    else
    if(i==HIGH&&j==LOW&&k==HIGH&&l==HIGH&&m==HIGH&&n==LOW)
    {
      Serial.print("N");
     tmrpcm.setVolume(5);
     tmrpcm.play("N.wav");
    }
    else
    if(i==HIGH&&j==LOW&&k==HIGH&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.print("O");
     tmrpcm.setVolume(5);
     tmrpcm.play("O.wav");
    }
    else
    if(i==HIGH&&j==HIGH&&k==HIGH&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print("P");
     tmrpcm.setVolume(5);
     tmrpcm.play("P.wav");
    }
    else
    if(i==HIGH&&j==HIGH&&k==HIGH&&l==HIGH&&m==HIGH&&n==LOW)
    {
      Serial.print("Q");
     tmrpcm.setVolume(5);
     tmrpcm.play("Q.wav");
    }
    else
    if(i==HIGH&&j==HIGH&&k==HIGH&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.print("R");
     tmrpcm.setVolume(5);
     tmrpcm.play("R.wav");
    }
    else
    if(i==LOW&&j==HIGH&&k==HIGH&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print("S");
     tmrpcm.setVolume(5);
     tmrpcm.play("S.wav");
    }
    else
    if(i==LOW&&j==HIGH&&k==HIGH&&l==HIGH&&m==HIGH&&n==LOW)
    {
      Serial.print("T");
     tmrpcm.setVolume(5);
     tmrpcm.play("T.wav");
    }
    else
    if(i==HIGH&&j==LOW&&k==HIGH&&l==LOW&&m==LOW&&n==HIGH)
    {
      Serial.print("U");
     tmrpcm.setVolume(5);
     tmrpcm.play("U.wav");
    }
    else
    if(i==HIGH&&j==HIGH&&k==HIGH&&l==LOW&&m==LOW&&n==HIGH)
    {
      Serial.print("V");
     tmrpcm.setVolume(5);
     tmrpcm.play("V.wav");
    }
      else
      if(i==LOW&&j==HIGH&&k==LOW&&l==HIGH&&m==HIGH&&n==HIGH)
      {
        Serial.print("W");
       tmrpcm.setVolume(5);
     tmrpcm.play("W.wav");
      }
      else
      if(i==HIGH&&j==LOW&&k==HIGH&&l==HIGH&&m==LOW&&n==HIGH)
      {
        Serial.print("X");
       tmrpcm.setVolume(5);
     tmrpcm.play("X.wav");
      }
      else
      if(i==HIGH&&j==LOW&&k==HIGH&&l==HIGH&&m==HIGH&&n==HIGH)
      {
        Serial.print("Y");
       tmrpcm.setVolume(5);
     tmrpcm.play("Y.wav");
      }
      else
      if(i==HIGH&&j==LOW&&k==HIGH&&l==LOW&&m==HIGH&&n==HIGH)
      {
        Serial.print("Z");
       tmrpcm.setVolume(5);
     tmrpcm.play("Z.wav");
      }
     
       else
    if(i==LOW&&j==LOW&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print(" ");
      tmrpcm.setVolume(5);
     tmrpcm.play("space.wav");
    }
    else
    if(i==LOW&&j==LOW&&k==HIGH&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.println();
      tmrpcm.setVolume(5);
     tmrpcm.play("enter.wav");
    }
    else
    if(i==LOW&&j==HIGH&&k==LOW&&l==LOW&&m==LOW&&n==LOW) 
    {
      Serial.print(",");
      tmrpcm.setVolume(5);
     tmrpcm.play("comma.wav");  
    }
    else
    if(i==LOW&&j==HIGH&&k==HIGH&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.print(";");
      tmrpcm.setVolume(5);
     tmrpcm.play("semicolon.wav"); 
    }
    else
    if(i==LOW&&j==HIGH&&k==LOW&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.print(":");
      tmrpcm.setVolume(5);
     tmrpcm.play("colon.wav");
    } 
    else
    if(i==LOW&&j==HIGH&&k==LOW&&l==LOW&&m==HIGH&&n==HIGH)
    {
      Serial.print(".");
      tmrpcm.setVolume(5);
     tmrpcm.play("fullstop.wav");
    }
     else
    if(i==HIGH&&j==HIGH&&k==HIGH&&l==HIGH&&m==HIGH&&n==HIGH)
    {
      Serial.print("for");
      tmrpcm.setVolume(5);
     tmrpcm.play("for.wav");
    }
     else
    if(i==LOW&&j==LOW&&k==HIGH&&l==HIGH&&m==LOW&&n==HIGH)
    {
      Serial.print("ing");
      tmrpcm.setVolume(5);
     tmrpcm.play("ing.wav");
    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==HIGH&&m==LOW&&n==HIGH)
    {
      Serial.print("ed");
      tmrpcm.setVolume(5);
     tmrpcm.play("ed.wav");
    }
    else
    if(i==HIGH&&j==HIGH&&k==HIGH&&l==HIGH&&m==LOW&&n==HIGH)
    {
      Serial.print("and");
      tmrpcm.setVolume(5);
     tmrpcm.play("and.wav");
    }
    else
    if(i==LOW&&j==HIGH&&k==HIGH&&l==HIGH&&m==HIGH&&n==HIGH)
    {
      Serial.print("with");
      tmrpcm.setVolume(5);
     tmrpcm.play("with.wav");
    }
    else
    if(i==LOW&&j==HIGH&&k==HIGH&&l==HIGH&&m==LOW&&n==HIGH)
    {
      Serial.print("the");
      tmrpcm.setVolume(5);
     tmrpcm.play("the.wav");
    }
    else
    if(i==LOW&&j==LOW&&k==HIGH&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.print("in");
      tmrpcm.setVolume(5);
     tmrpcm.play("in.wav");
      }
    else
    if(i==LOW&&j==HIGH&&k==HIGH&&l==LOW&&m==LOW&&n==HIGH)
    {
      Serial.print("?");
      tmrpcm.setVolume(5);
     tmrpcm.play("questionmark.wav");
    }
    else
    if(i==LOW&&j==HIGH&&k==HIGH&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.print("!");
      tmrpcm.setVolume(5);
     tmrpcm.play("exclamationmark.wav");
    }
    else
    if(i==LOW&&j==LOW&&k==HIGH&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.print("'");
      tmrpcm.setVolume(5);
     tmrpcm.play("apostrophemark.wav");
    }
    else
    if(i==LOW&&j==LOW&&k==HIGH&&l==LOW&&m==LOW&&n==HIGH)
    {
      Serial.print("-");
      tmrpcm.setVolume(5);
     tmrpcm.play("hyphen.wav");
    }
  }
  if (slide==HIGH)
  {
    if(i==LOW&&j==HIGH&&k==LOW&&l==HIGH&&m==HIGH&&n==LOW)
     {
      Serial.print("0");
      tmrpcm.setVolume(5);
     tmrpcm.play("0.wav");
    }
   else
   if(i==HIGH&&j==LOW&&k==LOW&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.print("1");
      tmrpcm.setVolume(5);
     tmrpcm.play("1.wav");
    }
    else
      if(i==HIGH&&j==HIGH&&k==LOW&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.print("2");
      tmrpcm.setVolume(5);
     tmrpcm.play("2.wav");
    }
    else
    if(i==HIGH&&j==LOW&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print("3");
      tmrpcm.setVolume(5);
     tmrpcm.play("3.wav");
    }
    else
    if(i==HIGH&&j==LOW&&k==LOW&&l==HIGH&&m==HIGH&&n==LOW)
    {
      Serial.print("4");
       tmrpcm.setVolume(5);
     tmrpcm.play("4.wav");
    }
    else
    if(i==HIGH&&j==LOW&&k==LOW&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.print("5");
       tmrpcm.setVolume(5);
     tmrpcm.play("5.wav");
    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print("6");
       tmrpcm.setVolume(5);
     tmrpcm.play("6.wav");
    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==HIGH&&m==HIGH&&n==LOW)
    {
      Serial.print("7");
       tmrpcm.setVolume(5);
     tmrpcm.play("7.wav");
    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.print("8");
       tmrpcm.setVolume(5);
     tmrpcm.play("8.wav");
    }
    else
    if(i==LOW&&j==HIGH&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print("9");
       tmrpcm.setVolume(5);
     tmrpcm.play("9.wav");
    }
    else
      if(i==LOW&&j==LOW&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print(" ");
      tmrpcm.setVolume(5);
     tmrpcm.play("space.wav");
    }
    else
    if(i==LOW&&j==LOW&&k==HIGH&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.println();
      tmrpcm.setVolume(5);
     tmrpcm.play("enter.wav");
    }
  }


  delay(800);
}
