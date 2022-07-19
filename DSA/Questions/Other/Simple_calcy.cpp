//This code is made by ZALA
 
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int a ;
    int b ;
     
    cout << "Enter inteder a : " ;
    cin >> a ;
    cout << endl << "Enter inteder b : " ;
    cin >> b ;
     
    char c ;
    cout << endl << "Enter which operation you want to perform : " ;
    cin >> c ;
    cout << endl;

    switch(c){
        case '+' : cout << a << " + " << b <<" = " << a+b ;
                   break ;
                   
        case '-' : cout << a << " - " << b <<" = " << a-b ;
                   break ;

        case '*' : cout << a << " * " << b <<" = " << a*b ;
                   break ;

        case '/' : cout << a << " / " << b <<" = " << a/b ;
                   break ;

        case '%' : cout << a <<" % " << b << " = " << a%b;
                   break; 
     }

    return 0;
}