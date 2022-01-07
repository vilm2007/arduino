#define red_led      9
#define green_led    10
#define blue_led     11


#define gomb_kozep    8
int gomb_elozo = 0;
int led_allapot = 0;

void setup() {
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(blue_led, OUTPUT);
  pinMode(gomb_kozep, INPUT);
}

void loop() {
  int gomb_aktual = digitalRead(gomb_kozep);
  if (gomb_aktual == 1 & gomb_elozo == 0) {
    gomb_elozo = 1;
    led_allapot = !led_allapot;
    digitalWrite(10, led_allapot);
    delay(10);

    int gomb_aktual = digitalRead(gomb_kozep);
  if (gomb_aktual == 1 & gomb_elozo == 0) {
    gomb_elozo = 1;
    led_allapot = !led_allapot;
    digitalWrite(11, led_allapot);
    delay(10);
  }
  }
else if (gomb_aktual == 0 & gomb_elozo == 1) {
  gomb_elozo = 0;
}
}
