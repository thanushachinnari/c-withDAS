#include<iostream>
#include <vector>
using namespace std;
bool sortedarr(vector<int> arr){
  int n = arr.size();
 // vector<int> result;

  for(int i=0;i<n;i++){
    if(arr[i] > arr[i+1]){
       return false;
    }
    
  }
  return true;
}
int main(){
  vector<int> arr = {1,90,87,67,97};
  bool result = sortedarr(arr);
  if(result){
    cout<<"all elements are sorted";
  }
  else{
    cout<<"not all elements are sorted";
  }
  return 0;
}