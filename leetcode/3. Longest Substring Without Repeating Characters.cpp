class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        int charIndex[256];
        for (int i = 0; i < 256; ++i) charIndex[i] = -1;

        int maxLength = 0;
        int start = 0, end = 0;

        while (end < len) {
            if (charIndex[s[end]] >= start) start = charIndex[s[end]] + 1;

            charIndex[s[end]] = end;
            maxLength = max(maxLength, end - start + 1);
            end++;
        }

        return maxLength;
    }
};