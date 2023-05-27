class Solution {
    public int strStr(String haystack, String needle) 
    {
        int len1 = haystack.length();
        int len2 = needle.length();  
        int i;
        for(i=0;i<len1+1-len2;i++)
        {
            if(haystack.charAt(i)==needle.charAt(0))
            {
                if(haystack.substring(i,i+len2).equals(needle))
                {
                    return i;
                }
            }
        }
        return -1;
    }
}
