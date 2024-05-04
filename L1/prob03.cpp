#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// 函数用于找到并打印鞍点
bool findSaddlePoint(const vector<vector<int>>& matrix) {
    bool saddlePointFound = false;
    for (int i = 0; i < 5; ++i) {
        int rowMax = matrix[i][0];
        int colIndex = 0;
        
        // 找到第i行的最大值
        for (int j = 1; j < 5; ++j) {
            if (matrix[i][j] > rowMax) {
                rowMax = matrix[i][j];
                colIndex = j;
            }
        }

        // 检查这个最大值是否是所在列的最小值
        bool isMinInColumn = true;
        for (int k = 0; k < 5; ++k) {
            if (matrix[k][colIndex] < rowMax) {
                isMinInColumn = false;
                break;
            }
        }

        // 如果找到鞍点，打印它
        if (isMinInColumn) {
            cout << "Saddle point found at (" << i << ", " << colIndex << ") with value " << rowMax << endl;
            saddlePointFound = true;
        }
    }
    
    return saddlePointFound;
}

int main() {
    vector<vector<int>> matrix(5, vector<int>(5));
    cout << "Enter the elements for a 5x5 matrix:" << endl;

    // 读取用户输入的5x5矩阵
    for (int i = 1; i < 5; ++i) {
        for (int j = 1; j < 5; ++j) {
            cin >> matrix[i][j];
        }
    }

    // 寻找并打印鞍点
    bool found = findSaddlePoint(matrix);

    if (!found) {
        cout << "not found" << endl;
    }

    return 0;
}
