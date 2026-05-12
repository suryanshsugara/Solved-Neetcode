class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Create 3 "seen" tables. 9 buckets for each (Rows, Cols, Boxes),
        // each containing 9 slots for numbers 1-9.
        // We use '10' instead of '9' to avoid off-by-one errors with digit '9'.
        bool rows[9][10] = {false};
        bool cols[9][10] = {false};
        bool boxes[9][10] = {false};

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                // 1. Skip empty cells
                if (board[r][c] == '.') continue;

                // 2. Convert char to int
                int num = board[r][c] - '0';
                
                // 3. Find the Box ID using the standard formula
                int box_id = (r / 3) * 3 + (c / 3);

                // 4. Check for duplicates in all 3 buckets
                if (rows[r][num] || cols[c][num] || boxes[box_id][num]) {
                    return false;
                }

                // 5. Mark this number as seen in all 3 buckets
                rows[r][num] = true;
                cols[c][num] = true;
                boxes[box_id][num] = true;
            }
        }

        return true;
    }
};
