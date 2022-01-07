#define GOMB_KOZEP 8
#define GOMB_BAL 4
#define GOMB_FEL 6
#define GOMB_JOBB 7
#define GOMB_LE 5
void setup() {
  pinMode(GOMB_KOZEP, INPUT);
  pinMode(GOMB_BAL, INPUT);
  pinMode(GOMB_FEL, INPUT);
  pinMode(GOMB_JOBB, INPUT);
  Serial.begin(9600);
  Serial.println("HANGOS prog v1");

}

void loop() {
if (digitalRead(GOMB_KOZEP))
{
 
  tone(2, 2000, 20);
}
if (digitalRead(GOMB_BAL))
{
 
  tone(2, 4000, 20);
}
if (digitalRead(GOMB_FEL))
{
  
  tone(2, 4000, 20);
}
if (digitalRead(GOMB_JOBB))
{
  
  tone(2, 4000, 20);
}
if (digitalRead(GOMB_LE))
{
  
  tone(2, 4000, 20);
}
}
