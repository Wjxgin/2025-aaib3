/// week07-3.cpp Leetcode �ǲ��D�� Simulation ��1�D
/// 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; /// �s�񵲪G���Ʀr
        for (string op : operations) {
            cout << "�{�bŪ��F: " << op << "\n"; /// Part02: �ݤw�gŪ�줰��A���@�U���L�X��
            if (op == "C") { ///Part03: �p�G�O C�A�M���̫�@��
                a.pop_back(); /// �h���̫�@��
            }
            else if (op == "D") { /// Part06: �p�G�O D�A"�[������"
                a.push_back(a.back() * 2); // �o�˦b Part06 ��
            }
            else if (op == "+") { /// Part07: "+" �ݳ̫��Ӥ���
                int temp = a[a.size() - 1]; /// ���s���̫�@�Ӥ���
                int temp2 = a[a.size() - 2]; /// �i�H���e����ӼƦr��
                a.push_back(temp + temp2); /// ��o��Ӥ��Ƭۥ[��[�J
            }
            else { ///Part04: �Ʀr���B�z�A�����[�J
                a.push_back(stoi(op)); /// �ഫ�r���[�J�Ʀr
            }
        }

        int ans = 0;
        for (int now : a) { /// Part05: C++ �i�^��A�N�Ҧ����ȡA�[�i��
            ans += now; ///cout << now << endl;
        }
        return ans; /// return ���G
    }
};
