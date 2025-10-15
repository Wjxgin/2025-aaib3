///week06-1.cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
      ///先看字串的長度是否相同，不同就失敗
        if(s.length() != t.length() ) return false;///不可，就直接失敗

        ///先把字串s的字母，累積一下
        int R[26] = {};///要有一個Recycle回收桶，來紛項我們的字母
        for(int i=0; i<s.length(); i++){
            char c = s[i] - 'a';///本來是一小寫字母，但要變成0-25所以要減'a'
            R[c]++;
        }
        ///再把累積的字母，看t用到哪些，劃掉，剛好用完(不能用超過)
        for(int i=0; i<t.length(); i++){
             char c = t[i] - 'a';
             R[c]--;///用掉他
             if(R[c]<0) return false;///不夠用，就失敗
        }
        return true;///都沒有就失敗
    }
};
