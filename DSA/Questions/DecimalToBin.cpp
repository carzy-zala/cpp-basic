//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n ;
    cin >> n ;

    int ans = 0 ;
    int i = 0 ;
    bool sb = 0 ;

    while(n!=0){

       int bit = (n & 1) ;

       ans = (bit * (pow(10,i))) + ans ;

       n = n >> 1 ;
       i++;
    }

    while(ans!=0){

        int nbit = ~ (ans & 1) ;

        ans = ans >> 1 ;

        cout << nbit ;
        
    }


    return 0;
}