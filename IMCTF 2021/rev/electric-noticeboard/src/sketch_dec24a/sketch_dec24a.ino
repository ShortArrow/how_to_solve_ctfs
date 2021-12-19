int A1 = 2;
int A2 = 3;
int B = 4;
int C = 5;
int D1 = 6;
int D2 = 11;
int E = 12;
int F = 13;
int G1 = 14;
int G2 = 15;
int J = 16;
int K = 17;
int L = 18;
int M = 19;
int N = 23;
int P = 24;
int DP = 25;
int Next = 26;

void setup()
{
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G1, OUTPUT);
  pinMode(G2, OUTPUT);
  pinMode(J, OUTPUT);
  pinMode(K, OUTPUT);
  pinMode(L, OUTPUT);
  pinMode(M, OUTPUT);
  pinMode(N, OUTPUT);
  pinMode(P, OUTPUT);
  pinMode(DP, OUTPUT);
  pinMode(Next, OUTPUT);
  TurnOff();
}

void loop()
{
  TurnOn(false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, false); // i
  TurnOn(false, false, false, true, false, false, true, false, true, true, false, false, false, false, true, false, false);     // m
  TurnOn(false, false, false, false, true, false, true, false, true, false, false, false, false, false, false, false, false);   // c
  TurnOn(false, false, false, false, false, false, false, false, true, true, false, true, false, false, true, false, false);    // t
  TurnOn(false, true, false, false, false, false, false, false, true, true, false, true, false, false, true, false, false);     // f
  TurnOn(false, true, false, false, false, true, false, false, true, false, false, true, false, false, true, false, false);     // {
  TurnOn(false, false, false, true, false, false, true, false, false, false, false, false, false, true, false, true, false);    // w
  TurnOn(false, false, false, false, true, true, true, false, true, false, false, false, false, false, false, true, false);     // e
  TurnOn(false, false, false, false, true, true, false, false, false, false, false, false, false, false, false, false, false);  // _
  TurnOn(false, false, false, true, false, false, true, false, false, false, false, false, false, true, false, true, false);    // w
  TurnOn(false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, false); // i
  TurnOn(false, false, false, false, false, false, false, false, false, false, false, true, false, false, true, false, false);  // l
  TurnOn(false, false, false, false, false, false, false, false, false, false, false, true, false, false, true, false, false);  // l
  TurnOn(false, false, false, false, true, true, false, false, false, false, false, false, false, false, false, false, false);  // _
  TurnOn(false, false, false, false, true, false, true, false, true, false, false, false, false, false, false, false, false);   // c
  TurnOn(false, false, false, false, true, false, true, false, true, false, false, false, false, false, true, false, false);    // o
  TurnOn(false, false, false, false, false, false, true, false, true, false, false, false, false, false, true, false, false);   // n
  TurnOn(false, false, false, false, false, false, false, false, true, true, false, true, false, false, true, false, false);    // t
  TurnOn(false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, false); // i
  TurnOn(false, false, false, false, false, false, true, false, true, false, false, false, false, false, true, false, false);   // n
  TurnOn(false, false, false, false, true, false, true, false, false, false, false, false, false, false, true, false, false);   // u
  TurnOn(false, false, false, false, true, true, true, false, true, false, false, false, false, false, false, true, false);     // e
  TurnOn(false, false, false, false, true, true, false, false, false, false, false, false, false, false, false, false, false);  // _
  TurnOn(false, false, false, false, false, false, false, false, true, true, false, true, false, false, true, false, false);    // t
  TurnOn(false, false, false, false, true, false, true, false, true, false, false, false, false, false, true, false, false);    // o
  TurnOn(false, false, false, false, true, true, false, false, false, false, false, false, false, false, false, false, false);  // _
  TurnOn(false, false, false, false, true, false, true, true, true, false, false, false, false, false, true, false, false);     // b
  TurnOn(false, false, false, false, true, true, true, false, true, false, false, false, false, false, false, true, false);     // e
  TurnOn(false, false, false, false, true, true, false, false, false, false, false, false, false, false, false, false, false);  // _
  TurnOn(false, false, false, false, false, false, false, false, true, true, false, true, false, false, true, false, false);    // t
  TurnOn(false, false, false, false, true, false, true, false, true, false, false, false, false, false, true, false, false);    // o
  TurnOn(true, false, false, false, true, false, false, true, true, false, false, true, false, false, true, false, false);      // g
  TurnOn(false, false, false, false, true, true, true, false, true, false, false, false, false, false, false, true, false);     // e
  TurnOn(false, false, false, false, false, false, false, false, true, true, false, true, false, false, true, false, false);    // t
  TurnOn(false, false, false, false, false, false, true, true, true, false, false, false, false, false, true, false, false);    // h
  TurnOn(false, false, false, false, true, true, true, false, true, false, false, false, false, false, false, true, false);     // e
  TurnOn(false, false, false, false, false, false, true, false, true, false, false, false, false, false, false, false, false);  // r
  TurnOn(true, false, false, false, true, false, false, false, false, true, false, true, false, false, true, false, false);     // }
}

void TurnOff()
{
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G1, LOW);
  digitalWrite(G2, LOW);
  digitalWrite(J, LOW);
  digitalWrite(K, LOW);
  digitalWrite(L, LOW);
  digitalWrite(M, LOW);
  digitalWrite(N, LOW);
  digitalWrite(P, LOW);
  digitalWrite(DP, LOW);
  digitalWrite(Next, HIGH);
  delay(50);
  digitalWrite(Next, LOW);
}

void TurnOn(
    bool inA1,
    bool inA2,
    bool inB,
    bool inC,
    bool inD1,
    bool inD2,
    bool inE,
    bool inF,
    bool inG1,
    bool inG2,
    bool inJ,
    bool inK,
    bool inL,
    bool inM,
    bool inN,
    bool inP,
    bool inDP)
{
  digitalWrite(A1, inA1 ? HIGH : LOW);
  digitalWrite(A2, inA2 ? HIGH : LOW);
  digitalWrite(B, inB ? HIGH : LOW);
  digitalWrite(C, inC ? HIGH : LOW);
  digitalWrite(D1, inD1 ? HIGH : LOW);
  digitalWrite(D2, inD2 ? HIGH : LOW);
  digitalWrite(E, inE ? HIGH : LOW);
  digitalWrite(F, inF ? HIGH : LOW);
  digitalWrite(G1, inG1 ? HIGH : LOW);
  digitalWrite(G2, inG2 ? HIGH : LOW);
  digitalWrite(J, inJ ? HIGH : LOW);
  digitalWrite(K, inK ? HIGH : LOW);
  digitalWrite(L, inL ? HIGH : LOW);
  digitalWrite(M, inM ? HIGH : LOW);
  digitalWrite(N, inN ? HIGH : LOW);
  digitalWrite(P, inP ? HIGH : LOW);
  digitalWrite(DP, inDP ? HIGH : LOW);
  delay(1000);
  TurnOff();
}