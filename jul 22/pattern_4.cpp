/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
*/
#include<iostream>
using namespace std;
void pattern(int n){
   for(int i =0;i<=n;i++){
    for(int j =1;j<=i;j++){
      cout<<i<<" ";
    }
    cout<<"\n";
   }
  // return 0;
}
int main(){
  pattern(6);
  return 0;
}
