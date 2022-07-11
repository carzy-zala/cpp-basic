/*
A 
B C
D E F
G H I J
*/

//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n ;
    cin >>  n ;

    int row = 1 ;
    
    while(row<=n){

        int col = 1 ;
        char c = 'A' + row + col - 2 ;

        while(col<=row){

            cout << c << " " ;
            c = c + 1 ;
            col = col + 1 ;
        }

        cout << endl ;
        row = row + 1 ;
    }

    return 0;
}