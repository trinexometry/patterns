#include<bits/stdc++.h>
using namespace std;
int main()
{   int n ; cin>>n;
    for (int i = n; i>0 ; i--)
    {
        for(int j = 0; j<i; j++){
            cout<<char(65+j);
        }
        cout<<endl;
    }
    
    return 0;
}