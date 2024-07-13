// sensor 1
int pinIrC = 8;
int pinIrD = 9;
int pinIrE = 7;


// motores
int pinoM1a = 5;
int pinoM1b = 6;
int pinoM2a = 10;
int pinoM2b = 11;

void setup()
{
    Serial.begin(9600);

  // sensor Direiro
  pinMode(pinIrD, INPUT);
  // sensor Central
  pinMode(pinIrC, INPUT);
  // sensor Esquerdo
  pinMode(pinIrE, INPUT);
  
  
   //motor 1
  pinMode(pinoM1a, OUTPUT);
  pinMode(pinoM1b, OUTPUT);
  // motor 2
  pinMode(pinoM2a, OUTPUT);
  pinMode(pinoM2b, OUTPUT);

}

void loop()
{
  //Sensor Direito
  bool valorLidoD = digitalRead(pinIrD);
   // sensor Central
  bool valorLidoC = digitalRead(pinIrC);
   // sensor Esquerdo
  bool valorLidoE = digitalRead(pinIrE);

    
  if(valorLidoC){
    frente();
    
  }
  
  else if (valorLidoD){
   ajustarDireita();
    
  }
  
  else if (valorLidoE){
    ajustarEsquerda();
    
  }
  
  else if (valorLidoE && valorLidoC){
    esquerda();
  }

  else if (valorLidoD && valorLidoC){
    direita();
  }
  
  
  function frentre(){
    
    digitalWrite(pinoM1a, HIGH);
    digitalWrite(pinoM1b, LOW);
    analogWrite(pinoM1a, 255);
    analogWrite(pinoM1b, 0);

    digitalWrite(pinoM2a, HIGH);
    digitalWrite(pinoM2b, LOW);
    analogWrite(pinoM2a, 255);
    analogWrite(pinoM2b, 0);
    
  }

  function direita(){
    
    digitalWrite(pinoM1a, HIGH);
    digitalWrite(pinoM1b, LOW);
    analogWrite(pinoM1a, 155);
    analogWrite(pinoM1b, 0);

    digitalWrite(pinoM2a, HIGH);
    digitalWrite(pinoM2b, LOW);
    analogWrite(pinoM2a, 255);
    analogWrite(pinoM2b, 0);
    
  }

  function esquerda(){
    
    digitalWrite(pinoM1a, HIGH);
    digitalWrite(pinoM1b, LOW);
    analogWrite(pinoM1a, 155);
    analogWrite(pinoM1b, 0);

    digitalWrite(pinoM2a, HIGH);
    digitalWrite(pinoM2b, LOW);
    analogWrite(pinoM2a, 155);
    analogWrite(pinoM2b, 0);
    
  }
  
  function ajustarDireita(){
    
    digitalWrite(pinoM1a, HIGH);
    digitalWrite(pinoM1b, LOW);
    analogWrite(pinoM1a, 255);
    analogWrite(pinoM1b, 0);

    digitalWrite(pinoM2a, HIGH);
    digitalWrite(pinoM2b, LOW);
    analogWrite(pinoM2a, 240);
    analogWrite(pinoM2b, 0);
    
  }

  function ajustarEsquerda(){
    
    digitalWrite(pinoM1a, HIGH);
    digitalWrite(pinoM1b, LOW);
    analogWrite(pinoM1a, 240);
    analogWrite(pinoM1b, 0);

    digitalWrite(pinoM2a, HIGH);
    digitalWrite(pinoM2b, LOW);
    analogWrite(pinoM2a, 255);
    analogWrite(pinoM2b, 0);
    
  }
  	
}