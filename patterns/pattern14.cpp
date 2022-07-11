/*

A
B B
C C C

*/

//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n ;
    cin >> n ;

    int row = 1;
    

    while(row<=n){

        int col = 1 ;
        char c = 'A' + row - 1 ;

        while(col<=row){

            cout << c << " " ;
            col = col + 1;
        }
        
        cout << endl ;
        row = row + 1 ;
        
    }
    return 0;
}