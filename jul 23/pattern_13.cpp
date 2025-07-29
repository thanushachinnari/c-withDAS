#include<iostream>
using namespace std;

void pattern(int n){
    // Top Part
    for(int i = n/2; i <= n; i += 2){
        // Left spaces
        for(int j = 1; j < n - i; j += 2){
            cout << " ";
        }
        // Left stars
        for(int j = 1; j <= i; j++){
            cout << "h";
        }
        // Middle spaces
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        // Right stars
        for(int j = 1; j <= i; j++){
            cout << "h";
        }
        cout << "\n";
    }

    // Bottom Part (inverted triangle)
    for(int i = n; i >= 1; i--){
        // Leading spaces
        for(int j = i; j < n; j++){
            cout << " ";
        }
        // Stars
        for(int j = 1; j <= (i * 2) - 1; j++){
            cout << "h";
        }
        cout << "\n";
    }
}

int main(){
    pattern(8);
    return 0;
}
