#include <iostream>
#include <thread>
#include <vector>
using namespace std;

void print(int n, const std::string &str) {
    std::string msg = std::to_string(n) +": " + str;
    cout << msg << endl;
}
int main() {
    thread thread1(print,10,"Educational blog");
    thread1.join();
    return 0;
}