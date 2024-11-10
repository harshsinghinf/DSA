class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Initialize three 2D vectors to track counts for rows, columns, and sub-boxes
        vector<vector<int>> rows(9, vector<int>(9, 0));
        vector<vector<int>> cols(9, vector<int>(9, 0));
        vector<vector<int>> boxes(9, vector<int>(9, 0));

        for(int i = 0; i < 9; ++i){
            for(int j = 0; j < 9; ++j){
                char current = board[i][j];
                if(current == '.') continue; // Skip empty cells
                int num = current - '1'; // Convert char to index (0-8)
                if(num < 0 || num > 8) return false; // Invalid character
                // Calculate box index

                int boxIndex = (i / 3) * 3 + (j / 3); //IMPORTANT
                
                // Check for duplicates in row, column, and box
                if(rows[i][num] || cols[j][num] || boxes[boxIndex][num]){
                    return false;
                }
                // Mark the number as seen in the respective row, column, and box
                rows[i][num] = cols[j][num] = boxes[boxIndex][num] = 1;
            }
        }
        return true;
    }
};
