#include<bits/stdc++.h>
using namespace std;

void seedha(int n){
    for (int i = 0; i <= n; i++)
    {
        //star
        for(int j = 0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void ulta(int n){
    for(int j = n; j>0; j--){
        //star
        for(int i = 1; i<j; i++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{   int n; cin>>n;
    seedha(n);
    ulta(n);
    return 0;
}