const int LED = 13;
const int SW = 7;
int sw_data = 0;

void setup() {
   Serial.begin(9600);
   pinMode(LED, OUTPUT);
   pinMode(SW, INPUT);
}

void loop() {
  // スイッチの値を取得
  sw_data = digitalRead(SW);
//  Serial.println(data);

  // スイッチの状態によってLED点灯/消灯切り替え
  if(sw_data == HIGH){
//    Serial.println("LED high...") ;
    digitalWrite(LED, HIGH);
  }else{
//    Serial.println("LED low...") ;
    digitalWrite(LED, LOW);
  }
  
  //ウェイト
  delay(100);
}
