#include<iostream>
using namespace std;

 bool check_palindrome(int num){
    int x = num;
    int p = 0;
    while (num > 0) {
        p = p * 10 + num % 10;
        num = num / 10;
    }
    if (p == x) {
        cout<<"true, "<<x<<" is a palindrome.";
        return true;
    }
    else
        cout<<"false, "<<x<<" is not a palindrome.";
    return false;
}

int main() {
    int num;
    cin >> num;
    check_palindrome(num);
}