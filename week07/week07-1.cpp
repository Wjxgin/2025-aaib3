///week07-1.cpp
///Input: 1-9 ���Ʀr Output: ¶��骺���
/// ex Input: 3
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3 �`�@5�h��
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=1; i<2*n; i++){
        for(int j=1; j<2*n; j++){
                if(j>1) cout <<" ";
            cout << n;
        }
        cout << "�{�b�O��i��, i:" << i;
        cout << endl;
    }
}
