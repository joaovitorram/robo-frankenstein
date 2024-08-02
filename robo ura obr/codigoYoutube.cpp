//Sensores
#define pinSensorD 11
#define pinSensorE 12

//Motores
#define pinMotorD1 3
#define pinMotoD2 5
#define pinMotorE3 6
#define pinMotorE4 9

void setup() {
//Sensores
pinMode(pinSensorD, INPUT);
pinMode(pinSensorE, INPUT);

//Motores
pinMode(pinMotorD1, OUTPUT);
pinMode(pinMotorD2, OUTPUT);
pinMode(pinMotorE3, OUTPUT);
pinMode(pinMotorE4, OUTPUT);

}

void loop() {

    bool estadoD = !digitalRead(pinSensorD);
    bool estadoE = !digitalRead(pinSensorE);

//Andar
if(estadoD && estadoE) {
    analogWrite(pinMotorD1, 90);
    analogWrite(pinMotorE3, 90);
}

//Parar
if(!estadoD && !estadoE)
    digitalWrite(pinMotorD1, LOW);
    digitalWrite(pinMotorD2, LOW);
    digitalWrite(pinMotorE2, LOW);
    digitalWrite(pinMotorE4, LOW);
}

//Ajustar a Direita
if(!estadoD && estadoE) {
    analogWrite(pinMotorD1, 90);
    digitalWrite(pinMotorE3, LOW);
}

//Ajustar a Esquerda
if(estadoD && !estadoE) {
    digitalWrite(pinMotorD1, LOW);
    analogWrite(pinMotorE3, 90);
}