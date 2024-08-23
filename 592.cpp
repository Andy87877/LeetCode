// https://leetcode.com/problems/fraction-addition-and-subtraction/description/
class Solution {
public:
    string fractionAddition(string expression) {
        bool UP = true; // 是否是分子
        vector<long long> up, down; //分子分母
        vector<char> Add_or_Sub; // + or -

        if (expression[0] == '-') {
            Add_or_Sub.push_back('-');
        } else {
            Add_or_Sub.push_back('+');
        }

        for (long long i = 0; i < expression.size(); i++){
            if (i == 0 && expression[0] == '-') continue;
            char now = expression[i];

            if (now == '+' || now == '-'){
                if (now == '+'){
                    Add_or_Sub.push_back('+');
                } else {
                    Add_or_Sub.push_back('-');
                }
                UP = !UP;
            } else if (now == '/'){
                UP = !UP; // true -> false false -> true
            } else {
                // number
                long long number;
                
                
                if (now == '1'){ // 1 or 10
                    if (i == expression.size()-1){
                        number = 1;
                    } else {
                        if (expression[i+1] == '0'){
                            number = 10;
                            i++;
                        } else {
                            number = 1;
                        }
                    }
                } else { // 2~9
                    number = int(now)-int('0');
                }

                if (UP){
                    up.push_back(number);
                } else {
                    down.push_back(number);
                }
            }
        }

        // cout
        // for (long long i = 0; i < up.size(); i++){
        //     cout << Add_or_Sub[i] << " " << up[i] << " " << down[i] << "\n";
        // }

        // 通分(分母為10*9*8*.....*1 = 3628800)
        for (long long i = 0; i < up.size(); i++){
            long long num = 3628800/down[i]; //要乘以的數字
            up[i] *= num;
            // down[i] *= num; // 不用 也沒差
        }

        // 計算(分母已經為3628800)
        long long numerator = 0, denominator = 3628800; // 分子, 分母
        for (long long i = 0; i < up.size(); i++){
            if (Add_or_Sub[i] == '+'){
                numerator += up[i];
            } else {
                numerator -= up[i];
            }
        }

        // 最簡分數
        bool Positive = true;
        if (numerator == 0) return "0/1";
        if (numerator < 0) {
            Positive = false;
            numerator *= -1;
        } 

        // cout << numerator << " " << denominator << "\n";

        //numerator,denominator = 3628800; // 分子, 分母
        for (long long i = 2; i <= 8; i++){
            while (numerator % i == 0 && denominator % i == 0){
                numerator /= i;
                denominator /= i;
            }
        }
        cout << numerator << " " << denominator << "\n";

        string ans;
        if (!Positive) ans += "-";
        ans += to_string(numerator);
        ans += "/";
        ans += to_string(denominator);

        return ans;
    }
};

/*
The number of given fractions will be in the range [1, 10]. !!!!!!!!!!!
分子:numerator 分母:denominator
*/
