//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;

bool Lsearch(int ar[],int n,int value){

    for(int i=0;i<n;i++){
        if(ar[i]==value){
            return true;
        }
    }
    return false ;
}

int main()
{
    int arr[100] = {2,1,3,4,5,6,22,435,54,33};
    int size = 10 ;
    int key ;
    cin >> key;
    

    if(Lsearch(arr,size,key)){
        cout << "Element is found " << endl ;
    }
    else{
        cout << "Element is not found " << endl ;
    }

    return 0;
}