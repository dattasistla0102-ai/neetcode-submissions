class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int r=board.size();
        int c=board[0].size();
        unordered_set<char> s;
        //row check;
        int i,j;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(board[i][j]=='.')
                {
                    continue;
                }
                if(s.count(board[i][j]))
                {
                    return false;
                }
                s.insert(board[i][j]);
            }
            s.clear();
        }
        //col check
        for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
            {
                if(board[j][i]=='.')
                {
                    continue;
                }
                if(s.count(board[j][i]))
                {
                    return false;
                }
                s.insert(board[j][i]);
            }
            s.clear();
        }
        //sub matrix check
        int I,J;
        int ipos=0;
        for(I=1;I<=3;I++)
        {
            int jpos=0;
            for(J=1;J<=3;J++)
            {
                for(i=ipos;i<ipos+3;i++)
                {
                    for(j=jpos;j<jpos+3;j++)
                    {
                        if(board[i][j]=='.')
                        {
                            continue;
                        }
                        if(s.count(board[i][j]))
                        {
                            return false;
                        }
                        s.insert(board[i][j]);
                    }
                }
                s.clear();
                jpos=jpos+3;
            }
            ipos=ipos+3;
        }
        return true;
    }
};
