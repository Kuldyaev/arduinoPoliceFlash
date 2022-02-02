
int ledR = 3, ledB = 2, timeCh = 100;

void setup() {                
 pinMode(ledR, OUTPUT);     
 pinMode(ledB, OUTPUT);
}

void loop() {
  for (int z = 0; z < 2; z++){
    for (int i = 0; i < 4; i++){
      if (i < 2){
        for (int y = 0; y < 2; y++){
          digitalWrite(ledB, 0);
          digitalWrite(ledR, y);
          delay(timeCh);
        }
      } else {
        for (int y = 0; y < 2; y++){
          digitalWrite(ledB, y);
          digitalWrite(ledR, 0);
          delay(timeCh);
        }
      }
   }
  }
  for (int y = 0; y < 2; y++){
      digitalWrite(ledB, 0);
      digitalWrite(ledR, 1);
      delay(timeCh*3);
      digitalWrite(ledB, 1);
      digitalWrite(ledR, 0);
      delay(timeCh*3);
    }
}
