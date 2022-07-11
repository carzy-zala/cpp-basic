/*

 A B C      A B C D
 D E F      E F G H
 G H I      I J K L
            M N O P
*/

//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n;
    cin >> n ;

    int row = 1;
    char c = 'A' ;

    while(row<=n){

        int col = 1 ;

        while(col<=n){

            cout << c << " ";
            col = col + 1 ;
            c = c + 1;
        }
        cout << endl ;
        row = row + 1 ;

    }
     
    return 0;
}