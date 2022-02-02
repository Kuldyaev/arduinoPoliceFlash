/*
  just modified blink
 */
int led = 3;
int led1 = 2;
void setup() {                
 pinMode(led, OUTPUT);     
 pinMode(led1, OUTPUT);
}
void loop() {
  digitalWrite(led, HIGH);   
  digitalWrite(led1, LOW);
  delay(150);
  digitalWrite(led, LOW);  
  digitalWrite(led1, LOW);
  delay(150); 
  digitalWrite(led, HIGH);   
  digitalWrite(led1, LOW);
  delay(150);               
  digitalWrite(led1, HIGH);
  digitalWrite(led, LOW);    
  delay(150);               
  digitalWrite(led, LOW);   
  digitalWrite(led1, LOW);
  delay(150);
  digitalWrite(led1, HIGH);
  digitalWrite(led, LOW);    
  delay(150);
  digitalWrite(led, HIGH);   
  digitalWrite(led1, LOW);
  delay(150);
  digitalWrite(led, LOW);  
  digitalWrite(led1, LOW);
  delay(150); 
  digitalWrite(led, HIGH);   
  digitalWrite(led1, LOW);
  delay(150);               
  digitalWrite(led1, HIGH);
  digitalWrite(led, LOW);    
  delay(150);               
  digitalWrite(led, LOW);   
  digitalWrite(led1, LOW);
  delay(150);
  digitalWrite(led1, HIGH);
  digitalWrite(led, LOW);   
  delay(150);
  digitalWrite(led1, LOW);
  digitalWrite(led, HIGH);    
  delay(500);
  digitalWrite(led1, HIGH);
  digitalWrite(led, LOW);    
  delay(500);
  digitalWrite(led1, LOW);
  digitalWrite(led, HIGH);   
  delay(500);
  digitalWrite(led1, HIGH);
  digitalWrite(led, LOW);    
  delay(500);
}
