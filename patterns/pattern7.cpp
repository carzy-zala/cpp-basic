/*
 - print following pattern
    
    n=3       n=4
   1        1 
   2 3      2 3
   4 5 6    4 5 6
            7 8 9 10

    no. of rows = n
    coloumn - row -print value relation = print count variable 
    no. of column = row no.
*/

//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n;
    cin >> n;

    int row = 1 ;
    int count = 1 ;

    while(row<=n){

        int col = 1;

        while(col<=row){
            
            cout << count << " ";
            count = count + 1;
            col = col + 1;
        }  

        cout << endl ;
        row = row + 1;
    }

    return 0;
}