//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;

bool isPower(int n , int power){

    int ans = 1 ;

    for(int i = 0 ; i<30 ; i++){
        if(ans == n){
            return true;
        }

        if(ans<INT_MAX/10 || ans>INT_MIN){
        
         ans = ans * power ;

        }
      }

      return false;
}

int main()
{
    int n ;
    int power ;

    cin >> n ;
    cin >> power ;

    if(isPower){
        cout << n << " is power of  " << power ;
    }
    else{
        cout << n << " is not power of  " << power ;
    }

    return 0;
}