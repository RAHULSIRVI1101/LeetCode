class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int i=0,j=0;
        int a,b;
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
            if(board[i][j]=='R'){
                a=i;
                b=j;
             break;
            }
            }
        }
        
        int t=a;
        int cnt=0;
        while(t>=0){
            if(board[t][b]=='p') {
                cnt++;
                break;
        }
            else if(board[t][b]=='B') break;
            
            t--;
    }
        t=a;
        while(t<=7){
            if(board[t][b]=='p') {
                cnt++;
                break;
            }
            else if(board[t][b]=='B') break;
            
            t++;
        }
        t=b;
        while(t>=0){
            if(board[a][t]=='p') {
                cnt++;
                break;
        }
            else if(board[a][t]=='B') break;
            
            t--;
        }
        t=b;
        while(t<=7){
            if(board[a][t]=='p') {
                cnt++;
                break;
        }
            else if(board[a][t]=='B') break;
            
            t++;
        }
        return cnt;
    }
};