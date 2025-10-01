///week04-2.cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(3); ///初始的長度3，裡面都放0
    vector<int> b(3,88);///初始的長度3，裡面都放88

    int c[10] = {1, 2, 3, 9, 8, 7, 4, 5, 6, 0};///c語言的陣列宣告、初始值

    vector<int> d(c, c+3);///從哪裡開始、到哪裡結束 陣列C開始，再移3格節結束
    for(int i=0; i<d.size(); i++) cout<<d[i]<<" ";
    cout<< "這是用c語言的陣列輔助、幫忙c++陣列的初始化一堆值\n\n";

    vector<int> e(c, c+10);///從哪裡開始、到哪裡結束 陣列C開始，再移10格節結束
    for(int i=0; i<e.size(); i++)cout << e[i] << " ";
    cout<< "這是用c語言的陣列輔助、幫忙c++陣列的初始化一堆值\n\n";

}
