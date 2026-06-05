//output
// ___*___
// __***__
// _*****_
// *******
// *******
// _*****
// __***
// ___*
//for printing space->[n-i-1 ]
//for printing start ->[2*n-(2*i+1)]
#include <bits/stdc++.h>
using namespace std;

 void P7(int n){
            for(int i =0; i<=n-1;i++){
                //space
                for(int j=0; j<n-i-1; j++){
                    cout<<"_" ;   
                }
                //star
                for(int k=0; k<2*i+1; k++){
                    cout<<"*" ;   
                }
                //space
                for(int l=0; l<n-i-1; l++){
                    cout<<"_" ;   
                }
                cout<<endl;
            }   
        }
        
        void P8(int n){
            for(int i =0; i<=n-1;i++){
                //space
                for(int j=0; j<i; j++){
                    cout<<" " ;   
                }
                //star
                for(int k=0; k<2*n - (2*i+1); k++){
                    cout<<"*" ;   
                }
                
                cout<<endl;
            }   
        };
        void P9(int n ){
            P7(n);
            P8(n);
        }

 
 

int main(){
    P9(4);
    return 0;
}