class Solution {
public:
    vector<int> twoSum(vector<int>& a, int x) 
    {
        unordered_map<int,int>mpp;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            int comp=x-a[i];
            if(mpp.find(comp)!=mpp.end())
            {
                 return {mpp[comp], i};
            }
            mpp[a[i]]=i;
        }  
        return {-1,-1};
    }
};
