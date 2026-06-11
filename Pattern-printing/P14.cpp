// Output
// A
// AB
// ABC
// ABCD

#include <iostream>
using namespace std;


void P14(int n){
    for (int i =1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<char('A' + j);
        }
        cout<<endl;
    }
}


int main() {
    P14(4);
    return 0;
}