// This code is made by ZALA
//whole below is single level inharitance example
//if protectedly inharited than methods and members of base class are invoke using the derived class methods only
//basederived1 is called inharitance path

#include <bits/stdc++.h>

using namespace std;

class base                              //base class
{
    int a;

public:
    int b;
    void setdata(int ip, int j)
    {
        a = ip;
        b = j;
    }

    int getdata()
    {
        cout << "This is done by the getdata" << endl;
        return a;
    }
};

class derived1 : public base           //publically inharited class
{
    int d1;

public:
    void process()
    {
        d1 = getdata() + b;
    }
    void getdatad()
    {
        cout << "this is done by getdatad" << endl;
        cout << "This is B: " << b << endl;
        //   cout<<a ;
        cout << "This is  A: " << getdata() << endl; // show an eroor
        process();
        cout << "This is d1: " << d1 << endl;
    }
};

class derived2 : private base          //privately inharited class  
{
    int d2;

public:
    derived2()
    {

        setdata(9, 10);
        d2 = getdata() + b; // we have to use the getdata() function because the a is private member of a
    }

    void getdatad2()
    {
        cout << "this is done by getdata2" << endl;
        cout << "This is B: " << b << endl;
        cout << "This is A: " << getdata() << endl;
        cout << "This is d2: " << d2 << endl;
        //   cout<<a ;                   //show an eroor
    }
};

int main()
{
    derived1 dd1;
    derived2 dd2;

    // dd1 is publically inharite so it can use all function of base class by the derived1 class object
    cout << "this is done by dd1" << endl;
    dd1.setdata(5, 8);
    dd1.getdatad();
    cout << "This is dd1 derived1 object call to base class..: " << dd1.getdata() << endl;

    // dd2 privately inharite so that all function of base clas not accesible by the derived2 class object
    // dd2.getdata();           //throw error
    cout << "this is done by dd2" << endl;
    dd2.getdatad2();
    return 0;
}