/*
 * hello.cpp
 */

#include <iostream>
#include "instrument.h"
#include "instrumentGuitar.h"

using namespace std;

Instrument::Instrument(std::string sound) {
  sSound = sound;
} // Instrument()
Guitar::Guitar(void) : Instrument("Pluck"){
}

void Instrument::makeSound(void) {
  cout << sSound << endl;

} // makeSound()
