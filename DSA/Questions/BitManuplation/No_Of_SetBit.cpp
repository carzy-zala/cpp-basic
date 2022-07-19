//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;

int setBit(int x , int y){
    int count = 0;

    while(x || y ){

        int bit1 = x&1;
        int bit2 = y&1;

        if(bit1){
            count++ ;
        }

        if(bit2){
            count++;
        }

        x = x>>1;
        y = y>>1;

    }

    return count ;
}

int main()
{
    int a , b ;
    cin >> a >> b;

    cout << " No of setbit in " << a <<" and " << b << " is " << setBit(a,b) ;
    return 0;
}