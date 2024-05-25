#include <iostream>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    int nums[n+1][n+1];

    int num = 1; // 初始化填充数字
    int layer = 1; // 当前层数
    while (layer <= n) {
        // 从左到右填充上边
        for (int i = layer; i <= n - layer + 1; ++i) {
            nums[layer][i] = num++;
        }
        // 从上到下填充右边
        for (int i = layer + 1; i <= n - layer; ++i) {
            nums[i][n - layer + 1] = num++;
        }
        // 从右到左填充下边
        for (int i = n - layer; i >= layer; --i) {
            nums[n - layer + 1][i] = num++;
        }
        // 从下到上填充左边，但跳过左上角已填充的单元格
        for (int i = n - layer; i > layer; --i) {
            nums[i][layer] = num++;
        }
        layer++; // 进入下一层
    }

    // 特殊处理中心位置（当n为奇数时）
    if (n % 2 == 1) nums[n/2+1][n/2+1] = num;

    // 输出结果（根据你的样例，这里省略了直接打印nums数组的代码）
    // 通常你需要遍历并打印nums来查看结果

    return 0;
}