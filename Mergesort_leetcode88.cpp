class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = m - 1;          // nums1 last valid element
        int j = n - 1;          // nums2 last element
        int k = m + n - 1;      // nums1 last index

        // Jab tak nums2 me elements hain
        while(j >= 0) {

            // Agar nums1 me element bacha hai aur
            // nums1[i] bada hai nums2[j] se
            if(i >= 0 && nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            }
            else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
    }
};

/*{i = m - 1     (nums1 ka last valid element)
j = n - 1     (nums2 ka last element)
k = m + n - 1 (nums1 ka last position)}*/
