#define P1 A11
#define P2 20
#define P3 14
#define P4 A12
#define P5 18
#define P6 15
#define P7 A13
#define P8 17
#define P9 16

#define E1 A8
#define E2 A9
#define E3 A10

int S = 1000;
int HS = 500;
int ZHS = 200;
int HUN = 100;
int ZWA = 20;
int ZEH = 10;
int ZWE = 2;


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

struct Led{
  int C;
  bool R1;
  bool R2;
  bool R3;
};
Led L[27];

void executeLedArray(Led Pattern[], int delayLength);

void loop() {



L[1] = {1, false, false, true};
L[2] = {2, false, false, true};
L[3] = {3, false, false, true};
L[4] = {4, false, false, true};

Led Pattern1[] = {L[1], L[2], L[3], L[4]};
Serial.println("Pattern1 sizeof");
Serial.println(sizeof(Pattern1));
//int Pattern1[] = {L1, L2};
  

executeLedArray(&Pattern1, 100);
//executeLedArray(L2, 100);

}


void executeLedArray(Led *Pattern, int delayLength) {


int arraylength = (sizeof(Pattern)/sizeof(Led));
Serial.println("####################");
Serial.println(arraylength);
Serial.println(sizeof(Pattern));
Serial.println(sizeof(Led));
Serial.println(sizeof(L));
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

delay(2000);
}
