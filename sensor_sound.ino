int led_pin = D4;
int led2_pin = D8;
int D0_Value = D0;
int buzzler = D3;
//int raw_Value = A0;

void setup(){
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);
  pinMode(led2_pin, OUTPUT);
  pinMode(buzzler, OUTPUT);
  pinMode(D0_Value, INPUT); // Set pin D8 as digital output
//  pinMode(raw_Value, INPUT); //Set pin A0 as an input
}

void loop(){
  int val_digital = digitalRead(D0_Value);
//  int val_analog = analogRead(raw_Value );

//  Serial.print(raw_Value);
  Serial.print("\t");
  Serial.println(D0_Value);
  delay(5000);

}
