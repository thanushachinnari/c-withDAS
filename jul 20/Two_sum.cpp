#include<iostream>
using namespace std;
#include<vector>
vector<int> twosum(vector<int> arr , int target){
  int n = arr.size();
  for(int i =0;i<n;i++){
    for(int j = i+1;j<n;j++){
      if(arr[i]+arr[j] == target){
        return {i,j};
      }
     
    } 
   }
  return {};
}
int main(){
  vector<int> arr = {1, 6, 2, 10, 3};
  int target  =7;
  
  vector<int> result =twosum(arr,7);
   if (!result.empty()) {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
        cout << "Values: " << arr[result[0]] << " + " << arr[result[1]] << " = " << target << endl;
    } else {
        cout << "No pair found." << endl;
    }



  return 0;

}