class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> exp;
        bool exit = false; 
        int j = 1, a=0;
        for(int i=0; i<nums.size(); i++){
            cout<<nums.size()<<" "<< nums[j]<<" "<<nums[j-1]<<endl;
            if(nums[j]!=nums[j-1] || nums[j+1]!=nums[j-1]){ 
                if(i==nums.size()-1){
                    exp.push_back(nums[i]);
                    cout<<"dshjhve"<<endl; 
                    exit = true; 
                }
                else
                {exp.push_back(nums[i]);
                cout<<exp[a] <<" "<<nums[i]<<" "<<nums.size()<<endl;
                a++;}
                
            }
            if(exit == true) {
                cout<<"sdfv"<<endl; 
                break; }
            else
            {
                j++;
            }
        }
        
        nums = exp;
        for (auto s:nums){
            cout<<s<<endl;
        }
        cout << j <<endl; 
        return j-1; 
    }
};
