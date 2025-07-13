#include <iostream>
using namespace std;

int main() {
    int n =7;
    
    // cin >> n;

    int first = 0, second = 1;


    for(int i = 0; i < n; i++) {
        cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }

    // cout << "Fibonacci Series: ";
    return 0;
}
