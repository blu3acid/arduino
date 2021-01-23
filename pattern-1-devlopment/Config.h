#ifndef Config_h
#define Config_h

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

struct Led{
  int C;
  bool R1;
  bool R2;
  bool R3;
};

Led L[27];

#endif
