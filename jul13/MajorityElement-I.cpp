// Online C++ compiler to run C++ program online
// Majority Element-I
#include <iostream>
#include <vector>
using namespace std;

int MajorityElement(vector<int>& arr){
    int n = arr.size();
    int count=0;
    int candidates = 0;
    int i =0;
    for(int j=1;j<n;j++){
        if(count==0){
            candidates = arr[0];
        }
        else if(arr[i]==candidates){count++;
            
        }
        
        else{
            count--;
            
        } 
  
}
  
    return candidates;
}

int main(){
    vector<int> nums = { 1, 1, 1, 2, 1, 2};
    int result = MajorityElement(nums);
    cout<<result;
    
    return 0;
}

