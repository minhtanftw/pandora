#include <iostream>
#include <memory>
using namespace std;

class Rectangle{
    int length;
    int breath;
    public:
    Rectangle(int l, int b ) {
        length = l;
        breath = b;
    }
    int area(){
        return length * breath;
    }
};
int main(){
   shared_ptr<Rectangle> P1(new Rectangle(232,22));
   cout << P1->area() << endl;
   shared_ptr<Rectangle> P2;
   P2 = P1;
   cout << P2->area() << endl;
   cout << P2.use_count() << endl;
   return 0;
}