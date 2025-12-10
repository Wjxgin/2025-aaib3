///week14-5.cpp
///作天cpe第一題
///Pizza Cutting 切Pizza
#include <iostream>
using namespace std;
int main()
{
   int N;
   while(cin >> N){
        if (N<0) break;
        int ans = 1 + (1+N)*N/2;
        cout << ans << "\n";
   }
}

