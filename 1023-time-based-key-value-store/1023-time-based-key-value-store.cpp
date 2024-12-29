class TimeMap {
private:
    unordered_map<string, vector<pair<int, string>>> store;

public:
    /** Initialize your data structure here. */
    TimeMap() {
        
    }
    
    /** Stores the key with a value and timestamp */
    void set(string key, string value, int timestamp) {
        store[key].push_back({timestamp, value});
    }
    
    /** Retrieves the value for a key at a given timestamp */
    string get(string key, int timestamp) {
        if (store.find(key) == store.end()) {
            return ""; // Key doesn't exist
        }

        // Binary search to find the largest timestamp <= given timestamp
        const auto& timeValuePairs = store[key];
        int low = 0, high = timeValuePairs.size() - 1;
        string result = "";

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (timeValuePairs[mid].first <= timestamp) {
                result = timeValuePairs[mid].second; // Potential result
                low = mid + 1; // Search right half
            } else {
                high = mid - 1; // Search left half
            }
        }

        return result; // Return the value found, or "" if none exists
    }
};