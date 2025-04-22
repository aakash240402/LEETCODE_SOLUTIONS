class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // map<int,int> mp;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }
        // for(auto it: mp){
        //     if(it.second > (nums.size()/2)){
        //         return it.first;
        //     }
        // }
        // return -1;

        int cnt=0;
        int ele;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt=1;
                ele=nums[i];
            }
            else if(nums[i]==ele){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele){
                cnt1++;
            }
            if(cnt1> (nums.size()/2)){
                return ele;
            }
        }
        return -1;
    }
};