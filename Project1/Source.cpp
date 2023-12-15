#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> matrix[i][j];
        }
    }

    cout << "Entered matrix:\n";
    for (const auto& row : matrix) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    int zeroCount = count_if(matrix.begin(), matrix.end(),
        [](const vector<int>& row) {
            return count(row.begin(), row.end(), 0) > 0;
        });

    cout << "Number of zero elements: " << zeroCount << endl;

    return 0;
}
