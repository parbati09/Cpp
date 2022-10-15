/*
Problem - Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

For example, 121 is a palindrome while 123 is not.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

Constraints:

-231 <= x <= 231 - 1
*/

// Solution

#include <iostream>
using namespace std;
int main() {
    long long int x;
    cin >> x;
    long long int temp = x;
    long long int rev = 0;
    while (x > 0) {
        rev = rev * 10 + x % 10;
        x = x / 10;
    }
    if (rev == temp) {
        cout << "true" << endl;
        return 0;
    }
    cout << "false" << endl;
}
