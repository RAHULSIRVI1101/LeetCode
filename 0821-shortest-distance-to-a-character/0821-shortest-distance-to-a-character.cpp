class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> vect;
        vector<int> ans;
        for(int i=0;i<s.size();i++){
            if(s[i]==c) vect.push_back(i);
        }
        int n=vect.size();
        
        if(n==1){
            int k=vect[0];
            for(int i=0;i<s.size();i++){
                ans.push_back(abs(k-i));
            }
        }
        if(n>1){
            int k=1;
            int l=vect[0];
            int h=vect[1];
           for(int i=0;i<s.size();i++){
               if(i>h && k<n){
                   l=h;
                   h=vect[k++];
               }
               if(s[i]==c){
                   ans.push_back(0);
               }
               else{
                   ans.push_back(min(abs(l-i),abs(h-i)));
               }
               
               
           } 
        }
        return ans;
        
    }
};