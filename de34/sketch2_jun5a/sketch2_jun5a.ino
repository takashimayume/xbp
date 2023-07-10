#include <Adafruit_NeoPixel.h>
#define PIN        9 // 信号用のピンを指定
#define NUMPIXELS 5 // LEDの数を指定
int brightness=50;//明るさ
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

// 音センサモジュール利用のLED点灯
 
// ポート指定用変数設定
int d8_in_port = 8;     // センサ アナログ情報入力
int a0_in_port = A0;    // センサ デジタル情報入力
int d13_out_port = 13;  // LED点灯用出力
 
// 受信データ用変数設定
int d8_data;    // digitalデータ用
int a0_data;    // analogデータ用
// 電圧値変換用変数
float v_data;
 
void setup() {
  // put your setup code here, to run once:
  // シリアルモニタ通信速度設定
  Serial.begin(9600);  
  // ポート設定
  pinMode(d8_in_port, INPUT);     // センサ情報入力設定
  pinMode(d13_out_port, OUTPUT);  // LED用出力設定 
  pixels.begin(); // NeoPixel出力ピンの初期化
  pixels.setBrightness(brightness);
}
 
void loop() {
  // put your main code here, to run repeatedly:
  // 音センサからの情報取得
  a0_data = analogRead(a0_in_port);   // アナログデータ
  d8_data = digitalRead(d8_in_port);  // デジタルデータ
 
  // 受信デジタル情報によりLED動作決定
  if(d8_data == HIGH){
      pixels.clear(); // すべてのLEDの色を0にセット
      for(int i=0; i<NUMPIXELS; i++) {
        pixels.setPixelColor(i, pixels.Color(255, , 0));
        pixels.show();
      } 
    }else {
      pixels.clear(); // すべてのLEDの色を0にセット
      for(int i=0; i<NUMPIXELS; i++) {
        pixels.setPixelColor(i, pixels.Color(0, 0, 0));
        pixels.show();
      } 
    }
 
    // 受信データをシリアルモニタへ出力
    // 電圧表現に変換計算
    v_data = (float)a0_data / 1024.0f * 5.0f;
  
    // シリアルモニタへ出力
    //  Serial.println( a0_data ); 
    Serial.println( v_data );
    //  Serial.println( d8_data ); 
      
    // 1m秒待機
    delay(100);

}
