class Solution {
   public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false;

        string concatenated = s + s;

        for (int i = 0; i <= concatenated.length() - goal.length(); i++)
            if (concatenated.substr(i, goal.length()) == goal) return true;

        return false;
    }
};