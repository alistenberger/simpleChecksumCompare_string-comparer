#ifndef CHECKSUM_COMPARE_H_
#define CHECKSUM_COMPARE_H_

#include <iostream>

class checksumCompare {
  public:

    checksumCompare (void);
    checksumCompare (std::string);
    ~checksumCompare (void);
    std::string getStoredChecksum (void) const;
    void compareChecksum (std::string inputChecksum);

  protected:
    const std::string storedChecksum_;
};

#endif //defined CHECKSUM_COMPARE_H_