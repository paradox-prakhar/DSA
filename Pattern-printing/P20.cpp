//Output
// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *

#include <bits/stdc++.h>
using namespace std;
void P20(int n){
    int S=(n*2)-2;
    for (int i =1;i<=n;i++){
        //star
        for(int j=1; j<=i;j++){
            cout<<"*";
        }    
        //space
        for(int j=1;j<=S;j++){
            cout<<" ";

        }
         for(int j=1; j<=i;j++){
            cout<<"*";
        } 
        S-=2;
        cout<<endl;
        
    }
    S=2;
    for (int i =1;i<=n;i++){
        //star
        for(int j=1; j<=n-i;j++){
            cout<<"*";
        }    
        //space
        for(int j=1;j<=S;j++){
            cout<<" ";

        }
         for(int j=1; j<=n-i;j++){
            cout<<"*";
        }  
        S+=2;
        cout<<endl;
    }
}   
int main() {
    P20(4);
    return 0;
}