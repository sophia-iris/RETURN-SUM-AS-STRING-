#include <iostream>
using namespace std;

int main() {
    string num1 = "987654321987654321";
    string num2 = "123456789123456789";
    string result = "";

    int carry = 0;
    int a = num1.length() - 1;
    int b = num2.length() - 1;

    while (a >= 0 || b >= 0 || carry > 0) {
        int digit1 = (a >= 0) ? num1[a] - '0' : 0;
        int digit2 = (b >= 0) ? num2[b] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result = char((sum % 10) + '0') + result;

        a--;
        b--;
    }

    cout << "Sum: " << result << endl;
    return 0;
}
