#include<iostream>
using namespace std;
void multipulcation(int num){
  for(int i =1;i<=10;i++){
    cout<<num<<"X"<<i<<"="<<num*i<<endl;
  }
  
}
int main(){
    int num = 8;
  multipulcation(num);
  return 0;

}