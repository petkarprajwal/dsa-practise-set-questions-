#include<iostream>
#include<vector>

//normal without jagged 

using namespace std;

int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Normal 2D vector"<<endl;
    cout << mat[1][1] << endl; // accessing element

    // 2D vector output
    
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // row and column size
    int row = mat.size();
    int columns = mat[0].size();

    cout << "Rows: " << row << " Columns: " << columns << endl;

    return 0;
}




