#include <iostream>
using namespace std;

int main() {
    // 外層迴圈，遍歷 1 到 9
    for (int i = 1; i <= 9; i++) {
        // 內層迴圈，遍歷 1 到 9
        for (int j = 1; j <= 9; j++) {
            // 輸出每個乘法表的一項
            cout << i << " x " << j << " = " << i * j << "\t";
        }
        // 換行，開始新的一行
        cout << endl;
    }
    return 0;
}
