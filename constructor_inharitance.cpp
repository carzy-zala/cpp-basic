//This code is made by ZALA
 
#include <bits/stdc++.h>

using namespace std;

/*
------------->Constructor Inharitance<---------------
  -->When base as well as derived class has constructor they are invoke as follow :

    ------------------->Multiple Inharitance<---------------------
           If no multiple virtual as well as derived class present
                ---> Virtual Class-->Base class---->derived class
           If  multiple virtual as well as derived class present
                ---> Virtual Class as per declare-->Base class as per declare---->derived class

    ----------------->Multi level Inharitance<----------------------
           If multilevel inhariitance then they invoke as per the declaration
                --->base 1-->base 2---> derived
                 -->a->b->c we  declare like this and also invoke like this

    ----------------->Parameterised constructor involation<-----------------------
    When parameterised constructor is there than we define the parameter of it in derived class object
       
          class c{
              private:
              int C1.C2;
              public:
              c(int a1,int a2,int b1,int b2,int c1,int c2):A(a1,a2),B(b1,b2)
              {
                  C1=c1;
                  C2=c2;
              }
          }

 Note :-
        -> parameterised Constructor invokation depend on the order of inharitance we declare not on the we pass argument to another constructor
        -> Multiple inharitance depend on the order of we declare
        -> Multilevel define on the level in which we define
*/

class A
{
    int a;
    public:
    A(int a1)
    {
        cout<<"A invoke"<<endl;
        a=a1;
    }
    void getA()
    {
        cout<<"A:"<<a<<endl;
    }
};

class B:public A{
    int b;
    public:
    B(int a1,int b1):A(a1)
    {
      cout<<"B invoke"<<endl;
      b=b1;   
    }
    void getB()
    {
        cout<<"B:"<<b<<endl;
    }
};

class C:public B{

   int c;
   public:
   C(int a1,int b1,int c1):B(a1,b1){
       cout<<"C invoke"<<endl;
       c=c1;
   }
   void get()
   {
       getA();
       getB();
       cout<<"C:"<<c<<endl;
   }

};

int main()
{
    C objc(1,2,3);
    objc.get();

    return 0;
}