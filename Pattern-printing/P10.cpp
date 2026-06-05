//output
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
//for printing space->[n-i-1 ]
//for printing start ->[2*n-(2*i+1)]
#include <bits/stdc++.h>
using namespace std;
 
 void P10(int n){
            for(int i =1; i<=2*n-1;i++){
                
                int star =i;
                if( i>n) star =2*n-i;
                for(int j=1; j<=star; j++){
                    cout<<"*" ;   
                }
               cout<<endl;
            }   
        };

int main(){
    P10(5);
    return 0;
}