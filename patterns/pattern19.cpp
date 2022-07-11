/*

* * * *
  * * *
    * *
      *

*/

//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n ;
    cin >> n ;

    int row = 1 ;

    while(row<=n){

        int space = row - 1 ;
        while(space--){
             
             cout << " " << " " ;
        }

        int col = row ;

        while(col<=n){

            cout << "*" << " " ;
            col = col + 1 ;
        }

// we can use this alternate also

        // int star = n - row + 1 ;

        // while(star--){

        //     cout << "*" << " " ;
     
        // }
     
        cout << endl ;
        row = row + 1 ;
    }
    return 0;
}