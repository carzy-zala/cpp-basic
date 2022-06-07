//This code is made by ZALA
 
#include <bits/stdc++.h>

using namespace std;

/*
----------->Intialised List<-------------------
  -->Where we declare the constructor we intialised at the time of defination is called intialised list
  -->It is for simplification not complusory
  -->We can intialised value in constructor body also 

*/

class A{
    int a,b;
    public:
    A(int a1,int b1):a(a1),b(b1)      //this is called the intialised list
    {
        //body of constructor
    }
    void get()
    {
        cout<<"A:"<<a<<endl<<"B:"<<b;
    }
};

/*
  --->We can intialised the b using a value but we can't intialised a using the b 
  --->Only first declare variable can use for further like below ...:
           --------->True Condition<------------ 
            A(int a1,int b1):a(a1),b(a+b1) //true
            A(int a1,int b1):a(a1),b(b1+2) //true
            A(int a1,int b1):a(a1),b(b1*2) //true

           --------->False Condition<------------ 
            A(int a1,int b1):b(b1),a(b+a1) //false   
                         -->above is false because we declare a before the b so it show garbage value or error massage
*/

int main()
{
    A aa(1,2);  
    aa.get();  
    return 0;
}