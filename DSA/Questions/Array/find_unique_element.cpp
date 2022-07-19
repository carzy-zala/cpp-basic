//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;

//here we use property that 0^1=1 and 1^1=0 always so we use same property here 
// 4^4=0 , 0^6=6 always remeber

int main()
{
    int a[10] = {1,2,3,1,3,4,5,5,4};

    int ans = 0 ;

    for(int i=0;i<9;i++){
       ans = ans^a[i]; 
    }

    cout << ans << " is unique element " ;

    return 0;
}