//This code is made by ZALA

//Static is thing which execyute once only throghout programme
//static can use in the class also 
//   -static variable in class is the common to all object
//   -static member function is the function thet can do operation on the static(function and variable) only
//   - static function call using the class name
// static functioon use in class for utility
// static variable also called class variable

#include <bits/stdc++.h>

using namespace std;

class employee
{
  int id;
  static int count;  // value can't intialized in private member
  public :
  void setdata()
  {
      cin>>id;
      count++;
  }
  void getdata()
  {
      cout<<"employee id is "<<id<<" and employee number is :"<<count<<endl; 
  }
  
  static  void getcount()
  {
    //  cout<<id;  //throw error bcz id is not static member
      cout<<"count value is :"<<count<<endl;
  }

};

int employee :: count=1000;  //declration can done at this 
// int employee :: id=1001;  only static variable do like this

int main()
{
    employee j,k,l;

    j.setdata();
    j.getdata();
    employee::getcount();  //static function calll like this
    
    k.setdata();
    k.getdata();
    employee::getcount();  
    
    l.setdata();
    l.getdata();
    employee::getcount(); 
    
    return 0;
}