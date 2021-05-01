uint8_t buf[8] = {0, 0, 0, 0, 0, 0, 0, 0};

#define COPY_PIN  5
#define CUT_PIN   6
#define PASTE_PIN 7

#define MOD_CTRL_LEFT 1<<0
#define KEY_C   6
#define KEY_V   25
#define KEY_X   27

void setup() {
  Serial.begin(9600);

  pinMode(COPY_PIN, INPUT);
  pinMode(CUT_PIN, INPUT);
  pinMode(PASTE_PIN, INPUT);
}

void loop() {
  if (digitalRead(COPY_PIN) == HIGH) {  // Testare buton copy
    buf[0] = MOD_CTRL_LEFT;
    buf[2] = KEY_C;
    Serial.write(buf, 8);
    releaseKey();
  }

  if (digitalRead(CUT_PIN) == HIGH) {  // Testare buton cut
    buf[0] = MOD_CTRL_LEFT;
    buf[2] = KEY_X;
    Serial.write(buf, 8);
    releaseKey();
  }

  if (digitalRead(PASTE_PIN) == HIGH) {  // Testare buton paste
    buf[0] = MOD_CTRL_LEFT;
    buf[2] = KEY_V;
    Serial.write(buf, 8);
    releaseKey();
  }
  
  delay(100);
}

void releaseKey() { // Resetare tasta
  buf[0] = 0;
  buf[2] = 0;
  Serial.write(buf, 8); 
}
