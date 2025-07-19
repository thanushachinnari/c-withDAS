#include<iostream>
using namespace std;
#include<vector>

int MaximumConsecutiveOnes(vector<int> arr){
  int n = arr.size();
  int max_count =0;
  int current_count =0;
  for(int i = 0;i<n;i++){
       if(arr[i] ==1){
        current_count++;
        max_count = max(max_count,current_count);
       }
       else{
        current_count =0;
    
       }
  }


     return max_count;
}
int main()
{

  vector<int> arr = {0, 0, 1, 0, 0, 0}; 
  cout<< MaximumConsecutiveOnes(arr);
  
return 0;
}