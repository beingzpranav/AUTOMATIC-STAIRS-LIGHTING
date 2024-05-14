void setup() {
  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  int m = digitalRead(A0); //starting sensor
  int n = digitalRead(A1); //end sensor

  if (m == 0 && n == 1) {
    for (int i = 2; i <= 11; i++) {
      digitalWrite(i, HIGH);
      delay(500);
    }
    delay(5);
    for (int i = 2; i <= 11; i++) {
      digitalWrite(i, LOW);
      delay(500);
    }
  } else if (m == 1 && n == 0) {
    for (int i = 11; i >= 2; i--) {
      digitalWrite(i, HIGH);
      delay(500);
    }
    delay(5);
    for (int i = 11; i >= 2; i--) {
      digitalWrite(i, LOW);
      delay(500);
    }
  }
}
