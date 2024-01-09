int  r= 7;   //  + ke right -> [ - - + R ]
int g = 6;   //  + ke left ->  [ - G + - ]
int b = 8;   //  + ke left ->  [ B - + - ]

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(r ,OUTPUT);
    pinMode(g, OUTPUT);
    pinMode(b , OUTPUT);  
    
}

void loop() {
  // put your main code here, to run repeatedly:



digitalWrite(r , 0);
digitalWrite(g, 1);
digitalWrite(b,1);

delay(2000);

digitalWrite(r , 1);
digitalWrite(g, 0);
digitalWrite(b,1);

delay(2000);

digitalWrite(r , 1);
digitalWrite(g, 1);
digitalWrite(b,0);

delay(2000);

digitalWrite(r , 0);
digitalWrite(g, 0);
digitalWrite(b,1);

delay(2000);

digitalWrite(r , 1);
digitalWrite(g, 0);
digitalWrite(b,0);

delay(2000);
digitalWrite(r , 0);
digitalWrite(g, 1);
digitalWrite(b,0);

delay(2000);

digitalWrite(r , 0);
digitalWrite(g, 1);
digitalWrite(b,0);

delay(2000);


digitalWrite(r , 0);
digitalWrite(g, 0);
digitalWrite(b,0);

delay(2000);

}
