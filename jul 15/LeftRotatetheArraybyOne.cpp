#include<iostream>
using namespace std;
#include<vector>
void LeftRotate(vector<int>& arr){
  int n = arr.size();

  int left = arr[0];
   for(int i =0;i<n-1;i++){
       arr[i] = arr[i+1];

    }
    arr[n-1] = left;
  }


int main(){
  vector<int> arr ={1,2,3,4,5,6};
   LeftRotate(arr);
  for(int i =0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}