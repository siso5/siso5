/* program name : περιπέτεια(peripeteia) */

#include <SoftwareSerial.h>

/*
 * Sender and Receiver Program
 * 
 * Pin Assign
 * 
 * Sender Case
 *       SENDER      RECIVER
 * Data  D2     >>  D2
 * CLK   D3     >>  D3
 * ACK   D4     <<  D4
 * MODE  D7     <<  HIGH
 * 
 * Receiver Case   
 *        RECIVER     SENDER
 *  Data D2      << D2
 *  CLK  D3      << D3
 *  ACK  D4      >> D4
 *  MODE D7      << LOW
 */

#define DATA  PD2
#define CLK   PD3
#define ACK   PD4
#define MODE  PD7

void setup() {
  Serial.begin(19200);
  randomSeed(123);
  pinMode(MODE, INPUT);
  if (digitalRead(MODE)==HIGH) { // SENDER
    pinMode(DATA, OUTPUT); // data
    pinMode(CLK,  OUTPUT); // CLK
    pinMode(ACK,  INPUT);  // ACK
    digitalWrite(DATA, LOW);
    digitalWrite(CLK,  LOW);
  } else {                      // RECEIVER
    pinMode(DATA, INPUT);
    pinMode(CLK,  INPUT);
    pinMode(ACK,  OUTPUT);
    digitalWrite(ACK, LOW);
    while (!Serial) ;
  }
  
  findHeader();
}

void sendOneBit(byte data) {
  if (data == 0) {
    digitalWrite(DATA, LOW);
  } else {
    digitalWrite(DATA, HIGH);
  }
  digitalWrite(CLK, HIGH);
  while (digitalRead(ACK)==LOW) ;
  digitalWrite(CLK, LOW);
  while (digitalRead(ACK)==HIGH) ;
}

void sendOneByte(byte data) {
  sendOneBit(data & 128);
  sendOneBit(data & 64);
  sendOneBit(data & 32);
  sendOneBit(data & 16);  
  sendOneBit(data & 8);
  sendOneBit(data & 4);
  sendOneBit(data & 2);
  sendOneBit(data & 1);
}

int recvOneBit() {
  int data;
  while (digitalRead(CLK)==LOW) ;
  data = digitalRead(DATA);
  digitalWrite(ACK, HIGH);
  while (digitalRead(CLK)==HIGH) ;
  digitalWrite(ACK, LOW);
  return data;
}

void findHeader() {
    if (digitalRead(MODE)==HIGH) {
      delay(1000);
    } else {
      ;
    }
}

byte recvOneByte(){
  byte data=0;
  data = data | recvOneBit() << 7;
  data = data | recvOneBit() << 6;
  data = data | recvOneBit() << 5;
  data = data | recvOneBit() << 4;
  data = data | recvOneBit() << 3;
  data = data | recvOneBit() << 2;
  data = data | recvOneBit() << 1;
  data = data | recvOneBit();
  return data;
}

void recvOneKiloByte() {
  for (unsigned long i=0; i<1024; i++) {
    byte ans = random(256);
    //Serial.print("RECV:");
    byte data = recvOneByte();
    //Serial.print(ans);
    //Serial.print(" : ");
    //Serial.println(data);
    if (ans != data) {
      Serial.println("Wrong");
    }
  }
}

void loop() {
  if (digitalRead(MODE)==HIGH) {
    // SENDER
    byte data = random(256);
    //Serial.print("SEND:");
    //Serial.print(data);
    sendOneByte(data);
    //Serial.println();
    //data = (data + 1) % 256;
  } else {
    // RECEIVER
    Serial.print("Start");
    unsigned long time1 = millis();
    for (int i=0; i<64; i++) {
      recvOneKiloByte();
      Serial.print(".");
    }
    unsigned long time2 = millis();
    Serial.print("Time:");
    Serial.print(time2-time1);
    Serial.print(", ");
    Serial.print(64.*1024.*8.*1000./(time2-time1));
    Serial.println(" bit/sec.");
  }
}
