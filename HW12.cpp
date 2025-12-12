#include <iostream>
using namespace std;

int main() {
    int grade[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += grade[i];
    }

    double avg = sum / 5.0;

    cout << "總和 = " << sum << endl;
    cout << "平均 = " << avg << endl;

    return 0;
}
