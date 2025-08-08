class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> vec(2,0);
        /*for(int i=0;i<numbers.size();i++){//O(n2)
            for(int j=i+1;j<numbers.size();j++){
                if(numbers[i]+numbers[j]==target){
                    vec[0]=i+1;
                    vec[1]=j+1;
                }
            }
        }
        return vec;*/
        int st=0;int end=numbers.size()-1;
        while(st<=end){//O(n)
            if(numbers[st]+numbers[end]==target){
                vec[0]=st+1;
                vec[1]=end+1;
                break;
            }else if(numbers[st]+numbers[end]>target){
                end--;
            }else{
                st++;
            }
        }
        return vec;
    }
};