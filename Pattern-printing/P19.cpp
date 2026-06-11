//Output
// ********
// ***  ***
// **    **
// *      *
// *      *
// **    **
// ***  ***
// ********

#include <bits/stdc++.h>
using namespace std;
void P19(int n){
    int initS=0;
    for(int i=1;i<=n;i++){
        // cout<<n;
        //star
        for(int j=0;j<=n-i;j++){
            cout<<"*";
        }

        //space
        for(int k=1;k<=initS;k++){
            cout<<" ";
            
        } 
        //star
        for(int j=0;j<=n-i;j++){
            cout<<"*";
        }
        initS +=2;
        cout<<endl;
    }
    initS=n*2-2;
    for(int i=1;i<=n;i++){
        
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //space
        for(int k=1;k<=initS;k++){
            cout<<" ";
            
        } 
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        initS -=2;
        cout<<endl;
    }
}   
int main() {
    P19(4);
    return 0;
}