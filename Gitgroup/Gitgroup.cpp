#include <iostream>
#include <string> 
using namespace std;

    class Animal
    {
    protected:
        string name;
    public:
        Animal(string name): name(name){    }

        virtual void Say() { };
        virtual void Nick() {   };
    };

    class Dog : public Animal
    {
    public:
        Dog(string name) : Animal(name)
        {
        }

        void Say()
        {
            cout << name << " speak gav-gav" << endl;
        }
        void Nick()
        {
            cout << name << " name Dog#1" << endl;
        }
    };

    int main()
    {
        Dog a("servi");
        a.Nick();


        return 0;
    }
