//This code is made by ZALA
//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;

/*

 We define to avoid same method and member of parent class occur multiple time  in child class
---------->Ambiguity Match<----------
   -->When we derive the one derived class from two base class which is derived from single class than ambiguity match occur in derived class which can be resolve by the virtual clas
   -->       
                       A
                       |
                ---------------
                |             |
                B             C
                ---------------
                       | 
                       D  
    --> In this D has two function of A derived from B and C so we can resolve it by making A as vitual class
*/

class A{
     protected:
     int a;
     public:
     void setA()
     {
         cout<<endl<<"Enter a value of a :";
         cin>>a;
     }
     void getA()
     {
         cout<<"Your A value is :"<<a<<endl;
     }
};

class B:public virtual A{
     protected:
     int b;
     public:
     void setB()
     {
         cout<<endl<<"Enter a value of b :";
         cin>>b;
     }
     void getB()
     {
         cout<<"Your B value is :"<<b<<endl;
     }
};

class C : virtual public A{
     protected:
     int c;
     public:
     void setC()
     {
         cout<<endl<<"Enter a value of c :";
         cin>>c;
     }
     void getC()
     {
         cout<<"Your C value is :"<<c<<endl;
     }
};

class D:public B,public C{
     protected:
     int d;
     public:
     void setD()
     {
         cout<<"\nEnter a value of d :";
         cin>>d;
     }
     void getD()
     {
         cout<<"Your D value is :"<<d<<endl;
     }
};


int main()
{
    D d1;
    d1.setA();
    d1.setB();
    d1.setC();
    d1.setD();
    d1.getA();
    d1.getB();
    d1.getC();
    d1.getD();

    return 0;
}


