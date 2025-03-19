class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1;
        for(int j=1; j<nums.size(); j++){
            if(nums[j]!=nums[j-1]){
                cout<<nums[i]<<" "<<nums[j]<<endl;
                nums[i]=nums[j];//r.push_back(nums[j]);
                i++;
            }
        }
        cout<<i<<endl;
        return i; 
    }
};
