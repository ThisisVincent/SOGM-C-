#include "instrument.h"
#include "instrumentGuitar.h"
#define yoloVar 12


int main() {
  Instrument in1("gehbrkpegw"); 
  Guitar in2;
  in1.makeSound();
  in2.makeSound();

  Instrument in[yoloVar];

  for(int x=0;x<yoloVar;x++)
    in[x].makeSound();
} // main()
