class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        std::map<int,int> num_counters;
        vector<int> results;
        for (int i = 0; i < nums.size(); i++) {
           num_counters[nums.at(i)]++;
           if (num_counters[nums.at(i)] == 2) {
             num_counters.erase(nums.at(i));
           }
         }
         results = {num_counters.begin()->first, num_counters.rbegin()->first};
         return results;
    }
};
