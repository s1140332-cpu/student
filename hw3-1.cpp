
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int a, b;

    // Ask for user's name
    cout << "請輸入你的名字: ";
    cin >> name;  // Use cin to get the name (assuming no spaces in the name)

    // Greet the user
    cout << "你好, " << name << "!" << endl;

    // Ask for two numbers
    cout << "請輸入兩個數字, 用空白隔開: ";
    cin >> a >> b;

    // Display the numbers
    cout << "你輸入的是: " << a << " 和 " << b << endl;

    return 0;
}
