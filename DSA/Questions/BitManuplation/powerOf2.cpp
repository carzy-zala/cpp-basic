//This code is made by ZALA
 
#include <bits/stdc++.h>

// only applicable on ppower of two bcz of the binary representation

using namespace std;


int main()
{
    int n ;
    cin >> n ;
    int count = 0 ;

    while(n){
       int bit = n&1 ;
       if(bit){
        count ++ ;
       }

       n = n>>1 ;
      
    }
  
     if(count>1){
        cout << "Not in power of two " << endl ; 
       }
     else{
        cout << "It's in power of two " ;
     }
    
    return 0;
}