class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<char, int>> rows(9);
        vector<unordered_map<char, int>> cols(9);
        vector<unordered_map<char, int>> boxes(9);
        for (int i=0;i<9;++i) 
        {
            for (int j=0;j<9;++j) 
            {
                char ch=board[i][j];
                if (ch== '.') 
                {
                    continue;
                }
                if (rows[i].find(ch)!=rows[i].end()) 
                {
                    return false;
                }
                rows[i][ch] = 1;
                if(cols[j].find(ch)!=cols[j].end()) 
                {
                    return false;
                }
                cols[j][ch]=1;
                int bI = (i / 3) * 3 + j / 3;
                if (boxes[bI].find(ch)!=boxes[bI].end()) 
                {
                    return false;
                }
                boxes[bI][ch] = 1;
            }
        }
        return true;
    }
};
