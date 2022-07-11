/*
 -Print below pattern :
   n=3     n=5                  n=3        n=5
   ***    *****                1 1 1     1 1 1 1 1
   ***    *****                2 2 2     2 2 2 2 2
   ***    *****         or     3 3 3     3 3 3 3 3 
          *****                          4 4 4 4 4 
          *****                          5 5 5 5 5

   no of rows = 3
   coloumn-row relation = each row has same no. of rows as entry of n
                          for number patter - print the number of row every time 
*/   

//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n;
    cin >> n;
      
    int i=1;   //represent row

    while(i<=n){     //take <= n because i=1 intially

        int j=1;  //represent a coloumn
 
        while(j<=n){  
            cout << "*" ;   //if want to print number pattern do below step
            // cout << i << " ";  //printing i because each row has value of no. of row
            j=j+1;
        }

        cout<<endl;
        
        i=i+1;
    }
    return 0;
}