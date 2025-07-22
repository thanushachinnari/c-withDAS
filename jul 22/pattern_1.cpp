/*
  * * *
  * * *
  * * *
 */
#include<iostream>
using namespace std;
void parrten(int n ){
  for(int i =0;i<n;i++){    //outer loop is used for rows   
       for(int j =0;j<n;j++){  // inner loop is used for col   
        cout<<"*";              
       
       }
        cout<<"\n";      
  }
  // return 0;
}
int main(){
  parrten(3);
  return 0;
}