#include <iostream>
#include <cstdlib>   // rand(), srand()
#include <ctime>     // time()

using namespace std;

int main() {
    srand(time(0));            // 讓亂數每次都不同
    int answer = rand() % 10 + 1;   // 產生 1~10 的隨機數
    int guess = 0;

    cout << "猜一個 1 到 10 的數字：" << endl;

    while (guess != answer) {
        cout << "請輸入你的猜測：";
        cin >> guess;

        if (guess > answer) {
            cout << "太大了！再試一次！" << endl;
        }
        else if (guess < answer) {
            cout << "太小了！再試一次！" << endl;
        }
        else {
            cout << "答對了！答案就是 " << answer << "！" << endl;
        }
    }

    return 0;
}
