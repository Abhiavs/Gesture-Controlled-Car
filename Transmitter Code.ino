//"If you enjoyed this video, make sure to subscribe our channel ktronic for more!"

// Go to Sketch > Include Library > Manage Libraries....
// In the Library Manager, a window will pop up where you can search for libraries.
// Search for the library you need. For instance, search for "RF24" to install the RF24 library used for the NRF24L01 module.
// Select the library from the search results and click the Install button.
// Repeat the steps for any other libraries you need (e.g., "SPI" is usually pre-installed).
// Include necessary libraries

#include<SPI.h>
#include<nRF24L01.h>
#include<RF24.h>

const int x_out = A0;
const int y_out = A1;
RF24 radio(8,10);
const byte address[6] = "00001";
struct data{
  int xAxis;
  int yAxis;

};
data send_data;



void setup() {
  // put your setup code here, to run once:
radio.begin();
radio.openWritingPipe(address);
radio.setPALevel(RF24_PA_MIN);
radio.setDataRate(RF24_250KBPS);
radio.stopListening();
}

void loop() {
  // put your main code here, to run repeatedly:
send_data.xAxis = analogRead(x_out);
send_data.yAxis = analogRead(y_out);
radio.write(&send_data, sizeof(data));
}
