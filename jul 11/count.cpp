#include<iostream>
using namespace std;
int func1(int number){
  int count = 0;
  while(number>0){
    number/=10;
    count++;
  }
   return count;
}
int main(){
  int num = 8;
  // cout<<num;
  // int digit = func1(num);
  // func1(num);
  cout<<"the digits in the number is"<< "\t"<<func1(num);
  return 0;
}