//week10-2b.cpp
class Solution {
public:
    int countOdds(int low, int high) {
        int ans =(high-low) / 2;//人約有一半,是奇數
        if(low%2==1 || high%2==1) ans++;//有多1個奇數++
        return ans;
    }
};
