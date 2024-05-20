// https://leetcode.com/problems/remove-letter-to-equalize-frequency/
class Solution {
public:
    bool equalFrequency(string word) {
        map<char, int> ma;
        for (auto i: word){
            ma[i]++;
        }

        vector<int> vec;
        for (auto i: ma){
            vec.push_back(i.second);
        }
        if (vec.size() == 1) return true;

        sort(vec.begin(), vec.end());
        for (auto i: vec){
            cout << i << " ";
        }

        if (vec.size() == 2) {
            if (vec[0] == 1) return true;
            if (vec[0]+1 == vec[1]) return true;
            return false;
        }

        if (vec[0] < vec[1]){
            if (vec[0] == 1){
                for (int i = 1; i < vec.size(); i++){
                    if (vec[i] != vec[1]) return false;
                }
                return true;
            }
            return false;

        } else if (vec[vec.size()-2] < vec[vec.size()-1]){
            if (vec[vec.size()-2]+1 != vec[vec.size()-1]) return false;
            for (int i = 0; i < vec.size()-1; i++){
                if (vec[0] != vec[i]) return false;
            }

        } else {
            int tmp = 0;
            for (int i = 0; i < vec.size(); i++){
                if (vec[i] != 1) {
                    tmp++;
                }
            }
            return (tmp <= 1);
        }

        return true;
    }
};