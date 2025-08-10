class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int st=0;int end=str.length()-1;
        while(st<=end){
            if(str[st]!=str[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};