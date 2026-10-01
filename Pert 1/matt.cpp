#include <iostream>
using namespace std;

int main() {
    int array[3][3][4] = {
        {
            {2, 4, 6, 8},
            {10, 12, 14, 16},
            {18, 20, 22, 24}
        },
        {
            {26, 28, 30, 32},
            {34, 36, 38, 40},
            {42, 44, 46, 48}
        },
        {
            {50, 52, 54, 56},
            {58, 60, 62, 64},
            {66, 68, 70, 72}
        }
    };

    for (int i = 0; i < 3; i++) {
        cout << "Lapisan " << i + 1 << endl;

        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << array[i][j][k] << "\t";
            }
            cout << endl;
        }

        cout << endl;
    }

    return 0;
}