#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
int main(){
    char c[201],a,b;
    gets(c);
    cin>>a>>b;
    for(int i=0;c[i]!='\0';i++){
        if(c[i] == a){
            cout<<b;
        }else{
            cout<<c[i];
        }
    }
}