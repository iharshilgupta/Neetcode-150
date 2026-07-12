class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_map<int,int> a;
       for(int i:nums){
            if(a[i]>0){
                return true;
            }
            a[i]++;
       }
        return false;

    // trying to solve this with set , comparing set and array length 
    //     bool l=true;
    //     set<int> s(nums.begin(), nums.end());
    //     if(s.size()==nums.size()){
    //         l=false;
    //     }
    //     return l;
    // }
    }
};