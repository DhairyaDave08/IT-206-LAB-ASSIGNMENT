class Solution {
public:
    int longestConsecutive(vector<int>& a) {
    map<int, bool> mpp;
    for (int num:a) 
    {
        mpp[num] = true;
    }
    
    int maxi= 0,current=0,prevNum = INT_MIN;
    for (auto it : mpp) 
    {
        int num = it.first;
        
        if (num == prevNum + 1) 
        {
            current++;
        }
        else 
        {
            current = 1;
        }
        
        maxi=max(maxi, current);
        prevNum = num;
    }
    
    return maxi;
    }
};
