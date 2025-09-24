///week03-1.cpp
/// C++ 陣列 vector<int>
#include <iostream>///cin cout 要用的
#include<vector>///今天的主題 陣列vector
using namespace std;///不要忘了 [使用命名空間] std
int main()
{
    cout << "請輸入4個數字: ";
    vector<int> a;///[伸縮自如]的陣列

    int now;///現在輸入1個數字
    for(int i=0; i<4; i++){
        cin >> now;///現在輸入1個數字
        a.push_back(now);///推到a的最後面
    }
    for(int i=0; i<a.size(); i++){///依照陣列大小.size()來印
        cout << a[i] <<' ';///數字後面，有空格
    }

    cout << "現在程式碼裡，又推入了 99 98 兩個數字，結果呢?\n";

    a.push_back(99);///推到a的最後面
    a.push_back(88);///推到a的最後面


    for(int i=0; i<a.size(); i++){
        cout << a[i] <<' ';///數字後面，有空格
    }
}
