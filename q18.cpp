#include<bits/stdc++.h>
using namespace std;
int main()
{   int n; cin>>n;
    for (int i = 0; i < n; i++)
    {   
        //space
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }
        //letters
        char letter = 'A';
        for(int j = 0; j<2*i+1; j++){
            cout<<letter;
            if(j < ceil((2*i+1)/2)){
                letter++;
            }
            else{
                letter--;
            }
        }
        //space
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}