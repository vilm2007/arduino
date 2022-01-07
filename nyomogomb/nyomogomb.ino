#define white_led    2
#define gomb_kozep    8
int gomb_elozo = 0;
int led_allapot = 0;

void setup() {
  pinMode(white_led, OUTPUT);
  pinMode(gomb_kozep, INPUT);
}

void loop() {
  int gomb_aktual = digitalRead(gomb_kozep);
  if (gomb_aktual == 1 & gomb_elozo == 0) {
    gomb_elozo = 1;
    led_allapot = !led_allapot;
    digitalWrite(13, led_allapot);
    delay(10);
  }

else if (gomb_aktual == 0 & gomb_elozo == 1) {
  gomb_elozo = 0;
}
}
