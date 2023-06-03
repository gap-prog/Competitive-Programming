// CodeForces Problem Link: https://leetcode.com/problems/top-k-frequent-elements/description/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (auto &i: nums) mp[i]++;
        priority_queue<pair<int, int>> pq;
        for (auto &i: mp) pq.push(make_pair(i.second, i.first));
        vector<int> v;
        while (k--) {
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
