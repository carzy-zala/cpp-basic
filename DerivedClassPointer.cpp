// This code is made by ZALA

#include <bits/stdc++.h>

using namespace std;

/*
------------>Lead Binding<-------
 ->In this following example we see that the base class pointer doesn't prefer the  derived display function instead of that it will prefer the base class display function this is known as lead binding
 ->Below is example of Run Time polymorphism 
   - it decide during the run time which function invokes
*/

class BaseClass
{
public:
    int var_base;
    void display()
    {
         cout<<"Invokes the base class Display function"<<endl;
        cout << "Base class variable :" << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout<<"Invokes the derived class Display function"<<endl;
        cout << "Base class variable :" << var_base << endl;
        cout << "Derived class variable :" << var_derived << endl;
    }
};


int main()
{
    BaseClass *base_class_pointer;
    BaseClass base_obj;
    DerivedClass derived_obj;

    cout<<"Base Class pointer refering Derived Object"<<endl;
    cout<<"______________________________________________"<<endl<<endl;

    base_class_pointer = &derived_obj;
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived=234; // it throw an error
    base_class_pointer->display(); // it invokes the base class function

    cout<<endl<<endl;
    cout<<"Derived Class pointer refering Derived Object"<<endl;
    cout<<"______________________________________________"<<endl<<endl;

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &derived_obj; // give value of the derived object to derived pointer
    derived_class_pointer->var_base = 123;
    derived_class_pointer->var_derived = 223;
    derived_class_pointer->display(); // it invokes the derived class dunction

    return 0;
}