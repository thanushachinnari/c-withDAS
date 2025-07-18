#include<iostream>
using namespace std;
#include<vector>

vector<int> Unionof(vector<int>arr1,vector<int> arr2){
  int n1 = arr1.size();
  int n2 = arr2.size();
  vector<int> result = arr1;
  for(int i = 0;i<n1;i++){
    for(int j = 0;j<n2;j++){
      if(arr1[i]!=arr2[j]){
      result.push_back(arr2[j]);
      }
    }
  }
  return result;
  // return 0;
}
int main(){
  vector<int>arr1={1, 2, 3, 4, 5};
  vector<int>arr2 ={1, 2, 7};
  vector<int> unionresult =Unionof(arr1,arr2);
  for(int num:unionresult){
    cout<<num <<" ";
  }

  return 0;
}
