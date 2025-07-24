           //  Best Time to Buy and Sell Stock problem 121
#include<iostream>
using namespace std;
#include<vector>
#include<climits>
int Buyandsellstock(vector<int>& price){
 int min_price = INT_MAX;
 int profit = 0;
 int n = price.size();
 for(int i =0;i<n;i++){
  if(price[i]<min_price){
    min_price = price[i];
  }
  else if(price[i]-min_price>profit){
    profit = price[i]-min_price;
  }

 }

  return profit;


return 0;
}
int main(){
   vector<int> values = {7,1,5,3,6,4};
  cout<<Buyandsellstock(values);
  return 0;
}