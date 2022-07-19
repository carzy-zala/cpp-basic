//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;

int fib(int n){

    int a0=0;
    int a1=1;

    int ans ;

    for(int i = 3 ;i<=n ;i++){
        ans = a0+a1 ;
        a0 = a1;
        a1 = ans;
    }

    return ans;
}

int main()
{
    int n ;
    cin >> n ;

    cout << n << " th term of fibonachi is : " << fib(n);

    return 0;
}