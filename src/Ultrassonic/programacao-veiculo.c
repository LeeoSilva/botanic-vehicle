//Incluindo biblioteca Ultrassonic.h
#include "Ultrassonic.h"

//Criando objeto ultrassonic e definindo as portas digitais
// do Trigger - 9 - e Echo - 11
Ultrassonic SensorUltrassonicol(9, 10);

long Microsegundos =0; //armazena o valor do tempo da reflexão do som refletido pelo objeto fornecido pela biblioteca do sensor 
float DistanciaCM =0; //armazena o valor da distancia a ser convertido por uma função da própria biblioteca do sensor 

#define MotorLadoEsquerdo1 7
#define MotorLadoEsquerdo2 8

#define MotorLadoDireito1 4
#define MotorLadoDireito2 5

#define VelocidadeMotorLadoEsquerdo 6
#define VelocidadeMotorLadoDireito 3

int FatorCorrecaoLadoEsquerdo =0;
int FatorCorrecaoLadoDireito =0;

// ------------------- Escolhe a velocidade dos motores  

int ValorVelocidadeMotorLadoEsquerdo =120;
int ValorVelocidadeMotorLadoDireito =80;

void setup() {
// ------------------- Definições de entrada e saída 

    pinMode(MotorLadoEsquerdo1, OUTPUT);
    pinMode(MotorLadoEsquerdo2, OUTPUT);
    pinMode(MotorLadoDireito1, OUTPUT);
    pinMode(MotorLadoDireito2, OUTPUT);

    Serial.begin(115200); // Inicia a comunicação serial com velocidade de 115200 bits por segundo

    delay(300); // Tempo de espera para inicialização (para dar tempo de por o robô no chão) 
}

void loop(){
    // Convertendo a distancia em CM e lendo o sensor
    DistanciaCM =SensorUltrassonicol.convert(SensorUltrassonicol.timing(), Ultrasonic::CM);

    Serial.print(DistanciaCM);
    Serial.println(" cm");

    if(DistanciaCM <= 40){ 
        // Velocidade do motor lado esquerdo 
        analogWrite( VelocidadeMotorLadoEsquerdo, ValorVelocidadeMotorLadoEsquerdo );

        // Velocidade do motor lado FatorCorrecaoLadoDireito
        analogWrite( VelocidadeMotorLadoDireito, ValorVelocidadeMotorLadoDireito );

        // Motor lado esquerdo para trás
        digitalWrite(MotorLadoEsquerdo1, HIGH);
        digitalWrite(MotorLadoEsquerdo2, LOW);

        // Motor lado direito para trás 
        digitalWrite(MotorLadoDireito1, HIGH);
        digitalWrite(MotorLadoDireito2, LOW);

        delay(700); // Tempo que ficará indo para trás

        // Motor lado esquerdo para frente
        digitalWrite(MotorLadoEsquerdo1, LOW);
    }
}

