//This code is made by ZALA
 
#include<string>
#include <bits/stdc++.h>
/*
-------------- File Input Output ------------------
 -->it can be done uisng the ftream library of the cpp
 -->we have three major classes of this library
     -->fstreambase
     -->ifstream --->derived from the fstreambase class
     -->ofstream
 -->ifstream use for the read operation
 -->ofstream use for the write operation
 -->we can use the file with the help of two methods
    --> open using the constructor  
       for ex // ifstream in("x.txt")
    --> open using the open function
       for ex // ifstream jn;
                 jn.open("x.txt");
 -->we must have to use the close function practice in order to close the  open file
 --> eof() is the function that check file end come or not
     eof()=TRUE when the end of the come
     eof()=false when the pointer at which the content is present

------------------- Getline -----------------
-->it include in the  string library
-->getline function is use to read the whole line of the file with the white  space
   syntax : getline(<pointername>,<string variable>,<deliminator>);
        deliminator is the part at which we have to end the fetching it refer like that.
        by default deliminator is /n
*/

using namespace std;


int main()
{
    string s,ss;
    char st[90];

    //write operation to file
    ofstream out("j.txt");
    cin.getline(st,90);
    out<<st;
    out.close();

    ifstream in("j.txt");
    getline(in,s);
    cout<<s;
    
    getline(in,ss,' ');
    cout<<ss;
    in.close();

    return 0;
}