class Solution {
public:
    void merge(vector<int>& nums1, int m,
               vector<int>& nums2, int n) {

        vector<int> ans;

        int i = 0;
        int j = 0;

        while(i < m && j < n) {//yha pe numsize nhi hioga bcz yha total size 1 mea 6 h but humlog ko 3 element mea compare krna h 

            if(nums1[i] <= nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            }
            else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while(i < m) {
            ans.push_back(nums1[i]);
            i++;
        }

        while(j < n) {
            ans.push_back(nums2[j]);
            j++;
        }

        for(int k = 0; k < m + n; k++) {
            nums1[k] = ans[k];
        }
    }
};