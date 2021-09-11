
 unsigned long S_Time ;
 unsigned long F_Time ;
 int Val ;
 unsigned long del_T ;
 
 void setup() {
  Serial.begin(115200) ;
  analogReadResolution(12);
  delay(1000) ;

  S_Time = millis()  ;
  
  for ( int JJ=0; JJ< 1000; JJ++ )
  {
   Val = analogRead(A0) ;
  }
   del_T = millis() - S_Time ;

   delay(1000) ; 
   Serial.println(del_T) ;    
 }

 void loop() {   
 }

 
