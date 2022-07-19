//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;

void doOp(int ar[],int size){

    int  start = 0;
    int end = size-1;

    while(start<=end){
         if(ar[start]==0){
            start++;
         }

         if(ar[end]==1){
            end--;
         }

         if(ar[start]==1 && ar[end]==0){
            swap(ar[start],ar[end]);
            start++;
            end--;
         }
    }
}

void printArray(int ar[],int size){

    for(int i=0;i<size;i++){
        cout << ar[i] << " ";
    }
}

int main()
{
    //make sure all 0's are at left side and 1's are in right side
    int a[10] = {1,0,0,1,1,0,0,0,1} ;

    doOp(a,9);

    printArray(a,9);

    return 0;
}