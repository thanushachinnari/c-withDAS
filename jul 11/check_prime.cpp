#include<iostream>
using namespace std;
bool prime(int a){
  if(a<=1) {
     return false;
  }
  for(int i =2;i<a;i++){
    if(a%i==0){
      return false;
    }
   
  }
return true;
}
int main(){
  int a =4;
  if(prime(a)){
    cout<<"the value is prime";
  }
  else{
    cout<<"the value is not a prime";
  }
}