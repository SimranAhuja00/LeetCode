class Solution {
    public int lengthOfLastWord(String s)
    {
        String a = s.trim(); //storing trimmed String in another variable
        int len= a.length();
        int i,cnt=0;
      
        for(i=len-1;i>=0;i--)
        {
            if(a.charAt(i) !=' ')
                cnt++;
            else
                break;
        }
        return cnt;
    }
}
