/*
 - print following pattern
    
    n=3       n=4
   1        1 
   2 2      2 2 
   3 3 3    3 3 3
            4 4 4 4

    no. of rows = n
    coloumn - row -print value relation = print value of row  
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
        
         int col = 1;
         while(col<=row){

            cout << row << " ";
            col = col + 1;
         }

         cout << endl;
         row = row + 1;
    }

    return 0;
}