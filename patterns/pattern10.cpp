/*
 - print following pattern
    
    n=3       n=4
   A A A    A A A A 
   B B B    B B B B
   C C C    C C C C
            D D D D
    no. of rows = n
    coloumn - row -print value relation = A + row - 1 
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

    while(row<=n){
        
        int col = 1;
        char c = 'A' + row - 1 ;
        while(col<=n){
              cout << c << " ";
              col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }
    return 0;
}