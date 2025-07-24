/*
  *  
  **
  ***  
  **
  *
*/
#include<iostream>
using namespace std;

void pattern(int n){
    
    for(int i =0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    pattern(5);
    return 0;
}