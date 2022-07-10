/*
 - print following pattern
    
    n=3       n=4
   3 2 1    4 3 2 1
   3 2 1    4 3 2 1 
   3 2 1    4 3 2 1
            4 3 2 1

    no. of rows = n
    coloumn - row -print value relation = print value = n - col no. + 1  
    no. of column = n
*/

//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;


int main()
{
    
    int n;
    cin >> n;

    int row = 1 ;

    while(row<=n){

        int col = 1;
        while(col<=n)
        {
            cout << n - col + 1 << " ";
            col = col + 1;
        }
        
        cout << endl;
        row = row + 1;
    }
    return 0;
}