#include<iostream>

using namespace std;

int gcd(int a,int b){
  while(a>0 && b>0){
    if(a>b){
      a = a%b;
    }
    else{
      b = b%a;
    }
  }
  if(a==0){
    return b;
  }
  else{
    return a;
  }
  //  return a,b;
}
int main(){
  int a = 15;
  int b = 5;
  cout<<gcd(a,b);
  return 0;
}