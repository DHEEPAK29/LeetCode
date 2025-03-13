#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std; 

class Solution {
public:
    // int threeSumMulti(vector<int>& arr, int target) {
        // for (int i =0;i<arr.size();i++){
        //     cout<<arr[i]<<endl; 
        //     cout<<"df"<< arr.size(); 
        //     cout<<target<<endl; 
        // }
    //     int count=0, sum=0, res=0; 
    //     for (int i =0; i<arr.size(); i++){ //{1,1,2,2,3,3,4,4,5,5}
    //         sum=arr[i];
    //         for(int j =i+1; j<arr.size(); j++){
    //             if(sum<target && arr[i]!=arr[j]&& arr[j]!=res){ 
    //                 res=arr[j]; 
    //                 sum+=arr[j];
    //                 cout<<"i "<< i <<" j "<< j <<endl;
    //             }
                
    //         }
    //         if(sum ==  target){
               
    //             count++; 
    //         }
    //         ;  
    //         sum=0; 
    //         res=0; 
    //     }
    //     return count;
    // }
    
    int threeSumMulti(vector<int>& arr, int target) {
        int n = arr.size();
        int start, end, ans = 0, mod = 1e9+7;
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<n-2; i++){
            int temp = target - arr[i];
            start = i+1; 
            end = n-1;
            
            while(start < end){
                if(arr[start] + arr[end] == temp){
                    long long sc = 1, ec = 1;
                    while(start < end && arr[start] == arr[start+1]){
                        start++;
                        sc++;
                    }
                    while(start < end && arr[end] == arr[end-1]){
                        end--;
                        ec++;
                    }
                    if(start == end){
                        long long temp = (sc*(sc-1))/2; //nC2
                        ans = (ans + temp) % mod;
                    }
                    else{
                        ans = ans + (sc*ec) % mod;
                    }
                    start++;
                    end--;
                } 
                else if(arr[start] + arr[end] > temp) end--;
                else if(arr[start] + arr[end] < temp) start++;
            }
        }
        
        return ans;
    
    }

}s;

int main(){ 
    Solution ss = s; 

    vector<int> arr = {1,1,2,2,3,3,4,4,5,5}; 

    cout<<s.threeSumMulti(arr, 8)<<endl;

    return 0;
}