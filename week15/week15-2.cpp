///week15-2.cpp
/// 學習計算 Math 最後一題 Medium 題
/// LeetCode 50. Pow(x, n) 计算 x 的 n 次方，可能有负的

/// 因為 n 可能非常大 2^31 也就是 10^9 很大，不適用 for 迴圈

class Solution {
public: /// 有個變數，是數字很大，會溢出，所以用 long long
    double myPow(double x, long long int n) {
        if (x == 1) return 1; /// 邊界條件，很簡單
        if (n < 0) return myPow(1 / x, -n); /// 負的，函式呼叫函式
        if (n == 0) return 1; /// 所有數的 0 次方，都是 1

        /// 思考：??? 的 ??? 次方 可以切一半喔 (很難想出來)
        double half = myPow(x, n / 2); /// 半幾次，要用 double 才能留下一些數點
        if (n % 2 == 0) return half * half;
        else return half * half * x;
    }
};
