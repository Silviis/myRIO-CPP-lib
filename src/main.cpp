#include "myWRIO.h"
using namespace myWRIO;
int main() {
    if(!myRIO_init()) {std::cout << "Error initializing myRIO"; return -1;}
  
    bool status = HIGH;
  
    while(1) {
        status=!status;
        DIO::writeLed(LED1, status);
        Time::wait_ms(500);
    }
}
