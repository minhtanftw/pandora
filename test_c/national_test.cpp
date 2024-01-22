#include <iostream>
using namespace  std;

class Picture{
    public:
    virtual void cannot_think() const = 0;
};
class kethua : public Picture{
    public:
    virtual void cannot_think() const override{
        cout << "the number is kethua apology";
    }
};
class ketchup: public kethua{
    public:
    virtual void cannot_think() const override{
        cout << "the key is here";
    }
};
int main(){
    kethua *kethua_tap1;
    ketchup ketchuptets;
    kethua_tap1 = &ketchuptets;
    kethua_tap1->cannot_think();
    return 0;
}