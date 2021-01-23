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


void executeLedArray(int LedArray[], int delayLength) {
  switch (LedArray[0]) {
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
  switch (LedArray[1]) {
    case 1:
      digitalWrite(E1, HIGH); digitalWrite(E2, HIGH); digitalWrite(E3, LOW);
    case 2:
      digitalWrite(E1, HIGH); digitalWrite(E2, LOW); digitalWrite(E3, HIGH);
    case 3:
      digitalWrite(E1, LOW); digitalWrite(E2, HIGH); digitalWrite(E3, HIGH);
  }
  delay(delayLength);
  LedOFF();
}

void loop() {
  int L1[] = {1, 1};
  int L2[] = {2, 1};
  int L3[] = {3, 1};
  int L4[] = {4, 1};
  int L5[] = {5, 1};
  int L6[] = {6, 1};
  int L7[] = {7, 1};
  int L8[] = {8, 1};
  int L9[] = {9, 1};
  int L10[] = {1, 2};
  int L11[] = {2, 2};
  int L12[] = {3, 2};
  int L13[] = {4, 2};
  int L14[] = {5, 2};
  int L15[] = {6, 2};
  int L16[] = {7, 2};
  int L17[] = {8, 2};
  int L18[] = {9, 2};
  int L19[] = {1, 3};
  int L20[] = {2, 3};
  int L21[] = {3, 3};
  int L22[] = {4, 3};
  int L23[] = {5, 3};
  int L24[] = {6, 3};
  int L25[] = {7, 3};
  int L26[] = {8, 3};
  int L27[] = {9, 3};

  
//executeLedArray(L25);

//executeLedArray(L1, 100);
//executeLedArray(L2, 100);


  
  //digitalWrite(P1, HIGH); digitalWrite(E1, LOW); digitalWrite(E2, HIGH); digitalWrite(E3, HIGH);

}
