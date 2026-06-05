//output
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
//[n-i+1 ]
#include <bits/stdc++.h>
using namespace std;

 void P5(int n){
            for(int i =1; i<=n;i++){
                for(int j=0; j<n-i+1; j++){
                    cout<<"* ";
                }
                cout<<endl;
            }   
        };

int main(){
    P5(5);
    return 0;
}