#include <DHT.h>
#include <DHT_U.h>

#define dht_pin 2
DHT dht(dht_pin, DHT11);


void setup() {

  Serial.begin(9600);
  Serial.println("==========STARTED==========");
  dht.begin();
}

void loop() {

  delay(2000);

  float sicaklik = dht.readTemperature();
  float nem = dht.readHumidity();

  Serial.print("Sıcaklık: ");
  Serial.print(sicaklik);
  Serial.print("\n");

  Serial.print("Nem: ");
  Serial.print(nem);
  Serial.print("\n \n \n");


}
