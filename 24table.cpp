#include <iostream>
using namespace std;

int main() {
    int nums[3] = {24, 50, 29};

    for (int i = 0; i < 3; i++) {
        cout << "\n--- Multiplication Table of " << nums[i] << " ---\n";
        for (int j = 1; j <= 10; j++) {
            cout << nums[i] << " x " << j << " = " << nums[i] * j << "\n";
        }
    }
}