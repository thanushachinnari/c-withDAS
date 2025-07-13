#include<iostream>
using namespace std;
float reversenum(int num){
  int rev=0;
  while(num>0){
     int digit = num%10;
     rev = rev*10+digit;
     num/=10;

  }
   return rev;
}
int main(){
  int num = 127891;
  cout<<reversenum(num);
  return 0;
}