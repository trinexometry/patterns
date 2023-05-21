#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cin>>n;
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        start = (i%2==0)?1:0;
        for(int j = 0; j<=i; j++){
            cout<<start;
            start = (start==0)?1:0;
        }
        cout<<endl;
    }
    
    return 0;
}