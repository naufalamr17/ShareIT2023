// Pin yang digunakan untuk sensor MQ
const int mqPin = A0;
// Pin yang digunakan untuk buzzer
const int buzzerPin = 9;


void setup() {
  Serial.begin(9600);

  // Mengatur pin buzzer sebagai OUTPUT
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Membaca nilai sensor MQ
  int mqValue = analogRead(mqPin);

  // Menampilkan nilai di Serial Monitor
  Serial.print("Nilai Sensor MQ: ");
  Serial.println(mqValue);

  // Memeriksa apakah nilai melebihi 500
  if (mqValue > 500) {
    // Mengaktifkan buzzer
    digitalWrite(buzzerPin, HIGH);
  } else {
    // Mematikan buzzer
    digitalWrite(buzzerPin, LOW);
  }

  // Delay sebelum membaca ulang
  delay(1000);
}
