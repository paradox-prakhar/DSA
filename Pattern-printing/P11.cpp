//output
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
//even place start with 0 
//odd place start with 1
#include <bits/stdc++.h>
using namespace std;
 
 void P11(int n){
    int start= 1;
            for(int i =1; i<=n;i++){
                if( i%2==0){
                    start= 0;
                }
                else{
                    start =1;
                };
                for(int j=1; j<=i; j++){
                    cout<<start ;cout<<" " ;   
                    start =1- start ;
                }
               cout<<endl;
            }   
        };

int main(){
    P11(5);
    return 0;
}