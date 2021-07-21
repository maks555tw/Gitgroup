// Gitgroup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> 
using namespace std;

    class Animal
    {
    protected:
        string name;
    public:
        Animal(string name)
            : name(name)
        {
        }

        virtual void Say() = 0;
        virtual void Nick() = 0;
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

    int main() {
        Dog a("servi");
        a.Nick();


        return 0;
    }

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file