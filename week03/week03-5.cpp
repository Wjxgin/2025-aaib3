///week03-5.cpp
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());///��}�C �p��j �Ʀn

        int d = arr[1] - arr[0];//��Ʈt
        for(int i=1; i<arr.size(); i++){///�j��q1�}�l�A�]�n����@��
            if(arr[i] - arr[i-1] != d) return false;
        }///�p�G�ᶵ-�e�� ���Od���ܡA�N����
        return true;
    }
};
