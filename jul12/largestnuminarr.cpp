#include<iostream>
#include <vector>
using namespace std;
int largestnuminarr(vector<int> arr){
  int largest = arr[0];
  int n = arr.size();
  for(int i =1;i<=n;i++){
    if(arr[i]>largest){
      largest = arr[i];
    }
  }
  return largest;
}
int main(){
  vector<int>arr={3,89,0,34,6,101};
  cout<<largestnuminarr(arr);
  return 0;
}