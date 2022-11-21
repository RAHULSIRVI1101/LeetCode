class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> s;
        for(auto it: emails){
          string localName="";
            for(char i:it){
                if(i=='@' || i=='+'){
                    break;
                }
                else if(i!='.'){
                    localName+=i;
                }
            }
            s.insert(localName+it.substr(it.find('@')));
        }
        return s.size();
    }
};