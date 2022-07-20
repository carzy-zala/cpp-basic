//This code is made by ZALA
 
#include <bits/stdc++.h>

//take point that array is in sorted form

using namespace std;

int  Bsearch(int a[],int size,int key){

    int start = 0 ;
    int end = size-1;
    int mid = start + (end - start)/2;  //note : - do end- start not reverse 
  

    while(start<=end){
        if(a[mid] == key ){
      
            return mid ;
        }
        else {
               if(a[mid]>key){
               end = mid - 1 ;
               }

               else{
               start = mid + 1 ;
            }
        }
        

        mid = start + (end - start)/2 ;
     }

     return -1 ;
}


int main()
{
    int odd[100]= {1,2,3,5,7,8,11,13,14};   

    int even[100]= {1,2,3,5,7,8,9,11};   

    cout << "1 is in odd array present in : "<<Bsearch(odd,9,1) << endl;
    cout << "1 is in even array present in : "<<Bsearch(even,8,1);
    
    return 0;
}