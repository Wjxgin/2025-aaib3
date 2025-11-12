///week01-4b.cpp使用C語言寫
#include <iostream>///使用C語言外掛
using namespace std;///使用C++語言的命名空間
int main()
{
    int a, b;
    cin >> a >> b;///c語言 讀資料
    int ans = 0;
    for(int i=a; i<=b; i++){
        if( i%3==0 ) ans += i;
    }
    cout << ans;///c語言 讀資料
}
