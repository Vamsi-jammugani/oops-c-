#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : "; 
    cin >> n;
    int sum=0;
    for(int i=1;i<=n;i++) 
        sum+=i;
    cout << sum;
    return 0;
}