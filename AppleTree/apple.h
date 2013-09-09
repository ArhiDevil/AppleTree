#ifndef APPLE_H
#define APPLE_h

#define MAX_SEEDS 10

#include <stdlib.h>

class Apple {
private:
	int seedsNumber;

public:
	
	Apple(int seeds);
  Apple();

  int getSeedNumber();

};

#endif
