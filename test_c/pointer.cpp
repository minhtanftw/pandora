#include <iostream> 
using namespace  std;
int main()
{
    int a =5;
    int b =9;
    cout << "a & b " << (a & b) <<endl;
    cout << "a | b" << ( a |b ) <<endl;
    cout << "  ~ b " << (~ b ) << endl;
    cout << " a ^b " << ( a ^ b) << endl;
    cout <<  " a << 1 " << ( a << 1) << endl;
    cout << "b >> 1 " <<  "= " << ( b >> 1) << endl;
}