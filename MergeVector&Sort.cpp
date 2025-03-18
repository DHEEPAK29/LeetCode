// Example 1:

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // int res[m+n]; 
        vector<int> res(m+n);

        for (int i = 0; i< m; i++){
            res[i] = nums1[i]; 
        }
        for (int i = 0; i<n; i++){
            res[m+i] = nums2[i]; 
        }
        
        for (int i = 0; i< res.size(); i++){
            for(int j = i+1; j<res.size(); j++){
                if(res[i]>res[j]){
                    int temp = res[i]; 
                    res[i] = res[j];
                    res[j] = temp; 
                }
            }
        }
        nums1 = res; 
    }
};
