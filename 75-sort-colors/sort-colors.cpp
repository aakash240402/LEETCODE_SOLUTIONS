class Solution {
public:
    void sortColors(vector<int>& a) {
        // return sort(nums.begin(),nums.end());

        int count0=0;
        int count1=0;
        int count2=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==0) count0++;
            if(a[i]==1) count1++;
            if(a[i]==2) count2++;
        }
        for(int i=0;i<count0;i++){
            a[i]=0;
        }
        for(int i=count0;i<count0+count1;i++){
            a[i]=1;
        }
        for(int i=count0+count1;i<a.size();i++){
            a[i]=2;
        }
    }
};