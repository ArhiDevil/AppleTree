#include "apple_tree.h"

void AppleTree::grow() {
		grow(rand() % MAX_APPLES);
	}
	
  void AppleTree::grow(int appleCount) {
		for (int i = 0; i < appleCount; i++) {
			apples.push_back(Apple());
		}
	}
 
