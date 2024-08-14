const int button_pin = 2;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(button_pin, INPUT);
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(button_pin) == HIGH){
    dotOnLED();
    spaceBWLetterpart();
    dotOnLED();
    spaceBWLetterpart();
    dotOnLED();
    spaceBWLetterpart(); // S

    spaceBWLetter();

    dotOnLED();
    spaceBWLetterpart();
    dotOnLED();
    spaceBWLetterpart();
    dotOnLED();
    spaceBWLetterpart();
    dotOnLED();
    spaceBWLetterpart(); //H

    spaceBWLetter();
    
    dotOnLED();
    spaceBWLetterpart();
    dashOnLED();
    spaceBWLetterpart(); // A

    spaceBWLetter();

    dotOnLED();
    spaceBWLetterpart();
    dashOnLED();
    spaceBWLetterpart();
    dotOnLED();
    spaceBWLetterpart();
    dotOnLED();
    spaceBWLetterpart(); // L

    spaceBWLetter();
    
    dashOnLED();
    spaceBWLetterpart();
    dashOnLED();
    spaceBWLetterpart();
    dashOnLED();
    spaceBWLetterpart(); // O

    spaceBWLetter();

    dashOnLED();
    spaceBWLetterpart();
    dotOnLED();
    spaceBWLetterpart();
    dashOnLED();
    spaceBWLetterpart(); // K
  }
}






void dotOnLED(){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
}
void dashOnLED(){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(3000);
}
void spaceBWLetterpart(){
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}
void spaceBWLetter(){
    digitalWrite(LED_BUILTIN, LOW);
    delay(3000);
}
