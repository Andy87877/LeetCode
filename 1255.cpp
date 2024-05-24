// https://leetcode.com/problems/maximum-score-words-formed-by-letters/description/
class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        // pre-judge (map...)
        map<char, int> ma;
        for (char i: letters){
            ma[i]++;
        }


        // order and judge
        int ans = 0;

        vector<vector<string>> order;
        vector<string> tmp;
        order.push_back({});

        for (int i = 0; i < words.size(); i++){
            int m = order.size();
            for (int j = 0; j < m; j++){
                tmp = order[j];
                tmp.push_back(words[i]);

                // judge
                bool flag = true;
                map<char, int> now_char = ma;
                int tmp_num = 0;
                for (string str: tmp){
                    for (int a = 0; a < str.size(); a++){
                        now_char[str[a]]--;
                        tmp_num += score[int(str[a])-97];
                        if (now_char[str[a]] < 0){
                            flag = false;
                            break;
                        }
                    }
                }

                if (flag){
                    ans = max(tmp_num, ans);
                    order.push_back(tmp);
                }
            }
        }

        return ans;
    }
};
//cout << int('a'); // 97

/*
// order
vector<vector<int>> order;
vector<int> tmp;
order.push_back({});

for (int i = 0; i < words; i++){
    int m = order.size();
    for (int j = 0; j < m; j++){
        tmp = order[j];
        tmp.push_back(words[i]);

        order.push_back(tmp);
    }
}
*/