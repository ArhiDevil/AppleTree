#include "apple.h"

Apple::Apple(int seeds) {
  seedsNumber = seeds;
}

Apple::Apple() {
  seedsNumber = rand() % MAX_SEEDS;
}

int Apple::getSeedNumber() {
  return seedsNumber;
}

