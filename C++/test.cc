#include <iostream>

namespace toto
{
  struct foo {};
  std::ostream& operator<<(std::ostream& o, const foo&)
  {
    return o << "foo\n";
  }
  std::ostream& print(std::ostream&_o, const foo&)
  {
    return o << "foo\n";
  }
}

int main()
{
  auto f = toto::foo{};

// one ugly one clean
  std::cout << f;
  operator<<(std::cout, f);
  print(std::cout, f);

  // ˇˇˇˇˇˇˇˇ why this working ?

  std::cout << f;
  toto::operator<<(std::cout, f);
  toto::print(std::cout, f);
//----------
 
}
