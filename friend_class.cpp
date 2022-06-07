//This code is made by ZALA
 
#include <bits/stdc++.h>

using namespace std;

class y;// forward declaration

class x
{
  int i;
  friend void swapObjData(x &,y &);
  // we can make whole class friend  or one class function
  friend class y;   // making whole class as friend
 // friend void y :: setdata(x); //making class function as friend
  public:
  friend void updateObjData(x &);
  void setadata()
  {
      cin>>i;
  }
  void getdata()
  {
    cout<<"Your data is ..:"<<i<<endl;
  }
};

class y
{
    int j;
    friend void swapObjData(x &,y &);
    public:
    void setdata()
    {
        cin>>j;
    }
    void setdata(x obj) //to use it declare class or class function as friend
    {
        j=obj.i+10;
    }
    void getdata()
    {
        cout<<"Your data is ..:"<<j<<endl;
    }
};

void swapObjData(x &ob,y &ob1)  //both class has to declaration as friend
{
  int temp=ob.i;
  ob.i=ob1.j;
  ob1.j=temp;
  cout<<"Your value of x data is ..:"<<ob.i<<endl;
  cout<<"Your value of y data is ..:"<<ob1.j<<endl;

}

void updateObjData(x &qq)    //declare in one class only as friend
{
    qq.i=qq.i+50;
}

int main()
{
    x a1;y a2;

    a1.setadata();
    a1.getdata();

    a2.setdata();
    a2.getdata();

    a2.setdata(a1);
    a2.getdata();

    updateObjData(a1); //not required any obj to run

    swapObjData(a1,a2);

    return 0;
}