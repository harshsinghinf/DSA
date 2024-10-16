class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hashmap; // (num, count)
        
        // Count the frequency of each number
        for (int x : nums) {
            hashmap[x]++;
        }
        
        // Priority queue (min-heap) to store pairs of (frequency, num)
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        // Push the frequency and number into the priority queue
        for (auto& entry : hashmap) {
            pq.push({entry.second, entry.first});  // (frequency, num)
            if (pq.size() > k) {
                pq.pop();  // Keep only the top k elements in the heap
            }
        }
        
        // Extract the result from the priority queue
        vector<int> res;
        while (!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        return res;
    }
};
