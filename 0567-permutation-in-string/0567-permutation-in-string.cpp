class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        int freq1[26] = {0};
        int freq2[26] = {0};
        int windowSize = s1.length();

        // Count frequency of characters in s1 and first window of s2
        for (int i = 0; i < windowSize; i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        // Sliding window over s2
        for (int i = windowSize; i < s2.length(); i++) {
            if (equal(freq1, freq2)) return true;

            // Slide the window: remove the char going out, add the char coming in
            freq2[s2[i] - 'a']++;
            freq2[s2[i - windowSize] - 'a']--;
        }

        // Final check for the last window
        return equal(freq1, freq2);
    }

    // Frequency comparison function (inline)
    bool equal(int a[26], int b[26]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) return false;
        }
        return true;
    }
};
