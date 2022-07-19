//This code is made by ZALA
 
#include <bits/stdc++.h>

using namespace std;

void printArray(int a[],int size){
   for(int i =0;i<size;i++){
     cout << a[i] << " " ;
   }
   cout << endl ;
}

void revArray(int a[],int size){

    int start = 0 ;
    int end = size-1 ;

    while(start<=end){
        swap(a[start],a[end]) ;
        start++ ;
        end-- ;
    }

    printArray(a,size);
}

int main()
{
    int arr[50] = {8,1,2,3,4,5};
    int ar[40] = {9,1,2,3,4,5,6}  ;
    int size = 6 ;
    int n = 7 ;

    revArray(arr,size) ;
    revArray(ar,n) ;

    return 0;
}