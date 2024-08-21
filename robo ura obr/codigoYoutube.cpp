// Sensores
#define pinSensorD 13
#define pinSensorE 12

// Motores
#define pinMotorD1 10
#define pinMotorD2 9
#define pinMotorE3 5
#define pinMotorE4 6

void setup() {
  // Sensores
  pinMode(pinSensorD, INPUT);
  pinMode(pinSensorE, INPUT);

  // Motores
  pinMode(pinMotorD1, OUTPUT);
  pinMode(pinMotorD2, OUTPUT);
  pinMode(pinMotorE3, OUTPUT);
  pinMode(pinMotorE4, OUTPUT);
}

void loop() {
  // Leitura dos sensores
  bool estadoD = digitalRead(pinSensorD);
  bool estadoE = digitalRead(pinSensorE);

  // Andar
  if (estadoD && estadoE) {
    analogWrite(pinMotorD1, 110);
    analogWrite(pinMotorE3, 110);
  } 
  // Parar
  else if (!estadoD && !estadoE) {
    digitalWrite(pinMotorD1, LOW);
    digitalWrite(pinMotorD2, LOW);
    digitalWrite(pinMotorE3, LOW);
    digitalWrite(pinMotorE4, LOW);
  } 
  // Ajustar a Direita
  else if (estadoD && !estadoE) {
    analogWrite(pinMotorD1, 115);
    digitalWrite(pinMotorE3, LOW);
  } 
  // Ajustar a Esquerda
  else if (!estadoD && estadoE) {
    digitalWrite(pinMotorD1, LOW);
    analogWrite(pinMotorE3, 120);
  }
}
