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
  TurnOn(false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, false);
  TurnOn(false, false, false, true, false, false, true, false, true, true, false, false, false, false, true, false, false);
  TurnOn(false, false, false, false, true, false, true, false, true, false, false, false, false, false, false, false, false);
  TurnOn(false, false, false, false, false, false, false, false, true, true, false, true, false, false, true, false, false);
  TurnOn(false, true, false, false, false, false, false, false, true, true, false, true, false, false, true, false, false);
  TurnOn(false, true, false, false, false, true, false, false, true, false, false, true, false, false, true, false, false);
  TurnOn(false, false, false, true, false, false, true, false, false, false, false, false, false, true, false, true, false);
  TurnOn(false, false, false, false, true, true, true, false, true, false, false, false, false, false, false, true, false);
  TurnOn(false, false, false, false, true, true, false, false, false, false, false, false, false, false, false, false, false);
  TurnOn(false, false, false, true, false, false, true, false, false, false, false, false, false, true, false, true, false);
  TurnOn(false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, false);
  TurnOn(false, false, false, false, false, false, false, false, false, false, false, true, false, false, true, false, false);
  TurnOn(false, false, false, false, false, false, false, false, false, false, false, true, false, false, true, false, false);
  TurnOn(false, false, false, false, true, true, false, false, false, false, false, false, false, false, false, false, false);
  TurnOn(false, false, false, false, true, false, true, false, true, false, false, false, false, false, false, false, false);
  TurnOn(false, false, false, false, true, false, true, false, true, false, false, false, false, false, true, false, false);
  TurnOn(false, false, false, false, false, false, true, false, true, false, false, false, false, false, true, false, false);
  TurnOn(false, false, false, false, false, false, false, false, true, true, false, true, false, false, true, false, false);
  TurnOn(false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, false);
  TurnOn(false, false, false, false, false, false, true, false, true, false, false, false, false, false, true, false, false);
  TurnOn(false, false, false, false, true, false, true, false, false, false, false, false, false, false, true, false, false);
  TurnOn(false, false, false, false, true, true, true, false, true, false, false, false, false, false, false, true, false);
  TurnOn(false, false, false, false, true, true, false, false, false, false, false, false, false, false, false, false, false);
  TurnOn(false, false, false, false, false, false, false, false, true, true, false, true, false, false, true, false, false);
  TurnOn(false, false, false, false, true, false, true, false, true, false, false, false, false, false, true, false, false);
  TurnOn(false, false, false, false, true, true, false, false, false, false, false, false, false, false, false, false, false);
  TurnOn(false, false, false, false, true, false, true, true, true, false, false, false, false, false, true, false, false);
  TurnOn(false, false, false, false, true, true, true, false, true, false, false, false, false, false, false, true, false);
  TurnOn(false, false, false, false, true, true, false, false, false, false, false, false, false, false, false, false, false);
  TurnOn(false, false, false, false, false, false, false, false, true, true, false, true, false, false, true, false, false);
  TurnOn(false, false, false, false, true, false, true, false, true, false, false, false, false, false, true, false, false);
  TurnOn(true, false, false, false, true, false, false, true, true, false, false, true, false, false, true, false, false);
  TurnOn(false, false, false, false, true, true, true, false, true, false, false, false, false, false, false, true, false);
  TurnOn(false, false, false, false, false, false, false, false, true, true, false, true, false, false, true, false, false);
  TurnOn(false, false, false, false, false, false, true, true, true, false, false, false, false, false, true, false, false);
  TurnOn(false, false, false, false, true, true, true, false, true, false, false, false, false, false, false, true, false);
  TurnOn(false, false, false, false, false, false, true, false, true, false, false, false, false, false, false, false, false);
  TurnOn(true, false, false, false, true, false, false, false, false, true, false, true, false, false, true, false, false);
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
  digitalWrite(A1, inA1 ? 1 : 0);
  digitalWrite(A2, inA2 ? 1 : 0);
  digitalWrite(B, inB ? 1 : 0);
  digitalWrite(C, inC ? 1 : 0);
  digitalWrite(D1, inD1 ? 1 : 0);
  digitalWrite(D2, inD2 ? 1 : 0);
  digitalWrite(E, inE ? 1 : 0);
  digitalWrite(F, inF ? 1 : 0);
  digitalWrite(G1, inG1 ? 1 : 0);
  digitalWrite(G2, inG2 ? 1 : 0);
  digitalWrite(J, inJ ? 1 : 0);
  digitalWrite(K, inK ? 1 : 0);
  digitalWrite(L, inL ? 1 : 0);
  digitalWrite(M, inM ? 1 : 0);
  digitalWrite(N, inN ? 1 : 0);
  digitalWrite(P, inP ? 1 : 0);
  digitalWrite(DP, inDP ? 1 : 0);
  delay(1000);
  TurnOff();
}