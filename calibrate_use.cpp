#define M3_PWM_PIN 9 // third driver farfront
#define M3_INA_PIN 10
#define M3_INB_PIN 11
#define M2_PWM_PIN 5 // second driver mid
#define M2_INA_PIN 6
#define M2_INB_PIN 7
#define PWM_PIN 2 // first driver Z AXIS
#define INA_PIN 3
#define INB_PIN 4 
int m1_ran = 0;



void setup() {
  // put your setup code here, to run once:
  pinMode(PWM_PIN, OUTPUT);
  pinMode(INA_PIN, OUTPUT);
  pinMode(INB_PIN, OUTPUT);
  pinMode(M2_PWM_PIN, OUTPUT);
  pinMode(M2_INA_PIN, OUTPUT);
  pinMode(M2_INB_PIN, OUTPUT);
  pinMode(M3_PWM_PIN, OUTPUT);
  pinMode(M3_INA_PIN, OUTPUT);
  pinMode(M3_INB_PIN, OUTPUT);

  Serial.begin(9600);
  
}


void m2_move(int duration_m2){
  analogWrite(M2_PWM_PIN, 50);
  digitalWrite(M2_INA_PIN, HIGH);
  digitalWrite(M2_INB_PIN, LOW);
  delay(duration_m2);
  analogWrite(M2_PWM_PIN, 0);
  digitalWrite(M2_INA_PIN, LOW);
  digitalWrite(M2_INB_PIN, LOW);
  delay(duration_m2);
  analogWrite(M2_PWM_PIN, 50);
  digitalWrite(M2_INA_PIN, LOW);
  digitalWrite(M2_INB_PIN, HIGH);
  delay(duration_m2*2.5);
  analogWrite(M2_PWM_PIN, 0);
  digitalWrite(M2_INA_PIN, LOW);
  digitalWrite(M2_INB_PIN, LOW);
  delay(duration_m2);
  analogWrite(M2_PWM_PIN, 50);
  digitalWrite(M2_INA_PIN, HIGH);
  digitalWrite(M2_INB_PIN, LOW);
  delay(duration_m2*1.5);
  analogWrite(M2_PWM_PIN, 0);
  digitalWrite(M2_INA_PIN, LOW);
  digitalWrite(M2_INB_PIN, LOW);
  exit(0);



  
}

void m1_move(int duration_m1){
  
  analogWrite(PWM_PIN, 255);
  digitalWrite(INA_PIN, HIGH);
  digitalWrite(INB_PIN, LOW);
  delay(duration_m1);
  analogWrite(PWM_PIN, 0);
  digitalWrite(INA_PIN, LOW);
  digitalWrite(INB_PIN, LOW);
  delay(duration_m1);
  analogWrite(PWM_PIN, 255);
  digitalWrite(INA_PIN, LOW);
  digitalWrite(INB_PIN, HIGH);
  delay(duration_m1*2.5);
  analogWrite(PWM_PIN, 255);
  digitalWrite(INA_PIN, LOW);
  digitalWrite(INB_PIN, LOW);
  delay(duration_m1);
  analogWrite(PWM_PIN, 255);
  digitalWrite(INA_PIN, HIGH);
  digitalWrite(INB_PIN, LOW);
  delay(duration_m1*1.5);
  analogWrite(PWM_PIN, 255);
  digitalWrite(INA_PIN, LOW);
  digitalWrite(INB_PIN, LOW);
  m1_ran = 0;



  
}
void m1_2_move(int duration_m12){
  analogWrite(PWM_PIN, 50);
  digitalWrite(INA_PIN, HIGH);
  digitalWrite(INB_PIN, LOW);
  analogWrite(M2_PWM_PIN, 50);
  digitalWrite(M2_INA_PIN, LOW);
  digitalWrite(M2_INB_PIN, HIGH);
  delay(duration_m12);
  exit(0);
}

void calibrate(){
  analogWrite(M3_PWM_PIN, 50);
  digitalWrite(M3_INA_PIN, HIGH);
  digitalWrite(M3_INB_PIN, LOW);
  delay(1000);
}
void loop() {


  m1_move(2000);


  
  

  
}
