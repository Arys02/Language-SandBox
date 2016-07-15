#include <iostream>
#include <stdlib>

void display(const std::string& s)
{
  std::cout << s << "\n";
}

void work(int v)
{
  char buf[1024];
  sprintf(buf, "%d + %d = %d ", v, v, v + v);
  std::thread{display, buf}.detach();
}

int main()
{
  wait(21);
  std::chrono::seconds s1{1};
  std::this_thread::sleep_for(s1);
}

//std::ref/ std::cref
