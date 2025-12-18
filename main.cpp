#include <iostream>
using namespace std;

int main() {

    string name[5] = {"Amy", "Ben", "Cindy", "David", "Eva"};

    int score[5][3] = {
        {80, 90, 85},
        {70, 75, 78},
        {88, 92, 95},
        {60, 65, 70},
        {90, 93, 89}
    };

    cout << "姓名\t國文\t英文\t數學\t總分\t平均\n";

    for (int i = 0; i < 5; i++) {
        int sum = 0;

        cout << name[i] << "\t";

        for (int j = 0; j < 3; j++) {
            cout << score[i][j] << "\t";
            sum += score[i][j];
        }

        double avg = sum / 3.0;
        cout << sum << "\t" << avg << endl;
    }

    return 0;
}
