/*
* * * * * 
* * * * 
* * * 
* * 
* 
*/
#include<iostream>
using namespace std;
void patterns(int n){
  for(int i = 0 ;i<n;i++){
    for(int j =i;j<n;j++){
      cout<<"*"<<" ";
    }
    cout<<"\n";
  }
  
}
int main(){
  patterns(6);
  return 0;
}