/*written by James Norton 
*christmas sweater 2018
*/
int modeVar=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("initialized!");
  pinMode(15, INPUT); //mode toggle switch
  pinMode(13, OUTPUT);//LED
  pinMode(12, OUTPUT);//LED
  pinMode(14, OUTPUT);//LED
  pinMode(2, OUTPUT);//LED
  pinMode(0, OUTPUT);//LED
  pinMode(4, OUTPUT);//LED
  pinMode(5, OUTPUT);//LED
  pinMode(16, OUTPUT);//LED
  //pinMode(9, OUTPUT);//LED
  pinMode(10, OUTPUT);//LED
  Serial.println("pins initialized!");
  digitalWrite(13, HIGH); 
  Serial.println("13 initialized!");
  digitalWrite(12, HIGH); 
  Serial.println("12 initialized!");
  digitalWrite(14, HIGH); 
  Serial.println("14 initialized!");
  digitalWrite(2, HIGH); 
  Serial.println("2 initialized!");
  digitalWrite(0, HIGH); 
  Serial.println("0 initialized!");
  digitalWrite(4, HIGH); 
  Serial.println("4 initialized!");
  digitalWrite(5, HIGH); 
  Serial.println("5 initialized!");
  digitalWrite(16, HIGH); 
  Serial.println("16 initialized!");
  //digitalWrite(9, HIGH); 
  Serial.println("pins initialized!");
  digitalWrite(10, HIGH); 
  Serial.println("pins initialized!");
  //blink once, always
  turnAllOff();
  delay(1000); 
  turnAllOn();
  delay(1000); 
  randomSeed(analogRead(0));
}

void loop() {
  Serial.print(modeVar);
  //iterate modes
  if(digitalRead(15)){
    modeVar++;
    turnAllOff();
  }
  
  //check mode and execute
  if(modeVar==0){//steady off
    Serial.print("mode 0");
    turnAllOff();
    delay(1000);    
  } else if(modeVar==1){//steady on
    Serial.print("mode 1");
    turnAllOn();
    delay(1000);
  } else if(modeVar==2){//blink 1/sec
    Serial.print("mode 2");
    blinky();
  } else if(modeVar==3){//random coin
    Serial.print("mode 3");
    randomCoin();    
  } else if(modeVar==4){//step up then down
    Serial.print("mode 4");
    stepUpDown();    
  } else if(modeVar==5){//flash 3-3-4 1/sec
    Serial.print("mode 5");
    flash3();    
  } else {
    //no mode found, reset to blinky
    modeVar = 0;
    fastBlink();
    fastBlink();
    fastBlink();
    delay(1000);
  }
}

void randomCoin(){
  delay(100);
  if((int)random(2)){
    Serial.println("high");
    digitalWrite(9, HIGH); 
  }else{
    Serial.println("low");
    digitalWrite(9, LOW); 
  }
  delay(100);
  if((int)random(2)){
    Serial.println("high");
    digitalWrite(10, HIGH); 
  }else{
    Serial.println("low");
    digitalWrite(10, LOW); 
  }
  delay(100);
  if((int)random(2)){
    Serial.println("high");
    digitalWrite(16, HIGH); 
  }else{
    Serial.println("low");
    digitalWrite(16, LOW); 
  } 
  delay(100);
  if((int)random(2)){
    Serial.println("high");
    digitalWrite(5, HIGH); 
  }else{
    Serial.println("low");
    digitalWrite(5, LOW); 
  }
  delay(100);
  if((int)random(2)){
    Serial.println("high");
    digitalWrite(4, HIGH); 
  }else{
    Serial.println("low");
    digitalWrite(4, LOW); 
  }
  delay(100);
  if((int)random(2)){
    Serial.println("high");
    digitalWrite(0, HIGH); 
  }else{
    Serial.println("low");
    digitalWrite(0, LOW); 
  }
  delay(100);
  if((int)random(2)){
    Serial.println("high");
    digitalWrite(2, HIGH); 
  }else{
    Serial.println("low");
    digitalWrite(2, LOW); 
  } 
  delay(100);
  if((int)random(2)){
    Serial.println("high");
    digitalWrite(14, HIGH); 
  }else{
    Serial.println("low");
    digitalWrite(14, LOW); 
  }
  delay(100);
  if((int)random(2)){
    Serial.println("high");
    digitalWrite(12, HIGH); 
  }else{
    Serial.println("low");
    digitalWrite(12, LOW); 
  }
  delay(100);
  if((int)random(2)){
    Serial.println("high");
    digitalWrite(13, HIGH); 
  }else{
    Serial.println("low");
    digitalWrite(13, LOW); 
  }
}

void fastBlink(){
  delay(300);
  turnAllOff();
  delay(300);
  turnAllOn();  
}

void blinky(){
  delay(1000);
  turnAllOff();
  delay(1000);
  turnAllOn();  
}

void stepUpDown(){
  digitalWrite(10, HIGH); 
  delay(200);
  digitalWrite(9, HIGH); 
  delay(200);
  digitalWrite(16, HIGH); 
  delay(200);
  digitalWrite(5, HIGH); 
  delay(200);
  digitalWrite(4, HIGH); 
  delay(200);
  digitalWrite(0, HIGH); 
  delay(200);
  digitalWrite(2, HIGH); 
  delay(200);
  digitalWrite(14, HIGH); 
  delay(200);
  digitalWrite(12, HIGH); 
  delay(200);
  digitalWrite(13, HIGH); 
  delay(200);
  digitalWrite(13, LOW); 
  delay(200);
  digitalWrite(12, LOW); 
  delay(200);
  digitalWrite(14, LOW); 
  delay(200);
  digitalWrite(2, LOW); 
  delay(200);
  digitalWrite(0, LOW);
  delay(200); 
  digitalWrite(4, LOW); 
  delay(200);
  digitalWrite(5, LOW); 
  delay(200);
  digitalWrite(16, LOW); 
  delay(200);
  digitalWrite(9, LOW); 
  delay(200);
  digitalWrite(10, LOW); 
}

void flash3(){
  turnAllOff();
  digitalWrite(13, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(14, HIGH); 
  delay(1000);
  
  turnAllOff();
  digitalWrite(2, HIGH); 
  digitalWrite(0, HIGH); 
  digitalWrite(4, HIGH);
  delay(1000); 
  
  turnAllOff();
  digitalWrite(5, HIGH); 
  digitalWrite(16, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(10, HIGH); 
  delay(1000); 
}

void turnAllOff(){
  Serial.println("all off");
  digitalWrite(13, LOW); 
  digitalWrite(12, LOW); 
  digitalWrite(14, LOW); 
  digitalWrite(2, LOW); 
  digitalWrite(0, LOW); 
  digitalWrite(4, LOW); 
  digitalWrite(5, LOW); 
  digitalWrite(16, LOW); 
  digitalWrite(9, LOW); 
  digitalWrite(10, LOW); 
}

void turnAllOn(){
  Serial.println("all on");
  digitalWrite(13, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(14, HIGH); 
  digitalWrite(2, HIGH); 
  digitalWrite(0, HIGH); 
  digitalWrite(4, HIGH); 
  digitalWrite(5, HIGH); 
  digitalWrite(16, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(10, HIGH); 
}



