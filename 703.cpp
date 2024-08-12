// https://leetcode.com/problems/kth-largest-element-in-a-stream/
class KthLargest {
public:
    int K;
    vector<int> vec;

    static bool cmp(int a, int b){
        return (a>b);
    }
    
    int judge(int val){
        if (vec.size() < K){
            vec.push_back(val);
            sort(vec.begin(), vec.end(), cmp);
            return vec[K-1];
        }

        if (vec[K-1] >= val) {
            return vec[K-1];
        }

        for (int i = 0; i < K; i++){
            if (vec[i] < val){
                vec.insert(vec.begin()+i, val);
                break;
            }
        }

        // cout << val << ":";
        // for (int i = 0; i < vec.size(); i++){
        //     cout << vec[i] << " ";
        // }
        // cout << "\n";

        return vec[K-1];
    }

    

    KthLargest(int k, vector<int>& nums) {
        K = k;
        vec = nums;
        sort(vec.begin(), vec.end(), cmp);
    }
    
    int add(int val) {
        return judge(val); 
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */