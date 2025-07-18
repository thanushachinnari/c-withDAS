#include<iostream>
using namespace std;
#include<vector>


int Linearsearch(vector<int> arr,int target){
  int n = arr.size();    //finding the len of the array
  for(int i=0;i<n;i++){   // loop
    if(arr[i]==target){  // it checks the condition value == targetnum then
      cout<<"indexes is"<<i; //it prints the index of the value
    }
  }
  return -1;   //otherwise it returns the -1;

}


int main(){
  vector<int> arr={2, 3, 4, 5, 3};
  int target = 9;

  cout<< Linearsearch(arr,target);

  return 0;
}
