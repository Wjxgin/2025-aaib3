///week01-1.cpp
///LeetCode�ǲ߭p�e �j�����w �bhaystack���needle
///28. Find the lndex of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        ///�ĥΰj��A��Ҧ��i�઺��m�A����L�@��
        ///ex. sadbutsad �����L�A�n��sad
        ///i:0 sad ��haystack�ūe��N�Ӧr��
        ///     sad
        ///i:1  sad
        ///     abd
        ///i:2  sad ...
        ///     dbu
        int H = haystack.length(),N = needle.length();
        for(int i=0;i<=H-N;i++){///i�չL�Ҧ���m
            if(haystack.substr(i,N) == needle)return i;
            ///�qi�}�l�A�ťXN�Ӧr��[���M�ۦP] ��쵪��!
        }
        return -1;///�S����쵪�סA�n�^��-1�N����
    }
};
