///week02-2a.cpp c++
///�n�Ϊ��r��C++ �ϹL��
#include <iostream>///Io��y�~��
#include <string>///�r��~��
using namespace std;///�ϥΩR�W�Ŷ�std
int main()
{
    cout << " �п�J�Ʀr: ";
    string a, ans; ///C++���r��
    cin >> a;///Ū�J�r��
    ///�˹L�Ӫ��j�� �r�ꪺ���ץs a.length()
    for(int i=a.length()-1; i>=0; i--){
        ans += a[i];///��r���˹L�ӡA��J����
    }///
    cout << a << ans;
}
