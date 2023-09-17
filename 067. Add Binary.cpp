class Solution {
public:
    string addBinary(string a, string b) {
        int len1 = a.length();
        int len2 = b.length();
        int carry = 0;
        int i = 0;
        int sum;
        string ans = "";
        int x,y;

        while(i < len1 || i < len2 || carry != 0){
            x = 0;
            if(i < len1 && a[len1-i-1]=='1'){
                x=1;
            }
            y = 0;
            if(i < len2 && b[len2-i-1]=='1'){
                y=1;
            }
            ans = to_string((x+y+carry)%2) + ans;
            carry = (x+y+carry)/2;
            i+=1;
        }
        return ans;
    }
};
