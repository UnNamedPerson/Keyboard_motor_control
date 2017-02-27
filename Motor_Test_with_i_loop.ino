// motor driver sketch

int DigitalAW_1 = 10;
int DigitalAW_2 = 5;

int R_In1 = 6;
int R_In2 = 7;

int L_In1 = 13;
int L_In2 = 12;

int V_In1 = 1;
int V_In2 = 0;


 int i= 150;//for right motor
 int j= 150;//for left motor
 int counter = 0;//for general counter
 int k= abs(i);//for right motor
 int l= abs(j);//for left motor
 int m = 150;
 int n = 150;


void setup() {
  // put your setup code here, to run once:

  pinMode(R_In1, OUTPUT);
  pinMode(R_In2, OUTPUT);
  pinMode(V_In1, OUTPUT);
  pinMode(V_In2, OUTPUT);
  pinMode(DigitalAW_1, OUTPUT);  
  
  pinMode(L_In1, OUTPUT);
  pinMode(L_In2, OUTPUT);
  pinMode(DigitalAW_2, OUTPUT);

  Serial.begin(9600);
  analogWrite(DigitalAW_1, 165);
  analogWrite(DigitalAW_2, 165);

 
}

void control (int i){
    analogWrite(DigitalAW_1, k);
    if(i>0){
    digitalWrite(R_In1, HIGH);
    digitalWrite(R_In2, LOW);
    }
    else if (i<0){
    digitalWrite(R_In1, LOW);
    digitalWrite(R_In2, HIGH);
    }
    else{
    digitalWrite(R_In1, LOW);
    digitalWrite(R_In2, LOW);
    }
  }

void controlm2(int j){
    analogWrite(DigitalAW_2, l);
    if(j>0){
    digitalWrite(L_In1, HIGH);
    digitalWrite(L_In2, LOW);
    }
    else if (j<0){
    digitalWrite(L_In1, LOW);
    digitalWrite(L_In2, HIGH);
    }
    else{
    digitalWrite(L_In1, LOW);
    digitalWrite(L_In2, LOW);
    }
  }
  /*void icontrol(int m, int n){
    control(
  }*/
void loop() {
    
//    control(230);
//    delay(1000);
//    control(-200);
//    delay(1000);
//    control(0);
//    delay(1000);
  /*analogWrite(DigitalAW_1, 160);
     digitalWrite(R_In1, HIGH);
    digitalWrite(R_In2, LOW);
    delay(1000);
    analogWrite(DigitalAW_2, 230);
    digitalWrite(R_In1, HIGH);
    digitalWrite(R_In2, LOW);
       delay(1000);
    analogWrite(DigitalAW_2, 200);
    digitalWrite(R_In1, HIGH);
    digitalWrite(R_In2, LOW);
    delay(1000);
    analogWrite(DigitalAW_2, 150);
    digitalWrite(R_In1, HIGH);
    digitalWrite(R_In2, LOW);
    delay(1000);
    analogWrite(DigitalAW_2, 0);
    digitalWrite(R_In1, HIGH);
    digitalWrite(R_In2, LOW);
    delay(1000);*/
    
    
    
  /*for(int i=160; i<240; i++){
    analogWrite(DigitalAW_2, i);
    digitalWrite(R_In1, HIGH);
    digitalWrite(R_In2, LOW);
    delay(5000);
    digitalWrite(R_In1, LOW);
    digitalWrite(R_In2, HIGH);
  }*/
  // put your main code here, to run repeatedly:
while(Serial.available() > 0 ) {
  char c = Serial.read();
  if(c == 'w') {
    // for the right motor
    digitalWrite(R_In1, HIGH);
    digitalWrite(R_In2, LOW);

    // for the left motor
    digitalWrite(L_In1 , LOW);
    digitalWrite(L_In2, HIGH);
  }
  else if(c == 's') {
    // for the right motor
    digitalWrite(R_In1, LOW);
    digitalWrite(R_In2, HIGH);

    // for the left motor
    digitalWrite(L_In1, HIGH);
    digitalWrite(L_In2, LOW);
    
      }
   else if(c == 'p') {
//    analogWrite(DigitalAW, 0);

    digitalWrite(R_In1, LOW);
    digitalWrite(R_In2, LOW);
    
    digitalWrite(L_In1, LOW);
    digitalWrite(L_In2, LOW);
    
                    }
  
  }

}
