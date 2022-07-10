/*
 - print following pattern
    
    n=3       n=4
   1 2 3    1 2 3 4
   1 2 3    1 2 3 4 
   1 2 3    1 2 3 4
            1 2 3 4

    no. of rows = n
    coloumn - row -print value relation = print the value of the respective coloumn  
    no. of column = n
*/

//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n;
    cin>> n;

    int row = 1;

    while(row<=n){

        int col=1;
        while(col<=n){
            cout << col << " ";
            col = col+1;
        }

        cout << endl;
        row = row + 1;
    }

    return 0;
}