//This code is made by ZALA\


/*
    This is destructor properties
       -->  declare wth ~class_name
       -->  acccept no argument
       -->  no return type
       --> may have cout 
*/
 
#include <bits/stdc++.h>


using namespace std;

class x
{
    int a;
    public:
      x(int y=0)
      {
          a=25+y;
      }
      ~x(){                                //destructor of class intialised
          cout<<"destructor call of "<<a<<endl;
      }
      void getdata()
      {
          cout<<a<<endl;
      }
};

int main()
{
   x a1;
   a1.getdata();
   {                                               //this block are nothing but like give scope
       x b1(9),b2(8);
       b1.getdata();
       b2.getdata();
       cout<<"End of block"<<endl;
   }                                                 //destructor called of b1 and b2 because scope of it called
   cout<<"end of main function"<<endl;
   return 0;
}                                                    //destructor of a1,called