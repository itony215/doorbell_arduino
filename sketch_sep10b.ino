
//音階頻率
int freq[] = {262,294,330,349,392,440,494,523,0};
//輸入歌曲音調
int melody[] = {1,6,6,6,5,2,3,9,1,6,6,6,7,8,5,9,1,6,6,7,7,7,7,8,6,6,6,6,7,6,5,5,8};
//輸入節拍
int beat[] = {2,2,1,1,2,1,2,2,2,2,1,1,2,1,2,2,2,2,2,2,2,2,2,4,1,1,1,1,1,1,1,2,2};

const int buzzer = 11;
void setup() 
{
    // 設定 A0 輸入
    pinMode(A2, INPUT);
    pinMode(buzzer, OUTPUT);
}
 
void loop() 
{
    // 讀值
    delay(1000);
    int sensorValue = analogRead(A1);
    if(sensorValue>1000)
    {
       for(int i = 0 ; i < 33; i++){
          tone(buzzer, freq[melody[i]-1]);
          delay(beat[i]*250); 
        noTone(buzzer);
        delay(0);
        }
        delay(60000);
    }
    noTone(buzzer);
    
    /*
    if(val == LOW)
    {
      
      Serial.println("LOW");
    } else
    {
      Serial.println(val );
    }*/
    
    
    
}
