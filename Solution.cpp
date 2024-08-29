class Solution {
public:
    int maxSubStr(string str){
        stack<char>s;
        s.push(str[0]);
        int i=1;
        int ans=0;
        while(i<str.length()){
            while(i<str.length() && !s.empty() && s.top() != str[i]){
                i++;
                s.pop();
            }
            
            if(s.empty()){
                ans++;
            }
            
            while(i<str.length() && (s.empty() || s.top()==str[i])){
                s.push(str[i]);
                i++;
            }
        }
        if(s.empty()){
            return ans;
        }
        return -1;
    }
};
