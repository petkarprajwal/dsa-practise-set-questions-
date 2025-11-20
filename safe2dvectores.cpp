#include<iostream>
#include<vector>

//jagged array
using namespace std;

int main() {
    // Jagged 2D vector (rows have different sizes)
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6, 10, 11},
        {7, 8, 9}
    };

    // Accessing a specific element
    cout<<"Jagged vectors"<<endl;
    cout << mat[1][1] << endl;  // Output: 5

    // Safe 2D vector output
    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // Row and column size (columns vary, so show per row)
    int rows = mat.size();
    cout << "Total Rows: " << rows << endl;

    for(int i = 0; i < rows; i++) {
        cout << "Row " << i << " has " << mat[i].size() << " columns." << endl;
    }

    return 0;
}
