//This code is made by ZALA
 
#include <bits/stdc++.h>
/*
---------- Templetes ------------
--> It also called as parameterised class
--> Templet is special tool which is use to make class datatype dynamic 
--> It simply mean that we can pass dynamically datatype to member and meber function of the class
   syntax :
             case 1: template class
                  template <class T>
                  class <classname>{
                      //code
                  }
              case 2: template function
                  template <typename T> T sum(T a,T b) ;
   - In the code we can use T as data type to the varible in which we want to assign dynamic datatype
   - We can pass multiple dynamic data member by the  using comma(,) operator
   - we also can pass by default data type to it also
      note :- all default argu rule will follow
   - class T , typename T are called Tamplate parameter

---------------- Advantages --------------------
->code reusibility
->generic coding //make code general
*/


using namespace std;

// tempalte create as the function  (function template)
template <typename T>T display(T a)
{
    return a;
}

//template create in class  (Class template)
template <class A,class b = char>   //all right hand sided parameter of default argu must have default value
class p{
    A data;
    b c;
    public:
    p(A d1,b b1){
       data=d1;
       c=b1;
    }
    void display()
    {
        cout<< data <<" "<<c<<endl;
    }
};

//template overloading
// note :- Exact match always call first
void func(int a)
{
    cout<<"This is func() "<<a<<endl;
}

template <class T>
void func(T a)
{
    cout<<"This is templatize func() "<<a<<endl;
}


int main()
{
    //tamplate function
    cout<<display<int>(5)<<endl;
    cout<<display<char>('A')<<endl;

    //tamplate class,parameterized class     
    p<int,int> p1(5,4);
    p1.display();

    p<int> p2(5,'d');  //default value given to parameter of tamplate
    p2.display();

    //tamplate overloading

    func(2);  // call exact math function
    func('A'); //call tamplate function
    func(2.223); //call tamplate function



    return 0;
}