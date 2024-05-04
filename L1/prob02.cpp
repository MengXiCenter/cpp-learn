#include<bits/stdc++.h>
using namespace std;

auto main() -> int {
    int list[101][101] = {};
    int a = 0, b = 0;
    cin >> a >> b; // 输入矩阵的行数和列数

    // 读入矩阵元素
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            cin >> list[i][j];
        }
    }

    int sum = 0; // 用于存储边缘元素之和

    // 计算第一行和最后一行的元素之和
    for (int j = 1; j <= b; j++) {
        sum += list[1][j]; // 第一行的元素
        if (a > 1) { // 如果矩阵不止一行，则加上最后一行的元素
            sum += list[a][j];
        }
    }

    // 计算第一列和最后一列的元素之和（除了已经计算过的角元素）
    for (int i = 2; i < a; i++) { // 从第二行开始，到倒数第二行结束
        sum += list[i][1]; // 第一列的元素
        if (b > 1) { // 如果矩阵不止一列，则加上最后一列的元素
            sum += list[i][b];
        }
    }

    // 输出边缘元素之和
    cout << sum << endl;

    return 0;
}
