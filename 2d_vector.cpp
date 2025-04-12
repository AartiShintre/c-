#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>> mat = {{1, 2, 3}, {3, 4, 5,1,4}, {6, 7, 8}};
    //rows=>mat.size();
    //colums=>mat[i].size()
    cout << mat[2][2];
}

