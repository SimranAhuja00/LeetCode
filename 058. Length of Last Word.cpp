class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        int cnt=0,flag=0;
        for(int i=len-1;i>=0;i--)
        {
            if(s[i]==' '&&flag){
                break;
            }
            if(s[i]!=' '){
                flag=1;
                cnt++;
            }
        }
        return cnt;
    }
};
