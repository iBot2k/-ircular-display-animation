#define A  8
#define B  7
#define C  6
#define D  5
#define E  4
#define F  3

void setup() {
   pinMode(A, OUTPUT);
   pinMode(B, OUTPUT);
   pinMode(C, OUTPUT);
   pinMode(D, OUTPUT);
   pinMode(E, OUTPUT);
   pinMode(F, OUTPUT);
}

void loop() {

   digitalWrite(A, HIGH); // ВЕРХНЯЯ ГРАНИЦА(А)
   digitalWrite(B, LOW);
   digitalWrite(C, LOW);
   digitalWrite(D, LOW);
   digitalWrite(E, LOW);
   digitalWrite(F, LOW);
   delay(100);
   
   digitalWrite(A, LOW); // ЛЕВАЯ ГРАНИЦА(F)
   digitalWrite(B, LOW);
   digitalWrite(C, LOW);
   digitalWrite(D, LOW);
   digitalWrite(E, LOW);
   digitalWrite(F, HIGH);
   delay(100);
   
   digitalWrite(A, LOW); // ЛЕВАЯ ГРАНИЦА(E)
   digitalWrite(B, LOW);
   digitalWrite(C, LOW);
   digitalWrite(D, LOW);
   digitalWrite(E, HIGH);
   digitalWrite(F, LOW);
   delay(100);

   digitalWrite(A, LOW); // НИЖНЯЯ ГРАНИЦА(D)
   digitalWrite(B, LOW);
   digitalWrite(C, LOW);
   digitalWrite(D, HIGH);
   digitalWrite(E, LOW);
   digitalWrite(F, LOW);
   delay(100);

   digitalWrite(A, LOW); // ПРАВАЯ ГРАНИЦА(С)
   digitalWrite(B, LOW);
   digitalWrite(C, HIGH);
   digitalWrite(D, LOW);
   digitalWrite(E, LOW);
   digitalWrite(F, LOW);
   delay(100);

   digitalWrite(A, LOW); // ПРАВАЯ ГРАНИЦА(В)
   digitalWrite(B, HIGH);
   digitalWrite(C, LOW);
   digitalWrite(D, LOW);
   digitalWrite(E, LOW);
   digitalWrite(F, LOW);
   delay(100);
}
