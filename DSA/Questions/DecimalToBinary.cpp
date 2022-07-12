#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int l = n;
    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;
        cout<< bit << endl;
        int x = (bit * pow(10, i))  ;
        cout<< x << ans << endl;
        
        ans = x + ans;
        n = n >> 1;
        i++;
    }
    cout << "Binary number of " << l << " is " << ans << endl;

    return 0;
}