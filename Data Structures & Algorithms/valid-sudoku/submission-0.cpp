class Solution {
private:
    bool check_horizontal(vector<vector<char>> &board, int row){
        vector<int> freq(9,0);
        for(int i = 0;i<9;i++){
            char ele = board[row][i];
            if(ele != '.'){
                int num = ele - '0';
                freq[num-1]++;
            }
        }
        for(int i=0;i<9;i++){
            if(freq[i]>1) return false;
        }
        return true;
    }

    bool check_vertical(vector<vector<char>> &board, int col){
        vector<int> freq(9,0);
        for(int i = 0;i<9;i++){
            char ele = board[i][col];
            if(ele != '.'){
                int num = ele - '0';
                freq[num-1]++;
            }
        }
        for(int i=0;i<9;i++){
            if(freq[i]>1) return false;
        }
        return true;
    }

    bool check_box(vector<vector<char>> &board, int row,int col){
        vector<int> freq(9,0);
        row = (row/3)*3;
        col = (col/3)*3;
        for(int i = row;i<row+3;i++){
            for(int j = col;j<col+3;j++){
                    char ele = board[i][j];
                    if(ele != '.'){
                        int num = ele - '0';
                        freq[num-1]++;
                    }
            }
        }
        for(int i=0;i<9;i++){
            if(freq[i]>1) return false;
            }
        return true;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int m = 9, n = 9;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(!check_horizontal(board, i)) return false;
                if(!check_vertical(board,j)) return false;
                if(!check_box(board,i,j)) return false;
            }
        }
        return true;
    }
};
