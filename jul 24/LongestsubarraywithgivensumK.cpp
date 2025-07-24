#include<iostream>
using namespace std;
#include<vector>
int Longestsubarr(vector<int>arr,int k ){
  int n = arr.size();
  int maxlenght = 0;
  for(int i =0;i<n;i++){
    int sum = 0;
    for(int j = i;j<n;j++){
      sum+=arr[j];
      if(sum==k){
        int  lenght = j-i+1;
        if(maxlenght<lenght){
          maxlenght = lenght;
        }
      }
    }
    
  }
   return maxlenght; 
}
int main(){
  vector<int> arr ={-3, 2, 1};
   cout<<Longestsubarr(arr,6);
  return 0;
}