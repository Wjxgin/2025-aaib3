///week04-05.cpp
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();///先知道陣列的長度，以便[倒過來的迴圈]
        for(int i=N-1; i>=0; i--){
            if( digits[i] == 9)digits[i] = 0;//
            else{
                digits[i]++;///就+1，陪有進位
                return digits;///找到答案了，送出去
            }
        }
    ///都沒找到答案,也就是9.9.9一值進為，慘了，還要在最前面1
    digits.insert(digits.begin(), 1);///開始的地方，插入1
    return digits;
    }
};
