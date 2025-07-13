#include<iostream>
using namespace std;
int rev =0;
int func1(int num){
   while(num>0){
    int digit = num%10;
    rev = rev*10+digit;
    num/=10;
   }
   return rev;
}
int main(){
   int num = 121;
   
   if(rev!=num){
    cout<<"number is a plaindrom";
   }
   else{
    cout<<"number is not a palindeome";
   }
  return 0;
}

