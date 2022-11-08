class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string sign[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> ss;
        for(int i=0;i<words.size();i++){
            string s=words[i];
            string res="";
            for(int j=0;j<s.size();j++){
                res+=sign[s[j]-97];
            }
            ss.insert(res);
        }
        return ss.size();
    }
};