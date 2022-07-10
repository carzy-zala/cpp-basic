// This code is made by ZALA
// llll

#include <bits/stdc++.h>

using namespace std;

class Constructor   //Constructor declaration
{
    int a, c;
    float b;

public:
    Constructor(){}; // default constuctor

    // below show constructor overloading
    Constructor(int x) // parameterized constructor
    {
        a = x;
        b = c = 0;
    }
    /*
      This three are ambgues match for compiler for overloading
      It can use as Constructor verloading but when dynamic value assign
      Dynamic assign value mean when when variable pass inplace of values
         --->like this
               --->int p,q;float Q;
               //below both are overload
               --->constructor(p,Q); 
               --->constructor(p,q);


         1.
             Constructor(int x,int y)  //it not defer from below for compiler throw error
                {
                    a=x;
                    b=float(y);
                    c=0;
                }

               Constructor(int x,float y)
               {
                  a=x;
                  b=y;
                  c=0;
               }
         2.
              Constructor(int x,float y,int z)
                {
                    a=x;
                    b=y;
                    c=z;
                }

         3.
             Constructor(int x,float y,int z=90)  //constructor with default argu
                {
                    a=x;
                    b=y;
                    c=z;
                }
     */

    Constructor(int x, float y, int z = 90) // constructor with default argu
    {
        a = x;
        b = y;
        c = z;
    }

    Constructor(Constructor &a)
    {
        cout << "copy constructor call" << endl;
        a = a.a;
    }

    void show();
};

void Constructor::show()
{
    cout << a << "," << b << "," << c << endl;
}

int main()
{
    // below valid due to default argument constructor and parameterized constructor
    Constructor c1(2);       //--> implicit call <--
     // c1=Constructor(2);   //also do like this   --> explicit call <--
    c1.show();

    Constructor c2(2, 5);
    c2.show();

    Constructor c3(2, 4.5, 6);
    c3.show();

    Constructor c5(2, 5.5);
    c5.show();

    // below valid due to default constructor
    Constructor c4;
    c4.show();

    // copy constructor
    Constructor c8, c6(c1); // copy constructor call in this and below linw
    Constructor c7 = c1;
    c8 = c2; // copy constructor not invoked
    c6.show();
    c7.show();
    c8.show();

    // c1=Constructor(p,q);    --> this is the dynamic assigning value to Constructor <--

    return 0;
}