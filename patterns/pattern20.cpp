/*
                     space    1st triangle   second triangle 
_ _ _ 1             _ _ _             1                                    
_ _ 1 2 1           _ _             1 2             1
_ 1 2 3 2 1         _             1 2 3             2 1
1 2 3 4 3 2 1                   1 2 3 4             3 2 1
*/

//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n ;
    cin >> n ;

    int row = 1 ;

    while(row<=n){

        // space dikhao
        int space = n - row ; 

        while(space){
            cout << " " << " " ;
            space = space - 1 ;
         }

        //first triangle

        int col = 1 ;

        while(col<=row)
        {
            cout << col << " " ;
            col =col + 1 ;
        }
        
        // second triangle

        int col2 = row - 1 ;

        while(col2){

            cout << col2 << " " ;
            col2 = col2 - 1 ;  
        }

        cout <<  endl ;
        row = row + 1 ;
    }
    return 0;
}