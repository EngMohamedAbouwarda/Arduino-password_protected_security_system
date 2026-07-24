#include <Keypad.h>

const byte row = 4;
const byte col = 4;
const int redLed = 10;
const int greenLed = 11;
const int piezo = 12;

// Fixed: Added the 4th column ('A', 'B', 'C', 'D')
char numPad[row][col] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPin[row] = {9, 8, 7, 6};
byte colPin[col] = {5, 4, 3, 2};

String password = "6556";
String vstup = "";

Keypad cKeypad = Keypad(makeKeymap(numPad), rowPin, colPin, row, col);

void setup(){
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(piezo, OUTPUT);
  digitalWrite(redLed, HIGH);
  Serial.begin(9600);
  Serial.println("Enter the Passcode: ");
}

void loop(){
  char cKey = cKeypad.getKey();
  
  if(cKey){
    if(vstup.length() < 4){
      Serial.print("*");
      vstup += cKey;
    }
  }
  
  if(vstup.length() == 4){
    delay(500); // Shortened delay before check
    if(password == vstup){
      Serial.println("\nEnter");
      digitalWrite(redLed, LOW);
      digitalWrite(greenLed, HIGH);
      tone(piezo, 500);
      delay(100);
      noTone(piezo);
    }
    else{
      Serial.println("\nWrong Passcode");
      digitalWrite(redLed, HIGH);
      digitalWrite(greenLed, LOW);
      tone(piezo, 1000);
      delay(300); // Shortened buzzer delays so it doesn't freeze up the buffer
      tone(piezo, 1000);
      delay(300);
      noTone(piezo);
    }
    
    delay(1500); // Look at results delay
    vstup = "";
    
    // Clear any accidental keypresses made during the delays above
    while(cKeypad.getKey() != NO_KEY) { 
        // Do nothing, just emptying the buffer
    }
    
    Serial.println("Enter the Passcode: ");
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
  }
}
