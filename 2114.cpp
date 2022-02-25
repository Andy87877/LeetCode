/*
https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/submissions/
https://leetcode.com/submissions/detail/648737658/
Runtime: 12 ms, faster than 83.45% of C++ online submissions for Maximum Number of Words Found in Sentences.
Memory Usage: 10.2 MB, less than 36.42% of C++ online submissions for Maximum Number of Words Found in Sentences.
*/
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = -1;
        for (auto i: sentences) {
            int total = 1;
            for (auto j: i) {
                if (j == ' ') {
                    total++;
                }
            }
            if (max < total) {
                max = total;
            }
        }
        return max;
    }
};
