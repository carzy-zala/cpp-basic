//This code is made by ZALA

 #include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x ;
    int y = 0 ;
    int m = x ;

    while(x){
        y = y<<1; // we can't write it after the y shftleft operation bcz it will do one more 0 digit at last
        y = y|1;
        // y = y<<1;  // don't write here 
        x = x>>1;
    }
    
    int ans = (~m)&y;

    cout << ans ;

    return 0;
}