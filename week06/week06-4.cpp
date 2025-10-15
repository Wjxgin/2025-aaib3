///week06-4.cpp
///�}�C�A�Ʀr���Ƿ|�W�[�A�аݦ��S����Ӭ۾F���}�C
class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k){
        ///�ϥΪ��C���`����combo�s��
        int N = nums.size();///�}�C�j�p
        vector<int> combo(N, 1);///��N��A�̭�����1
        for(int i=1; i<N; i++){
            if( nums[i-1] < nums[i] ) combo[i] = combo[i-1] + 1;
        }///�ܥXcombo�}�C�̥������ȡA���X��A�N��e���@��+1
        ///�n�ˬd[�۾F2�Ӫ��׬�K���}�C�Acombo�Ȱ����� k�ӳs��
        for(int i=0; i<N-k; i++){
            if( combo[i]>=k && combo[i+k]>=k )return true;
        }
        return false;
    }
};
