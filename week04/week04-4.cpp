///week04-4.cpp
///LeetCode �ǲ߭p�e
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up=0, down=0;///�p�G���W�[ up�ܦ�1 �p�G����� down�ܦ�1
        for(int i=1; i<nums.size(); i++){///�}�C����1�}�l
            if( nums[i-1] < nums[i] ) up = 1;///���p�B�k�j�A�W�[
            if( nums[i-1] > nums[i] ) down = 1;///���j�B�k�p�A�W�[
        }
        if(up==1 && down==1)return false ;///�̫��ˬd�A���i�H[�S�W�[�B�S���]
        return true;
    }
};
