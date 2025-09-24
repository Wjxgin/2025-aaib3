///week03-3a.cpp
///leetcode 學習計畫
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;///1乘上任何數，就突然變成[任何數]
        ///不能寫 int ans=0; 因為0乘上任何數，會變成0
        for(int i=0; i<nums.size(); i++){
            ans *= nums[i];///把陣列[乘進去]
        }///數字乘越大，就爆炸了!!!
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;

    }
};
