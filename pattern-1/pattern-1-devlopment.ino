#include "Config.h"


void setup() {
pinMode(P1, OUTPUT);
pinMode(P2, OUTPUT);
pinMode(P3, OUTPUT);
pinMode(P4, OUTPUT);
pinMode(P5, OUTPUT);
pinMode(P6, OUTPUT);
pinMode(P7, OUTPUT);
pinMode(P8, OUTPUT);
pinMode(P9, OUTPUT);

pinMode(E1, OUTPUT);
pinMode(E2, OUTPUT);
pinMode(E3, OUTPUT);

// int P1[] = {COLUMN, ROW};
  Serial.begin(9600);
  while (! Serial); // Wait untilSerial is ready - Leonardo
  Serial.println("Serial consle started");
}

void LedOFF() {
  digitalWrite(P1, LOW);
  digitalWrite(P2, LOW);
  digitalWrite(P3, LOW);
  digitalWrite(P4, LOW);
  digitalWrite(P5, LOW);
  digitalWrite(P6, LOW);
  digitalWrite(P7, LOW);
  digitalWrite(P8, LOW);
  digitalWrite(P9, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(E3, LOW);
  
  }

void executeLedArray(Led Pattern[], int elements, int delayLength);

void loop() {

L[1] = {1, LOW, HIGH, HIGH};
L[2] = {2, LOW, HIGH, HIGH};
L[3] = {3, LOW, HIGH, HIGH};
L[4] = {4, LOW, HIGH, HIGH};
L[5] = {5, LOW, HIGH, HIGH};
L[6] = {6, LOW, HIGH, HIGH};
L[7] = {7, LOW, HIGH, HIGH};
L[8] = {8, LOW, HIGH, HIGH};
L[9] = {9, LOW, HIGH, HIGH};
L[10] = {1, HIGH, LOW, HIGH};
L[11] = {2, HIGH, LOW, HIGH};
L[12] = {3, HIGH, LOW, HIGH};
L[13] = {4, HIGH, LOW, HIGH};
L[14] = {5, HIGH, LOW, HIGH};
L[15] = {6, HIGH, LOW, HIGH};
L[16] = {7, HIGH, LOW, HIGH};
L[17] = {8, HIGH, LOW, HIGH};
L[18] = {9, HIGH, LOW, HIGH};
L[19] = {1, HIGH, HIGH, LOW};
L[20] = {2, HIGH, HIGH, LOW};
L[21] = {3, HIGH, HIGH, LOW};
L[22] = {4, HIGH, HIGH, LOW};
L[23] = {5, HIGH, HIGH, LOW};
L[24] = {6, HIGH, HIGH, LOW};
L[25] = {7, HIGH, HIGH, LOW};
L[26] = {8, HIGH, HIGH, LOW};
L[27] = {9, HIGH, HIGH, LOW};

Led L1 = L[1];
Led L2 = L[2];
Led L3 = L[3];
Led L4 = L[4];
Led L5 = L[5];
Led L6 = L[6];
Led L7 = L[7];
Led L8 = L[8];
Led L9 = L[9];
Led L10 = L[10];
Led L11 = L[11];
Led L12 = L[12];
Led L13 = L[13];
Led L14 = L[14];
Led L15 = L[15];
Led L16 = L[16];
Led L17 = L[17];
Led L18 = L[18];
Led L19 = L[19];
Led L20 = L[20];
Led L21 = L[21];
Led L22 = L[22];
Led L23 = L[23];
Led L24 = L[24];
Led L25 = L[25];
Led L26 = L[26];
Led L27 = L[27];

Led Pattern1[] = {L1,L2, L3, L4, L5, L6, L7, L8, L9, L10, L11, L12, L13, L14, L15, L16, L17, L18, L19, L20, L21, L22, L23, L24, L25, L26, L27};



// executeLedArray(PATTERN, NUMBER OF ELEMENTS, DEFAULT DELAY)

executeLedArray(Pattern1, 27, 100);

}


void executeLedArray(Led Pattern[], int elements, int delayLength) {

for (int i = 0; i <= elements; i++) {

      switch (Pattern[i].C) {
    case 1:
      digitalWrite(P1, HIGH);
      break;
    case 2:
      digitalWrite(P2, HIGH);
      break;
    case 3:
      digitalWrite(P3, HIGH);
      break;
    case 4:
      digitalWrite(P4, HIGH);
      break;
    case 5:
      digitalWrite(P5, HIGH);
      break;
    case 6:
      digitalWrite(P6, HIGH);
      break;
    case 7:
      digitalWrite(P7, HIGH);
      break;
    case 8:
      digitalWrite(P8, HIGH);
      break;
    case 9:
      digitalWrite(P9, HIGH);
      break;
  }
  
  switch (Pattern[i].R1) {
    case HIGH:
      digitalWrite(E1, HIGH);
      break;
    case LOW:
      digitalWrite(E1, LOW);
      break;
  }

  switch (Pattern[i].R2) {
    case HIGH:
      digitalWrite(E2, HIGH);
      break;
    case LOW:
      digitalWrite(E2, LOW);
      break;
  }

    switch (Pattern[i].R3) {
    case HIGH:
      digitalWrite(E3, HIGH);
      break;
    case LOW:
      digitalWrite(E3, LOW);
      break;
  }  

  delay(delayLength);
  LedOFF();

}

Serial.println("####################");

/*
  switch (Pattern[0]) {
    case 1:
      digitalWrite(P1, HIGH);
      break;      
    case 2:
      digitalWrite(P2, HIGH);
      break;
    case 3:
      digitalWrite(P3, HIGH);
      break;
    case 4:
      digitalWrite(P4, HIGH);
      break;
    case 5:
      digitalWrite(P5, HIGH);
      break;
    case 6:
      digitalWrite(P6, HIGH);
      break;
    case 7:
      digitalWrite(P7, HIGH);
      break;
    case 8:
      digitalWrite(P8, HIGH);
      break;
    case 9:
      digitalWrite(P9, HIGH);
      break;
 }
  switch (Pattern[1]) {
    case 1:
      digitalWrite(E1, HIGH); digitalWrite(E2, HIGH); digitalWrite(E3, LOW);
    case 2:
      digitalWrite(E1, HIGH); digitalWrite(E2, LOW); digitalWrite(E3, HIGH);
    case 3:
      digitalWrite(E1, LOW); digitalWrite(E2, HIGH); digitalWrite(E3, HIGH);
  }
  delay(delayLength);
  LedOFF();

*/

delay(delayLength);
}
