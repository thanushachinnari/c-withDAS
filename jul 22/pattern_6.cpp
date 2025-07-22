/*
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1
*/
#include<iostream>
using namespace std;
void patterns(int n){
  for(int i =1;i<=n;i++){
    for(int j =1;j<=n-i+1;j++){
      cout<<j<<" ";
    }
    cout<<"\n";
  }

}
int main(){
  patterns(5);
  return 0;
}
