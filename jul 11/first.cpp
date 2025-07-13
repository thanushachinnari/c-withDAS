#include<iostream>
using namespace std;
#include<vector>

int print (vector<int>arr){
  for (int i = 0 ; i < arr.size() ;    i++){
    cout<<arr[i]<<endl;
  }
  return 0;
}

int main (){
  vector <int>arr = {1,2,3,4,5,6};
  print(arr);
}