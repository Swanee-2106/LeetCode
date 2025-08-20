class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int> mg(m+n,0);
        int i=m-1,j=n-1,idx=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j]){
                mg[idx]=nums1[i];
                idx--;
                i--;
            }else{
                mg[idx]=nums2[j];
                idx--;
                j--;
            }
        }
        while(i>=0){
            mg[idx]=nums1[i];
            idx--;
            i--;
        }
        while(j>=0){
            mg[idx]=nums2[j];
            idx--;
            j--;
        }

        int x=mg.size();
        double median;
        int st=0,end=x-1;
        int mid=st + (end-st)/2;
        if(x%2!=0){
            median = mg[mid];
        }else if(x%2==0){
            median = (mg[mid]+mg[mid+1])/2.0;
        }
        return median;
    }
};