///week06-1.cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
      ///���ݦr�ꪺ���׬O�_�ۦP�A���P�N����
        if(s.length() != t.length() ) return false;///���i�A�N��������

        ///����r��s���r���A�ֿn�@�U
        int R[26] = {};///�n���@��Recycle�^����A�ӯɶ��ڭ̪��r��
        for(int i=0; i<s.length(); i++){
            char c = s[i] - 'a';///���ӬO�@�p�g�r���A���n�ܦ�0-25�ҥH�n��'a'
            R[c]++;
        }
        ///�A��ֿn���r���A��t�Ψ���ǡA�����A��n�Χ�(����ζW�L)
        for(int i=0; i<t.length(); i++){
             char c = t[i] - 'a';
             R[c]--;///�α��L
             if(R[c]<0) return false;///�����ΡA�N����
        }
        return true;///���S���N����
    }
};
