// This code is made by ZALA

#include <bits/stdc++.h>

using namespace std;

/*
----------------> Virtual Function <-------------
 ->It refer to removing  lead binding of base class from its pointer pointing to derived object
 ->For better understanding we can say that giving priority to the derived class by base class pointer so we can use their function or methods i efficient way

Note : 
        ----------------> Rules of the Virtual Function <------------------------
         
           1. Virtual function can't be static.
           2. Virtual can be friend of the another class.
           3. It can only accesed by the pointer of the class.
           4. Virtual function of the base class might not be used.
           5. Virtual function define in base class automatic invokes if it not find function in the derived class.
   
   ---------------> Pure virtual Function <---------------
   --> A virtual function define in the base class and must condtion apply on that it must be same function in the derived function called pure virtual function.
   --> For example //
            here we create display as virtual function in base class which has no body and that may be possible that derived class also may not have the display function if we want to prohibit this we make it pure virtual function.
               virtual void display()=0; 
      Any function assign like above called do nothing function.       
     
*/


class BaseClass
{
public:
    int var_base;
    virtual void display()
    {
         cout<<"Invokes the base class Display function"<<endl;
        cout << "Base class variable :" << var_base << endl;
    }
    virtual void x(){}  //it may be possible that derived class may not have this method
    virtual void y()=0; //do  nothing function --->pure virtual function
    //derived class must have to define y method in defination
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

    void y()
    {
        cout<<"It is the  pure virtual functio we have to must be define in the derived class otherwise it throw error";
    }
};


int main()
{
    BaseClass *base_class_pointer;
    // BaseClass base_obj; // we can not make the obj of abstract class
    DerivedClass derived_obj;

    cout<<"Base Class pointer refering Derived Object"<<endl;
    cout<<"______________________________________________"<<endl<<endl;

    base_class_pointer = &derived_obj;
    base_class_pointer->var_base = 34;
    base_class_pointer->y();
    // base_class_pointer->var_derived=234; // it throw an error
    base_class_pointer->display(); // it invokes the base class function

    /*cout<<endl<<endl;
    //cout<<"Derived Class pointer refering Derived Object"<<endl;
    cout<<"______________________________________________"<<endl<<endl;

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &derived_obj; // give value of the derived object to derived pointer
    derived_class_pointer->var_base = 123;
    derived_class_pointer->var_derived = 223;
    derived_class_pointer->display(); // it invokes the derived class function*/

    return 0;
}