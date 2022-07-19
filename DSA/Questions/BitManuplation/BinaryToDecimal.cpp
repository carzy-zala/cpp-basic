//This code is made by ZALA
 
#include <bits/stdc++.h>

//This code for +ve number only
using namespace std;


int main()
{
    int n ;
    cin >> n ;

    int ans = 0;
    int i = 0;

    while(n!=0){
         int digit = n % 10 ;
         ans = ans  + (digit * pow(2,i)) ;

         n = n/10 ;
         i++; 
    }

    cout << "Answer is : " << ans ;
    return 0;
}