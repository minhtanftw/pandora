#include <iostream>
using namespace std;
class Test{
  static int x;
  public:
  static int y;
  void func(int x)
  {
    cout << "Value of static x is " << Test::x;
    cout << "\n Value of local is "<< x;
  }
};

int Test::x = 1;
int Test::y = 2;
int main()
{
  Test obj;
  int x = 3;
  obj.func(x);
}