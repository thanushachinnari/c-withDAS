/*
1
01
101
*/
#include<iostream>
using namespace std;

void pattern(int n){
    for(int i =0;i<=n;i++){
      for(int j =1;j<=i;j++){
        if(j%2==0){
          cout<<"0";
        }
        else{
          cout<<"1";
        }
      }
      cout<<"\n";
    }
    
}
int main(){
    pattern(5);
    return 0;
}