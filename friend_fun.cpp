//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;

class x
{
   int d;
   friend int sumObj(x,x);  //friend function can declare in public or private section
   public:
   void setdata()
   {
     cin>>d;
   }
   void getdata()
   {
       cout<<"Your data is ..:"<<d<<endl;
   }
};

int sumObj(x ob1, x ob2)  //friend function
{
  x ob3;
  ob3.d=ob1.d+ob2.d;
  return ob3.d;  
}

int main()
{
    x a,b;

    a.setdata();
    a.getdata();
    
    b.setdata();
    b.getdata();

    cout<<"Sum of the x object data..:"<<sumObj(a,b)<<endl;

    
    return 0;
}