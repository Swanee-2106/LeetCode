class Solution {
public:
    bool isFreqSame(int freq1[],int freq2[]){//Negligible time therefoe tc is O(1)
        for(int i=0;i<26;i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;//if s1[i] is a then freq[0]++ for b freq[1]++ and so on
        }
        int windowsize = s1.length();
        for(int i=0;i<s2.length();i++){
            int windowIdx=0,idx=i;
            int windowfreq[26]={0};
            while(windowIdx<windowsize && idx<s2.length()){
                windowfreq[s2[idx]-'a']++;
                windowIdx++;
                idx++;
            }
            if(isFreqSame(freq,windowfreq)){//found the permutation
                return true;
            }
        }
        return false;
    }
};