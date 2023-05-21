#include<bits/stdc++.h>
using namespace std;
int main()
{   int n; cin>>n;
    int inspace2 = (n-1)*2;
    for (int i = 0; i < n; i++)
    {   
        //stars i+1
        for(int j = 0; j<i+1; j++){
            cout<<"*";
        }

        //spaces 
        for(int j = 0; j<inspace2; j++){
            cout<<" ";
        }

        //star i+1
        for(int j = 0; j<i+1; j++){
            cout<<"*";
        }
        inspace2-=2;
        cout<<endl;

    }
    int inspace = 0;
    for (int i = 0; i < n; i++)
    {   
        //stars n-i
        for(int j = 0; j<n-i; j++){
            cout<<"*";
        }

        //spaces 
        for(int j = 0; j<inspace; j++){
            cout<<" ";
        }

        //star n-i
        for(int j = 0; j<n-i; j++){
            cout<<"*";
        }
        inspace+=2;
        cout<<endl;

    }
    
    return 0;
}