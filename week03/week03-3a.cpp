///week03-3a.cpp
///leetcode �W��Ӌ��
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;///1�����κΔ�����ͻȻ׃��[�κΔ�]
        ///���܌� int ans=0; ���0�����κΔ�����׃��0
        for(int i=0; i<nums.size(); i++){
            ans *= nums[i];///�����[���Mȥ]
        }///���ֳ�Խ�󣬾ͱ�ը��!!!
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;

    }
};
