class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(freq[nums[i]]==n){
                return nums[i];
            }
        }
        return 0;
    }
};