#include<bits/stdc++.h>
using namespace std;
int main()
{   int n; cin>>n;
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            int left = j;
            int right = (2*n-2)-j;
            int up = i;
            int down = (2*n-2)-i;
            cout<<(n- min(min(left, right), min(up, down))); 
        }
        cout<<endl;
    }
    
    return 0;
}