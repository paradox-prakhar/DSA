//output
// *********
// _*******
// __*****
// ___***
// ____*
//for printing space->[n-i-1 ]
//for printing start ->[2*n-(2*i+1)]
#include <bits/stdc++.h>
using namespace std;
 
 void P8(int n){
            for(int i =0; i<=n-1;i++){
                //space
                for(int j=0; j<i; j++){
                    cout<<"_" ;   
                }
                //star
                for(int k=0; k<2*n - (2*i+1); k++){
                    cout<<"*" ;   
                }
                
                cout<<endl;
            }   
        };

int main(){
    P8(5);
    return 0;
}