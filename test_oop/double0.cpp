#include<iostream>
using namespace std;

class AbstractProductA{
    public:
    virtual ~AbstractProductA() {} ;
    virtual string UsefulFunctionA() const = 0;

};
class ConcreteProductA1: public AbstractProductA{
    public:
    std::string UsefulFunctionA() const override {
        return "The result of product A1";
    }
};

class ConcreteProductA2: public AbstractProductA{
    public:
    std::string UsefulFunctionA() const override{
        return "The result of Product A2";
    }
};

class AbstractProductB{
    public:
    virtual ~AbstractProductB() {};
    virtual string UsefulFunctionB() const = 0;
    virtual std::string AnotherUsefulFunctionB(const AbstractProductA& collaborator) const = 0;
};

class ConCreteProductB1 : public AbstractProductB{
    public:
    string UsefulFunctionB() const override {
        return "The result of the product  B1";
    }
    std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override{
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of B1 collaborator with ( " + result +  " ) ";
    }
};
class ConCreteProductB2: public AbstractProductB{
    public:
    std::string UsefulFunctionB() const override{
        return "The result of the product B2";
    }
    std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override{
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of B2 collaborator with (" + result + ")";
    }
};
class AbstractFactory{
    public:
    virtual AbstractProductA * CreateProductA() const = 0;
    virtual AbstractProductB* CreateProductB() const = 0;
    
};
class ConcreteFactory1: public AbstractFactory{
    public:
    AbstractProductA *CreateProductA() const override{
        return new ConcreteProductA1();
    }
    AbstractProductB *CreateProductB() const override {
        return new ConCreteProductB1();
    }
};
class ConcreteFactory2 : public AbstractFactory{
    public:
    AbstractProductA *CreateProductA() const override{
        return new ConcreteProductA2();
    }
    AbstractProductB *CreateProductB() const override{
        return new ConCreteProductB2();
    }
};
void ClientCode(const AbstractFactory &factory){
    const AbstractProductA *product_a = factory.CreateProductA();
    const AbstractProductB *product_b = factory.CreateProductB();
    std::cout << product_b->UsefulFunctionB()  << "\n";
    cout << product_b->AnotherUsefulFunctionB(*product_a) << "\n";
    delete product_a;
    delete product_b;

}
int main() {
    cout << "CLient: Testing client code with the first factory type \n";
    ConcreteFactory1 *f1 = new ConcreteFactory1();
    ClientCode(*f1);
    delete f1;
    cout << endl;
    cout << "Client : Testing the same client code with the secondary type type \n";
    ConcreteFactory2 *f2 = new ConcreteFactory2();
    ClientCode(*f2);
    delete f2;
    return 0;
    
}