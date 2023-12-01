#include<iostream>
using namespace std;

int x = 1;
int y;
int z;

int main(){
    
    while (x != 0) {
    cout << "Enter an integer: ";
    cin >> x;
    
    if (x%2 == 0) {
        if (x != 0) {
            y++;
        }
    } else {
        z++;
    }
    }
    
    cout << "#Even numbers = " << y << "\n";
    cout << "#Odd numbers = " << z;
    return 0;
}
