#include<iostream>
#include<vector>
using namespace std;
int seclargest(vector<int> arr){
  int n = arr.size();
  int largest = -1;
  int smallest;
  for(int i =0;i<=n;i++){
    if(arr[i]>arr[i+1]){
      smallest = largest;
      largest = arr[i];
    }
    else if(arr[i]<arr[i+1]){
      smallest = largest;
      largest = arr[i+1];
    }

    }
    return smallest;
  }

int main(){
  vector<int> arr={3,8,90,9,0,5,76};
  cout<<seclargest(arr);

  return 0;
}