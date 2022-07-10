// This code is made by ZALA

/*
 Note:-
      ->We can not use the derefrencing and index of array intialise by pointer
      like this
        A *ptr[5];
        *ptr.setdata();
*/

#include <bits/stdc++.h>

using namespace std;

class A
{

    int a;

public:
    void setdata()
    {
        cout << "Enter value of a :";
        cin >> a;
        cout << endl;
    }
    void display()
    {
        cout << "a :" << a << endl;
    }
};

int main()
{

    // we can declare  arary of object like this
    A *p = new A[2]; // p point to the first object of the class
    A a1[2];         // we can also define like this
    A *ptemp = p;

    for (int i = 0; i < 2; i++)
    {
        // intialised by the direct pointer
        cout << "By pointer " << i + 1 << " times" << endl;
        p->setdata();
        p++;

        // intialised by the object and index
        cout << "By object " << i + 1 << " times" << endl;
        a1[i].setdata();
    }

    for (int j = 0; j < 2; j++)
    {

        cout << endl;

        // we use ptemp because at this point p at the end of the array
        cout << "By pointer " << j + 1 << " times :";
        ptemp->display();
        ptemp++;

        // by the index and object
        cout << endl;
        cout << "By object " << j + 1 << " times :";
        a1[j].display();
    }

    return 0;
}