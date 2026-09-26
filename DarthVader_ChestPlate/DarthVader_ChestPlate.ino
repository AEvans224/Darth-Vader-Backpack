//Darth Vader Chest Plate
// Initalize LEDs
int SWITCHLED = 2, BUTTONLED_TWO = A6, COINLED_ONE = 10, COINLED_TWO = 11, COINLED_THREE = 12;
int PIN_RED = A1, PIN_GREEN = A2, PIN_BLUE = A3;


void setup() {
  //setup pins inital state
  pinMode(SWITCHLED,OUTPUT);
  pinMode(BUTTONLED_TWO, OUTPUT);
  pinMode(COINLED_ONE, OUTPUT);
  pinMode(COINLED_TWO, OUTPUT);
  pinMode(COINLED_THREE, OUTPUT);
  pinMode(PIN_RED, OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE, OUTPUT);

  digitalWrite(SWITCHLED, LOW);
  digitalWrite(BUTTONLED_TWO, HIGH);
  digitalWrite(COINLED_ONE, HIGH);
  digitalWrite(COINLED_TWO, LOW);
  digitalWrite(COINLED_THREE, LOW);

  analogWrite(PIN_RED, 215);
  analogWrite(PIN_GREEN, 0);
  analogWrite(PIN_BLUE, 0);
  
  //Initalize button
  
  
}

void loop() {
  greenlight();
  digitalWrite(SWITCHLED, HIGH);
  digitalWrite(BUTTONLED_TWO, HIGH);
  
  standardlights();
  
  redlight();
  standardlights();

}
void standardlights(){
  //Start all on
  digitalWrite(COINLED_ONE, HIGH);
  digitalWrite(COINLED_TWO, HIGH);
  digitalWrite(COINLED_THREE, HIGH);
  delay(500);

  //Turn off top
  digitalWrite(COINLED_THREE, LOW);
  delay(500);

  //Turn all on
  digitalWrite(COINLED_THREE, HIGH);
  delay(500);
  
  //Turn off middle
  digitalWrite(COINLED_TWO, LOW);
  delay(500);

  //Reverse
  digitalWrite(COINLED_ONE, LOW);
  digitalWrite(COINLED_TWO, HIGH);
  digitalWrite(COINLED_THREE, LOW);
  delay(500);

  //Turn on top
  digitalWrite(COINLED_THREE, HIGH);
  delay(500);

  //Turn off middle
  digitalWrite(COINLED_TWO, LOW);
  delay(500);

  //Turn on middle
  digitalWrite(COINLED_TWO, HIGH);
  delay(500);

  //Reverse
  digitalWrite(COINLED_TWO, LOW);
  digitalWrite(COINLED_THREE, HIGH);
  delay(500);

  //Top off, middle on
  digitalWrite(COINLED_ONE, LOW);
  digitalWrite(COINLED_TWO, HIGH);
  delay(500);

}
void redlight(){
  analogWrite(PIN_RED, 215);
  analogWrite(PIN_GREEN, 0);
  analogWrite(PIN_BLUE, 0);

}

void greenlight(){
  analogWrite(PIN_RED, 0);
  analogWrite(PIN_GREEN, 209);
  analogWrite(PIN_BLUE, 10);

}
