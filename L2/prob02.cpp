#include<bits/stdc++.h>
using namespace std;
// 杨辉三角
int main(){
    int nums[11][11];
    for(int i=1;i<=10;i++){
        nums[i][1] = 1;
        nums[i][i] = 1;
    }
    for(int i=2;i<=10;i++){
        for(int j=2;j<i;j++){
            nums[i][j] = nums[i-1][j-1] + nums[i-1][j];
        }
    }
    for(int i=1;i<=10;i++){
        cout<<setw(20-2*i)<<" ";
        for(int j=1;j<=i;j++){
            cout<<setw(4)<<nums[i][j];
        }
        cout << endl;
    }
    return 0;
}