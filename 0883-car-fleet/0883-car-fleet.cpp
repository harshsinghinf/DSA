class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> cars;
        
        // Combine position and speed into pairs for sorting
        for (int i = 0; i < n; i++) {
            cars.emplace_back(position[i], speed[i]);
        }
        
        // Sort cars by position in descending order
        sort(cars.rbegin(), cars.rend());
        
        stack<double> stk; // Stack to store time taken to reach the target
        
        for (auto& car : cars) {
            double time = static_cast<double>(target - car.first) / car.second;
            // If the current car takes more time than the fleet ahead, it forms a new fleet
            if (stk.empty() || time > stk.top()) {
                stk.push(time);
            }
        }
        
        return stk.size(); // Number of fleets is the size of the stack
    }
};
