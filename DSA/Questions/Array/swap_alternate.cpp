//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;

void swapAlternate(int ar[],int size){
    
    for(int i=0;i<size;i+=2){
        if(i+1<size){
        swap(ar[i],ar[i+1]);
     }
    }
}

void printArray(int ar[],int size){

    for(int j=0;j<size;j++){
        cout<< ar[j] << " " ;
    }
    cout << endl ;
}

int main()
{
    int odd[10] = {1,2,3,4,5,6,7} ;
    int b[10] = {1,2,3,4,5,6} ;

    swapAlternate(odd,7);
    printArray(odd,7);

    swapAlternate(b,6);
    printArray(b,6);

    return 0;
}