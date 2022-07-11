/*
      *
    * *
  * * *
* * * *
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

        int col = 1 ;
        int space = n - row ;
        
        while(space--){
            cout << " " << " " ;
        }

        while(col<=row){
            cout << "*" << " " ;
            col = col + 1 ;
        }

        cout << endl ;
        row = row + 1 ;
    }
    return 0;
}