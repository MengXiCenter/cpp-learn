#include<bits/stdc++.h>
using namespace std;
// 埃氏筛法
int main(){
    int a[101];
    for(int i=1;i<=100;i++){
        a[i]=1;
    }
    for(int i=2;i<=sqrt(100);i++){
        if(a[i]){
            for(int j=2;j<=100/i;j++){
                a[i*j]=0;
            }
        }
    }
    for(int i=2;i<=100;i++){
        if(a[i]){
            cout<<i<<" ";
        }
    }
}