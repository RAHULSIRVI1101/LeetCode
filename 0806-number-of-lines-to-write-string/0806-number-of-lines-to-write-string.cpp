class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int lines = 1; vector<int> res;
    int occupied_width = 0, len = S.length();
    
    for(int i = 0; i < len; i++) {
        if((occupied_width + widths[S[i] - 'a']) > 100) {
            lines++;
            occupied_width = 0;
        }
        occupied_width += widths[S[i] - 'a'];
    }
    
    res.push_back(lines);
    res.push_back(occupied_width);
    
    return res;
    }
};