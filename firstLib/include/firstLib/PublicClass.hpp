/*
 * This class is a public interface of the library
 *
 * its header is therefore in the lib's public include directory
 */

#ifndef FIRSTLIB_PUBLICCLASS_HPP_
#define FIRSTLIB_PUBLICCLASS_HPP_

namespace firstLib {

class PublicClass {
public:
  PublicClass();
  void setGeneratorSeed(int seed);
  int generateNumber();

private:
  int seed_;

};

} // namespace firstLib

#endif // FIRSTLIB_PUBLICCLASS_HPP_
