int pinoM1a = 5;
int pinoM1b = 6;
int pinoM2a = 10;
int pinoM2b = 11;


void setup() {
  //motor 1
pinMode(pinoM1a, OUTPUT);
pinMode(pinoM1b, OUTPUT);
// motor 2
pinMode(pinoM2a, OUTPUT);
pinMode(pinoM2b, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinoM1a, HIGH );
  digitalWrite(pinoM1b,LOW);


  digitalWrite(pinoM2a, LOW );
  digitalWrite(pinoM2b, HIGH);


}
