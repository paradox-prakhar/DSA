// Output
// ABCD
// ABC
// AB
// A

#include <iostream>
using namespace std;
void P15(int n){
    for (int i =1;i<=n;i++){
       for(int j=0; j<n-i+1;j++){
        cout<<char('A'+ j ); 
       };
       cout<<endl;
    };
}
int main() {
    P15(4);
    return 0;
}