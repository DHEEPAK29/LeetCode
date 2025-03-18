class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c = 0; 
        vector<int> r;

        for(int i=0; i< nums.size(); i++){
            if(nums[i]!=val){
                r.push_back(nums[i]);
                c++;
            }
        }
        nums = r; 
        return c;
    }
};
