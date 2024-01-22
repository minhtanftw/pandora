#include <iostream>
#include <string>
#include <list>


class IObserver {
    public:
    virtual~IObserver () {};
    virtual void Update ( const std::string   &message_from_object) = 0;
};
class ISubject{
    public:
        virtual ~ISubject () {};
        virtual void Attach(IObserver *observer) = 0;
        virtual void Detach(IObserver *observer) = 0;
        virtual void Notify() = 0;

};

class Subject : public ISubject {
    private:
    std::list <IObserver * > list_observer;
    std::string message_;
    public:
    virtual ~Subject() {
        std::cout << "Goodbye, I was the subject  \n";
    }
    void Attach (IObserver *observer ) override{
        list_observer.push_back(observer);
    }
    void Detach(IObserver *observer) override{
        list_observer.remove(observer);
    }
    void Notify() override {
        std::list<IObserver *>::iterator iterator = list_observer.begin();
        HowManyObserver();
        while (iterator != list_observer.end()){
            (*iterator)->Update(message_);
            ++iterator;
        }
    }
    void CreateMessage(std::string message = "Empty"){
        this->message_ = message;
    }
    void HowManyObserver(){
        std::cout << "There are" << list_observer.size() << "observer in the list \n";
    }
    void someBussinessLogic(){
        this->message_ = "change message message";
        Notify();
        std::cout << "Iam about to do something important \n";
    }
};
class Observer : public IObserver{
    private:
    std::string message_from_subject_;
    Subject &subject_;
    static int static_number;
    int number;
    public:
    Observer(Subject &subject):subject_(subject){
        this->subject_.
    }
};
