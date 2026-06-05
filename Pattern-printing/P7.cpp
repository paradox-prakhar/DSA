//output
//       *      
//      ***     
//     *****    
//    *******   
//   *********  
//for printing space->[n-i-1 ]
//for printing start ->[2*i+1]
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
        };

int main(){
    P7(5);
    return 0;
}