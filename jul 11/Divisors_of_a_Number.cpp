#include<iostream>
using namespace std;

void divnum(int num){
  int i =1;
  int ans=0;
  while(num<100){
    if(num%i==0){
      //  ans=ans+i;
      // ans.append(num);
      cout<<i<<endl;
   
    }
     i++;
  }
  // return ans;
}
int main(){
  int num=27;
  divnum(num);

  return 0;
}