///week04-05.cpp
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();///�����D�}�C�����סA�H�K[�˹L�Ӫ��j��]
        for(int i=N-1; i>=0; i--){
            if( digits[i] == 9)digits[i] = 0;//
            else{
                digits[i]++;///�N+1�A�����i��
                return digits;///��쵪�פF�A�e�X�h
            }
        }
    ///���S��쵪��,�]�N�O9.9.9�@�ȶi���A�G�F�A�٭n�b�̫e��1
    digits.insert(digits.begin(), 1);///�}�l���a��A���J1
    return digits;
    }
};
