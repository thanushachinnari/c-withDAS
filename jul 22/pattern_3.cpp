/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include<iostream>
using namespace std;                                            
void pattern(int n){
  for(int i =0;i<=n;i++){
    for(int j =1;j<=i;j++){
      cout<<j<<" ";
    }
    cout<<"\n";
  }
}


int main(){
pattern(5);
  return 0;
}
