class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> res(n, 0); // Initialize result array with size n and all 0s
        unordered_set<int> seenA, seenB; // Track elements in prefixes of A and B

        int commonCount = 0;
        for (int i = 0; i < n; ++i) {
            seenA.insert(A[i]); // Add current element of A to the set
            seenB.insert(B[i]); // Add current element of B to the set
            
            // Check if A[i] is already in B's set or B[i] is already in A's set
            if (seenB.count(A[i])) ++commonCount;
            if (seenA.count(B[i])) ++commonCount;

            // If A[i] == B[i], it was counted twice, so subtract 1
            if (A[i] == B[i]) --commonCount;

            res[i] = commonCount; // Store the count in result
        }

        return res;
    }
};
