#include <TinyGPS++.h>
#include <SoftwareSerial.h>
#include <SD.h>

static const int RXPin = 4;
static const int TXPin = 3;
static const uint32_t GPSBaud = 9600;
static const int chipSelect = 10;

TinyGPSPlus gps;
SoftwareSerial gpsSerial(RXPin, TXPin);

File dataFile;

void setup() {
  Serial.begin(9600);
  gpsSerial.begin(GPSBaud);

  if (!SD.begin(chipSelect)) {
    Serial.println("SD card initialization failed.");
    while (1) {
      delay(10);
    }
  }

  Serial.println("Wildlife tracking system initialized.");
}

void loop() {
  while (gpsSerial.available() > 0) {
    gps.encode(gpsSerial.read());

    if (gps.location.isUpdated()) {
      float lat = gps.location.lat();
      float lng = gps.location.lng();

      Serial.print("Latitude: ");
      Serial.println(lat, 6);

      Serial.print("Longitude: ");
      Serial.println(lng, 6);

      dataFile = SD.open("gpslog.txt", FILE_WRITE);
      if (dataFile) {
        dataFile.print(lat, 6);
        dataFile.print(",");
        dataFile.println(lng, 6);
        dataFile.close();
      }
    }
  }
}
