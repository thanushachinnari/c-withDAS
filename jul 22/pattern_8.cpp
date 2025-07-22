/*
*****  
 ***
  * 
*/
#include<iostream>
using namespace std;
void patterns(int n){
  
      for(int i =0;i<=n;i++){
        // space
        for(int j =0;j<=i;j++){
            cout<<" ";
        }
        // stars
         for(int j =n;j<=2*(n-i)-1;j++){
          cout<<"*";
        }
        // space
         for(int j =0;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
      }

}
int main(){
  patterns(5);
  return 0;
}
