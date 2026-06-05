//output
// 12345
// 1234
// 123
// 12
// 1
//[n-i+1 ]
#include <bits/stdc++.h>
using namespace std;

 void P6(int n){
            for(int i =1; i<=n;i++){
                for(int j=1; j<=n-i+1; j++){
                    cout<<j ;   
                }
                cout<<endl;
            }   
        };

int main(){
    P6(5);
    return 0;
}