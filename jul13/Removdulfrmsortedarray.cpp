#include<iostream>
#include <vector>
using namespace std;
int removeduplicates(vector <int>& arr){
  int n = arr.size(); 
  vector<int> result ;
  if(n==0) return 0;
  int i=0;
  for(int j =1;j<n;j++){
  if(arr[i] !=arr[j]){
      i++;
      arr[i] = arr[j];
    
  }
  }
return i+1;
}
int main(){
  vector<int> arr = {1,4,4,5,5,6,7,7};
  int nextnum = removeduplicates(arr);
 for ( int i =0;i<nextnum;i++){
  cout<<arr[i]<<" ";
 }
  return 0;
}