// This class is for internal use in the library
// it will not be accessable for the library consumer, as its header is not in
// the libraries include directory but rather in its private src directory

#ifndef FIRSTLIB_INTERNALCLASS_HPP_
#define FIRSTLIB_INTERNALCLASS_HPP_

namespace firstLib {

class InternalClass {
public:
  int getNumber();
  void setNumber(int number);

private:
  int number_;
};

} // namespace firstLib
#endif // FIRSTLIB_INTERNALCLASS_HPP_
