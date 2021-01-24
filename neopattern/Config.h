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


Led All[] = {L1,L2, L3, L4, L5, L6, L7, L8, L9, L10, L11, L12, L13, L14, L15, L16, L17, L18, L19, L20, L21, L22, L23, L24, L25, L26, L27};
Led Level1[] = {L1,L2, L3, L4, L5, L6, L7, L8, L9,}; 
Led DLC[] = {L1, L2, L4, L5, L10, L11, L14, L13};
Led DRC[] = {L2, L3, L5, L6, L11, L12, L14, L15};


#endif
