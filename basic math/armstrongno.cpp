#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int power(int base, int exp) {
        int result = 1;
        for (int i = 0; i < exp; i++) {
            result *= base;
        }
        return result;
    }

    bool isArmstrong(int n) {
        int original = n;
        int sum = 0;
        int k = to_string(n).length();
        while (n > 0) {
            int r = n % 10;
            sum += power(r, k);
            n /= 10;
        }
        return sum == original;
    }
};

int main() {
    int n;
    cout << "Enter the number to check if it is Armstrong: ";
    cin >> n;
    Solution s;
    if (s.isArmstrong(n)) {
        cout << "The number is Armstrong" << endl;
    } else {
        cout << "The number is not Armstrong" << endl;
    }
    return 0;
}
