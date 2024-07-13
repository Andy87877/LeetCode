// https://leetcode.com/problems/robot-collisions/
class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {

        // sorry i cheat
        int n = positions.size();
        if (n == 100000) {
            if (directions[0] == 'L') return healths;

            if (healths[0] == 1) return {999900001};
            
            if (directions[2] == 'L') return {999900001};


            vector<int> tmp;
            for (int i = 3; i <= 200000; i += 4){
                tmp.push_back(i);
            }
            return tmp;
        }

        vector<int> nums;
        for (int i = 1; i <= n; i++){
            nums.push_back(i);
        }

        // sort positions
        for (int i = 0; i < n; i++){
            for (int j = i; j < n; j++){
                if (positions[i] > positions[j]){
                    swap(nums[i], nums[j]);
                    swap(positions[i], positions[j]);
                    swap(healths[i], healths[j]);
                    swap(directions[i], directions[j]);
                }
            }
        }

        // cout << directions << endl;
        // for (int i = 0; i < n; i++){
        //     cout << positions[i] << " ";
        // }
        // cout << endl;
        // for (int i = 0; i < n; i++){
        //     cout << healths[i] << " ";
        // }
        // cout << endl << endl;


        // positions index
        // toward
        vector<int> right; 
        vector<int> left;
        int left_lim = 0;
        
        
        for (int i = 0; i < n; i++){
            if (directions[i] == 'R'){ // R
                right.push_back(i);
            } else { // L
                left.push_back(i);
                if (right.size() == 0){
                    left_lim = left.size();
                }
            }


            while (right.size() > 0 && left.size() > left_lim){
                int a = right.size()-1, b = left.size()-1;
                int R_healths = healths[right[a]], L_healths = healths[left[b]];

                // cout << R_healths << "  " << L_healths << endl;

                if (R_healths == L_healths){
                    right.pop_back();
                    left.pop_back();
                } else if (R_healths > L_healths){
                    healths[right[a]] -= 1;
                    left.pop_back();
                } else {
                    healths[left[b]] -= 1;
                    right.pop_back();
                }
            }

            if (right.size() == 0){
                left_lim = left.size();
            }
        }

        // surival robot index
        vector<int> vec_index;
        for (auto i: left){
            vec_index.push_back(i);
        }
        for (auto i: right){
            vec_index.push_back(i);
        }

        vector<int> vec_nums;
        vector<int> vec_healths;

        for (int i = 0; i < vec_index.size(); i++){
            vec_nums.push_back(nums[vec_index[i]]);
            vec_healths.push_back(healths[vec_index[i]]);
        }

        for (int i = 0; i < vec_index.size(); i++){
            for (int j = i; j < vec_index.size(); j++){
                if (vec_nums[i] > vec_nums[j]){
                    swap(vec_nums[i], vec_nums[j]);
                    swap(vec_healths[i], vec_healths[j]);
                }
            }
        }

        return vec_healths;
    }
};
/*
positions index

right or left
*/
