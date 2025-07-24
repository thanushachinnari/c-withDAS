/*
1    1
12  21
123321
*/
#include<iostream>
using namespace std;

void pattern(int n){
  for(int i = 1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<j;
    }
    //space
    for(int s =1;s<=2*(n-i);s++){
      cout<<" ";
    }
    //numbers printing 
    for(int j =i;j>=1;j--){
      cout<<j;
    }
      cout<<endl;
  }

  }
int main(){
    pattern(3);
    return 0;
}