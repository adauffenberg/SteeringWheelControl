
float buttonread = 0;
float buttonvoltage = 0;
int btdelay =0;
int mutebuttoncounter =0;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode (5, OUTPUT); 
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode (13, OUTPUT);     
  //Serial.begin(9600);
   
}

void loop() {
    
  buttonread=analogRead(0);
  //Serial.println(buttonread);
  //Serial.print(" ");
  buttonvoltage=(1/((5*buttonread/1024)/(5-(5*buttonread/1024))))*1000;
  //Serial.println(buttonvoltage);
  //Serial.println(" ");
  
  //if mute button is long pressed (greater than 1 sec) play pause bluetooth instead of mute
  if ((buttonvoltage<=1800) || (buttonvoltage>=2300)){
   if ((mutebuttoncounter >0) && (mutebuttoncounter<10)){
     digitalWrite(2, LOW);
     digitalWrite(3, LOW);
     digitalWrite(4, LOW);
     digitalWrite(5, LOW);
     digitalWrite(6, LOW);
     digitalWrite(7, LOW);
     digitalWrite(8, LOW);
     digitalWrite(10, LOW);
     digitalWrite(11, HIGH);
     digitalWrite(13, LOW);
     //Serial.println("mute");
     delay(50);
   }
   else if (mutebuttoncounter >=10){
     digitalWrite(2, LOW);
     digitalWrite(3, LOW);
     digitalWrite(4, LOW);
     digitalWrite(5, LOW);
     digitalWrite(6, LOW);
     digitalWrite(7, HIGH);
     digitalWrite(8, LOW);
     digitalWrite(10, LOW);
     digitalWrite(11, LOW);
     digitalWrite(13, LOW);
     //Serial.println("pause");
     delay(75);
   }
   else{
   }
   mutebuttoncounter=0;
  }
  
  
  
  if ((buttonvoltage>45) && (buttonvoltage<65)){
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(13, LOW);
  }
  else if((buttonvoltage>125) && (buttonvoltage<165)){
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(13, LOW);
  }
  else if((buttonvoltage>275) && (buttonvoltage<335)){
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(13, LOW);
  }
  else if((buttonvoltage>515) && (buttonvoltage<600)){
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(13, LOW);
  }
  else if((buttonvoltage>970) && (buttonvoltage<1150)){
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(13, LOW);
  }
  else if((buttonvoltage>1800) && (buttonvoltage<2300)){
    mutebuttoncounter=mutebuttoncounter+1;
    
     
    //Serial.println(mutebuttoncounter);
    
      }
  else {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(13, HIGH);
  }
  
 /* 
 if (btdelay<60){
    btdelay=btdelay+1;
 }
 else if(btdelay==60){
   digitalWrite(7, HIGH);
   btdelay=btdelay+1;
 }
 else if(btdelay==61){
   digitalWrite(7,LOW);
   btdelay=btdelay+1;
 }
 else {
   
 }
 */
 
 delay(50);
}


