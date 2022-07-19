//This code is made by ZALA
 
#include <bits/stdc++.h>

// we can use  { } blocks in cases of switch and declare and use variable within this

using namespace std;


int main()
{
    int amount;

    cout << "Enter a amount : ";
    cin >> amount ;
    
    cout << endl ;

    int p ;

    switch(1){
        // int x;    // we can declare elment here and use within the switch block
        case 1 : 
                //  int h = amount * 10;          // but we can't declare like this and use them
                //  cout<< h;  
                 p = amount/100 ;
                 cout << "You required " << p << " hundread's note " << endl ;
                 amount = amount%100 ;
                 
        
        case 2 : 
                //  {                                               // we can declare and use variable like this
                //     int h = amount * 10 ;
                //     cout << h ;                                   
                //  }
                 p = amount/50 ;
                 cout << "You required " << p << " fifty's note " << endl;
                 amount = amount%50 ;

        case 3 :   p = amount/20 ;
                 cout << "You required " <<  p << " twenty's note " << endl;
                 amount = amount%20 ;

        case 4 :  p = amount/10 ;
                 cout << "You required " << p << " ten's note " << endl;
                 amount = amount%10 ;

        case 5 :   p = amount/5 ;
                 cout << "You required " <<  p << " five's note " << endl;
                 amount = amount%5 ;

        case 6 :   p = amount/1 ;
                 cout << "You required " << p << " one's note " << endl;
                 
    }

    return 0;
}