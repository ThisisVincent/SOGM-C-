/*
 * instrument.h
 */
//#ifndef INSTRUMENT_H
//#define INSTRUMENT_H
#include <string>

class Instrument {
  public:
      Instrument(std::string sound = "laralaralalalalala laaa laaaaaa!!!!!!!!!!!!!!!");
      void makeSound(void);

  private:
      std::string sSound;
};

//#endif
