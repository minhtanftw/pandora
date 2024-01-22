#include <iostream>

using namespace std;
int main()
{
    int x = 5;
    int y = 10;
    
     int const  *pa = &x;    
        pa = &y ;
    //  (* pa)++;

    cout << *pa;
    return 0;
}