class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k) {
        unordered_map<int, int> mpp;
        map<int, vector<int>, greater<int>> freqMap;

        for (int num : a) {
            mpp[num]++;
        }

        for (auto& it : mpp) {
            freqMap[it.second].push_back(it.first);
        }

        vector<int> arr;
        for (auto& it : freqMap) {
            for (int num : it.second) {
                arr.push_back(num);
                if (arr.size() == k) return arr;
            }
        }

        return arr;
    }
};
