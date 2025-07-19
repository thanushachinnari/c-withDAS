#include<iostream>
using namespace std;
#include<vector>

int MaximumConsecutiveOnes(vector<int> arr){
  int n = arr.size(); //finding size of the array
  int max_count =0;  // count the maxnumber
  int current_count =0;    // count the current value
  for(int i = 0;i<n;i++){    
       if(arr[i] ==1){
        current_count++;   //if arr[i] equal to 1 then current value is increaments
        max_count = max(max_count,current_count);   //  it finds the hightest value
        //  form the maxvalue and current value

       }
       else{
        current_count =0; //if arr[i]==0 then current value is reset
    
       }
  }


     return max_count;   // returns max_values of 1's
}
int main()
{

  vector<int> arr = {0, 0, 1, 0, 0, 0}; 
  cout<< MaximumConsecutiveOnes(arr);
  
return 0;
}