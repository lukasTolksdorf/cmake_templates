#include "firstLib/PublicClass.hpp"

#include "InternalClass.hpp"
namespace firstLib {

void PublicClass::setGeneratorSeed(int seed) { seed_ = seed; }

int PublicClass::generateNumber() {

  auto generator = InternalClass();
  generator.setNumber(seed_);

  return generator.getNumber();
}
PublicClass::PublicClass() : seed_(0) {
  // intentionally left empty
}

} // namespace firstLib
