#include <iostream>
#include <string>
#include <regex>


using namespace std;

int main()
{
  string a = "<2>a";
  string b = "a";
  string c = "<2>a + b + <3>c";

  regex e("[<[1-9]+>]?[a-zA-Z0-9]");

  std::sregex_iterator iter(c.begin(), c.end(), e);
  std::sregex_iterator end;

  while (iter != end)
  {
    cout << "size : " << iter->size() << std::endl;

    for (unsigned i = 0; i < iter->size(); ++i)
      cout << (*iter)[i] << "\n";
  }
  return 0;
}
