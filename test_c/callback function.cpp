#include <iostream>

using namespace std;

void func(int a)
{
     cout << "value of a is " << a;
}
int main() {
    void (*aimachangco)(int) = &func;
    (*aimachangco)(1220);
    return 0;
}