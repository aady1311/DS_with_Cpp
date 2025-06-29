#include <iostream>
using namespace std;

int main() {
    // 🔹 1D Array (One-Dimensional)
    // Ek simple list jaise: [10, 20, 30, 40, 50]
    int oneD[5] = {10, 20, 30, 40, 50};

    // 🔹 2D Array (Two-Dimensional)
    // Matrix jaisa hota hai: 3 rows x 2 columns
    // [
    //   [1, 2],
    //   [3, 4],
    //   [5, 6]
    // ]
    int twoD[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

      /*
    Structure:
    Block 0:
        Row 0 → [1, 2, 3]
        Row 1 → [4, 5, 6]

    Block 1:
        Row 0 → [7, 8, 9]
        Row 1 → [10, 11, 12]
    */

    // 🔸 Print 3D Array with clear block, row, and column labels

  int multiD[2][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };

    // ✅ Display 1D Array
    cout << "1D Array: ";
    for (int i = 0; i < 5; i++) {
        cout << oneD[i] << " ";
    }
    cout << endl;

    // ✅ Display 2D Array
    cout << "2D Array:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << twoD[i][j] << " ";
        }
        cout << endl;
    }

    cout << "3D Array Output:\n";

    for (int block = 0; block < 2; block++) {
        cout << "\n🔷 Block " << block << ":\n";
        for (int row = 0; row < 2; row++) {
            cout << "  Row " << row << ": ";
            for (int col = 0; col < 3; col++) {
                cout << multiD[block][row][col] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
