#ifndef APPLE_TREE_H
#define APPLE_TREE_H

#include "apple.h"
#include <vector>

#define MAX_APPLES 100

using namespace std;

class AppleTree {
private:
  std::vector<Apple> apples;

public:

  void grow();
	
  void grow(int appleCount);
 
};

#endif
