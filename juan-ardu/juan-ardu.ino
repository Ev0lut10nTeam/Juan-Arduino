int8_t v[3];   // for incoming serial data
int i;

/*

v0=principal ex
v1=principale y
v2=rotire x
*/


//fata
#define enst 2
#define endr 3
#define in1st 4
#define in2st 5
#define in1dr 6
#define in2dr 7



void setup(){
  Serial.begin(115200);



  
  pinMode(enst, OUTPUT);
  pinMode(endr, OUTPUT);
  pinMode(in1st, OUTPUT);
  pinMode(in2st, OUTPUT);
  pinMode(in1dr, OUTPUT);
  pinMode(in2dr, OUTPUT);
}



void loop(){
    if (Serial.available() > 0) {
                for(i=0;i<3;i++)v[i] = Serial.read();
    }
    Serial.print("v0 = ");
    Serial.println(v[0]);
    Serial.print("v1 = ");
    Serial.println(v[1]);
    Serial.print("v2 = ");
    Serial.println(v[2]);
  







}