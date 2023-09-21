class Solution {
    public boolean isSubsequence(String s, String t) 
    {
        int n = s.length();
        int m = t.length();
        int i, j = 0;
        for (i = 0; i < m && j < n; i++) {
            if (s.charAt(j) == t.charAt(i)) {
                j++;
            }
        }
        return j == n;
    }
}
