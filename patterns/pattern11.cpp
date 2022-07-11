/*
 - print following pattern
    
    n=3       n=4
   A B C    A B C D 
   A B C    A B C D
   A B C    A B C D
            A B C D
    no. of rows = n
    coloumn - row -print value relation = A + col - 1 
    no. of column = n
*/

//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n;
    cin >> n;
     
    int row = 1;

    while(row <= n){

        int col = 1;
        
        
        while(col<=n){
            char c = 'A' + col -1 ;
            cout << c << " ";
            col = col + 1;
        }

        cout << endl;
        row = row + 1;

        }
    return 0;
}