//Output
// *****
// *   *
// *   *
// *   *
// *****


#include <bits/stdc++.h>
using namespace std;
void P21(int n){
    
    for (int i =0; i<n;i++){
         for(int j =0; j<n;j++){
            if(j==n-1 || j==0 || i==0 || i==n-1){
                cout<<"*";
            }else{
                cout<<" ";
            }

         }
         cout<<endl;
    }
}   
int main() {
    P21(5);
    return 0;
}