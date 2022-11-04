class Solution {
public:
    int calPoints(vector<string>& operation) {
        int sum=0;
        stack<int> st;
        int n=operation.size();
        for(int i=0;i<n;i++){
            
            if(operation[i]=="C"){
                int a=st.top();
                    sum-=a;
                    st.pop();
            }
            else if(operation[i]=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                sum=sum+a+b;
                st.push(b);
                st.push(a);
                st.push(a+b);
            }
         else if(operation[i]=="D"){
             int a=st.top();
             sum+=a*2;
             st.push(a*2);
         }
        else {
            int a=stoi(operation[i]);
            
                st.push(a);
                sum+=a;
        
    }
        }
      return sum;                       
}
                                         
};