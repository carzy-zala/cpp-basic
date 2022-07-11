/*
A B C
B C D
C D E
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

        int col = 1 ;
        
        while(col<=n){
            char c= 'A' + row + col -2 ;
            cout << p << " " ;
         
            col = col + 1 ;
        } 

        cout << endl ;
        row = row + 1 ;

    }
    return 0;
}