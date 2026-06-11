// //output
// E 
// D E 
// C D E 
// B C D E 
// A B C D E 

#include <bits/stdc++.h>
using namespace std;
void P18(int n){
    char W = 'A'+ n-1;
    // cout<<w;
    for (int i =0;i<n;i++){
        for (char ch =W - i; ch<=W;ch++){
            cout<<ch<< " ";
        };
        cout<<endl;
    }
}   
int main() {
    P18(2);
    return 0;
}