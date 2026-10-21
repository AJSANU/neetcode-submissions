class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> data;
        for (int i=0; i<nums.size(); i++){
            data[nums[i]]++;
        }
        vector<pair<int, int>> sortedData(data.begin(), data.end());
        sort(sortedData.begin(), sortedData.end(), [](auto& a, auto& b) { return a.second > b.second; });
        vector<int> output;
        for(int i = 0; i < k; i++){
            output.push_back(sortedData[i].first);
        }
        return output;
    }
};
