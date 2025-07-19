#include<iostream>
using namespace std;
#include<vector>

int MissingNumber(vector<int> arr){
  int n = arr.size(); //finding the length of the array
  int sumarr = n*(n+1)/2;  //sum of n numbers
  int sum =0;  //initilize the varible 
  for(int i =0;i<n;i++){
    sum+=arr[i];   // adding the elements in the array
  }
  return (sumarr - sum); // return the missing elements

}

int main(){
  vector<int> arr = {0, 1, 2, 4, 5, 6};
  cout<<MissingNumber(arr);


  return 0;
}