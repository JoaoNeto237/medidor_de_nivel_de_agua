const int analogInPin = A0;
int sensorValue = 0;

void setup() {
  pinMode(2, OUTPUT);  // LED 1
  pinMode(3, OUTPUT);  // LED 2
  pinMode(4, OUTPUT);  // LED 3
  pinMode(5, OUTPUT);  // LED 4
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(analogInPin);
  Serial.print("sensor = ");
  Serial.println(sensorValue);

  // Apaga todos os LEDs primeiro
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);

  // Níveis com maior sensibilidade
  if (sensorValue >= 100) digitalWrite(2, HIGH);       // LED 1
  if (sensorValue >= 300) digitalWrite(3, HIGH);       // LED 2
  if (sensorValue >= 500) digitalWrite(4, HIGH);       // LED 3
  if (sensorValue >= 650) digitalWrite(5, HIGH);       // LED 4

  delay(100);  // pequena pausa para leitura mais estável
}
