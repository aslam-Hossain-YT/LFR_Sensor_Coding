/*
Fast Line Follower Robot Tutorial 1: https://youtu.be/ST8KdWPMzp4?si=JiMo1dmmcJg4N6Ty
Fast Line Follower Robot Tutorial 2: https://youtu.be/7vuAqcf_HjQ?si=j19M01qBcxJiA24r
*/

int sensor[12];  //array for storing the sensor values
int threshold = 500;

void setup() {
  Serial.begin(9600);
}

void loop() {
  //sensor_reading();
  digital_values();

 // if(sensor[6] == 1 && sensor[7] == 1) line_follow();
}

void sensor_reading() {
  for (int i = 0; i < 12; i++) {
    sensor[i] = analogRead(i);
    Serial.print(String(sensor[i]) + "  "); //comment this line while using in main LFR code
  }
  Serial.println(); //comment this line while using in main LFR code
}

void digital_values() {
  for (int i = 0; i < 12; i++) {
    sensor[i] = analogRead(i);
    if (sensor[i] > threshold) sensor[i] = 1;
    else sensor[i] = 0;
    Serial.print(String(sensor[i]) + "  ");  //comment this line while using in main LFR code
  }
  Serial.println(); //comment this line while using in main LFR code
}