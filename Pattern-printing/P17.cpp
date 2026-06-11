//output
//    A   
//   ABA  
//  ABCBA 
// ABCDCBA

#include <bits/stdc++.h>
using namespace std;
void P17(int n){
    for (int i =0; i<n;i++){
        //space/
        for(int j =0 ; j<n-i-1; j++){
            cout<<" ";
        }
        //char
        char ch= 'A';
        char breakpoint =(2*i+1)/2;
        for (int l=1 ; l<=2*i+1; l++){
            cout<<char(ch);
            if (l<=breakpoint){
                ch++;
            }else{
                ch--;
            }
        }
        //space
        for(int k=0 ; k<n-i-1; k++){
            cout<< " ";
        }
        cout<<endl;
    }
}   
int main() {
    P17(4);
    return 0;
}