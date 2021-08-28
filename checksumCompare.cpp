#include <iostream>
#include <sstream>
#include "checksumCompare.h"

checksumCompare::checksumCompare (void)
:storedChecksum_ ("")
{
  //nothing here
}

checksumCompare::checksumCompare (std::string storeChecksum)
:storedChecksum_ (storeChecksum)
{
  //nothing here
}

checksumCompare::~checksumCompare (void)
{
  //nothing here
}

std::string checksumCompare::getStoredChecksum (void) const
{
  return this->storedChecksum_;
}

void checksumCompare::compareChecksum (const std::string inputChecksum)
{
  if (inputChecksum == this->storedChecksum_) {
    std::cout << "These checksums are identical" << std::endl;
  } else {
    std::cout << "These checksums do not match" << std::endl;
  }
}

int main (int argc, char * argv[]) {
  bool keepGoing = true;
  while (keepGoing) {
    std::cout << "Please enter a VERIFIED checksum to store or type QUIT to exit: " << std::endl;
    std::string chksumToStore;
    std::getline (std::cin, chksumToStore);
    if (chksumToStore == "QUIT") {
      keepGoing = false;
    } else {
      checksumCompare * chk = new checksumCompare (chksumToStore);
      std::cout << "Please enter the checksum to compare or type QUIT to exit: " << std::endl;
      std::string compChecksum;
      std::getline (std::cin, compChecksum);
      if (compChecksum == "QUIT") {
        keepGoing = false;
      } else {
        chk->compareChecksum (compChecksum);
      }
    }
  }
  return (0);
}