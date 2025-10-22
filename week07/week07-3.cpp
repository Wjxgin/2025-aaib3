/// week07-3.cpp Leetcode 厩策肈ヘ Simulation 材1肈
/// 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; /// 挡狦计
        for (string op : operations) {
            cout << "瞷弄: " << op << "\n"; /// Part02: 竒弄ぐ或单ゴㄓ
            if (op == "C") { ///Part03: 狦琌 C睲埃程
                a.pop_back(); /// 奔程
            }
            else if (op == "D") { /// Part06: 狦琌 D"だ计"
                a.push_back(a.back() * 2); // 硂妓 Part06 柑
            }
            else if (op == "+") { /// Part07: "+" 程ㄢだ计
                int temp = a[a.size() - 1]; /// 程だ计
                int temp2 = a[a.size() - 2]; /// 玡ㄢ计
                a.push_back(temp + temp2); /// р硂ㄢだ计
            }
            else { ///Part04: 计矪瞶钡
                a.push_back(stoi(op)); /// 锣传﹃计
            }
        }

        int ans = 0;
        for (int now : a) { /// Part05: C++ 秈伴盢┮Τ秈ㄓ
            ans += now; ///cout << now << endl;
        }
        return ans; /// return 挡狦
    }
};
