/*
 - print following pattern
    
    n=1       n=4
   1        1 
   2 1      2 1 
   3 2 1    3 2 1
            4 3 2 1

    no. of rows = n
    coloumn - row -print value relation = row - col + 1 (start with row no.)
    no. of column = row no.
*/

//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n;
    cin >> n;

    int row = 1;

    while(row<=n){

        int col = 1 ;
        while(col<=row){

            cout << row - col + 1 << " " ;
            col = col + 1;
        }

        cout << endl ;
        row =row + 1;
    }
    return 0;
}