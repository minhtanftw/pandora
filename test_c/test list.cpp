#include <iostream>
#include <list>

using namespace std;
int main()
{
    std::list <unsigned int>_legNumber;
    _legNumber.push_back(24);
    _legNumber.push_back(27);
    _legNumber.push_back(30);
    std::list <unsigned int > ::iterator it=_legNumber.begin();
    for (;it != _legNumber.end(); it++)
    {
        cout << ' ' << *it;
    }
    return 0;
}