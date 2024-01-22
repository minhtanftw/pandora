#include <iostream>
#include <thread>
#include <map>
#include <string>
#include <chrono>
using namespace std::chrono_literals;

void RefreshForescast(std::map<std::string,int> forecastMap)
{
    while(true)
    for(auto item : forecastMap)
    {
        item.second++;
        std::cout << item.first << " - " <<item.second << std::endl;
    }
    std::this_thread::sleep_for(2000ms);
}

int main()
{
    std::map<std::string,int> forecastMap = {
        {"New York",15},
        {"Hue", 27},
        {"Berlin", 18}
     };
     std::thread bgWoker(RefreshForescast, forecastMap);
}