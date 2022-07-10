//This code is made by ZALA

/*
------------->Pointer To Object<-----------------
  ->It use for the storing the address of the object of the class
  ->We can directly use the public methods of the class by directly use of the (->) arrow
  ->It is very useful because by direct pointer we can use the object function
*/
 
#include <bits/stdc++.h>

using namespace std;

class A
{
    int a;
    public:
    void setdata()
    {
        cout<<"Enter value of a :";
        cin>>a;
    }
    void getdata()
    {
        cout<<endl<<"Your a :"<<a;
    }
};

int main()
{
    A *ptr,*p,a1;

    a1.setdata();
    a1.getdata();
    p=&a1; //storing address of the a1 object 

    //use pointer as object by direferncing the object
    (*p).getdata();

    //using pointer direct using ->
     ptr->setdata();
     ptr->getdata();
    return 0;
}