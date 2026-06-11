//Output


#include <bits/stdc++.h>
using namespace std;
void P21(int n){
    
    for (int i =0; i<(n*2)-1;i++){
         for(int j =0; j<2*n-1;j++){
            
               int top= i;
               int left =j;
               int right= (2*n-2)-j;
               int down= (2*n-2)-i;

            cout<<(n- min(min(top,down),min(right,left)));

         }
         cout<<endl;
    }
}   
int main() {
    P21(5);
    return 0;
}