SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

Thread thread1;
Thread thread2;

void thread1Function() {
  while (1) {
    digitalWrite(D2, HIGH);
    delay(500);
    digitalWrite(D2, LOW);
    delay(500);
  }
}

void thread2Function() {
  while(1){
    digitalWrite(D3, HIGH);
    delay(200);
    digitalWrite(D3, LOW);
    delay(200);
  }
}

void setup() {
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  thread1 = Thread("thread1", thread1Function);
  thread2 = Thread("thread2", thread2Function);
}

void loop() {

}