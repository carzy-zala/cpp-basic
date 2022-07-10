//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n;
    cin >> n;
    
    int i=2; //we take intially i=2 because we know all numbers are divisible by 1 and itself always

    while(i<n)
    {
        if(n%i==0){
            cout<< "Prime number" << endl;
        }

        i=i+1;
    } 

   
    
    return 0;
}