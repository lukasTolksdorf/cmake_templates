#include "firstLib/PublicClass.hpp"

#include <iostream>

int main(int argc, char** argv) {

  firstLib::PublicClass generator = firstLib::PublicClass();
  generator.setGeneratorSeed(5);

  std::cout << "The Generator generatored: " << generator.generateNumber() << "\n";

  return 0;
}