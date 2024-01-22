#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <deque>
#include <set>
using namespace std;
  
int main()
{
	std::vector<__int32> vec;

	for (int i = 0; i < 10; i++)
		vec.push_back(i);

	std::vector<__int32>::iterator the_beginning = vec.begin();
	std::vector<__int32>::iterator the_end = vec.end();

	std::cout << *(the_beginning) << std::endl;
	std::cout << *(the_end) << std::endl; //print a garbage value
	
	the_end--;
	std::cout << *(the_end) << std::endl;

	return 0;
}