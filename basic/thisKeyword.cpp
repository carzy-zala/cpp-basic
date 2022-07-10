// This code is made by ZALA

/*
-------------->This<----------------
  ->this is nothing but pointer to the object on which we do operation
  ->in other words this is nothing but the pointer of object that invoking functiozn
*/

#include <bits/stdc++.h>

using namespace std;

class A
{
private:
    int a;

public:
    // A& setdata(int a)
    // {
    //     this->a=a;
    //     return *this;
    // }

    void setdata(int a)
    {
        this->a = a;
    }

    void getdata()
    {
        cout << "a:" << a << endl;
    }
};

int main()
{
    A a1;

    // a1.setdata(5).getdata(); //we can use if we return this in setdata function

    a1.setdata(5);
    a1.getdata();

    return 0;
}