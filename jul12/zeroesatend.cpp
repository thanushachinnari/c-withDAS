#include<iostream>
#include <vector>
using namespace std;
void  ZeroatEnd(vector<int>& arr){
  // int result ;
  int n = arr.size();
  int j =0;
  for(int i =0;i<n;i++){
    if(arr[i] !=0){
     swap(arr[i], arr[j]);
     j++;
    }
  }

}
int main() {
    vector<int> arr = {1, 0, 4, 0, 56, 9,90,78,0,56,89};

    ZeroatEnd(arr);


    for(int num : arr) {
        cout << num << " ";
    }

    return 0;
}
