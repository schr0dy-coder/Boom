class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int length = nums1.length + nums2.length;
        int i = 0;
        int j = 0;
        int k = 0;
        int [] arr = new int[length];
        while(i<nums1.length && j<nums2.length){
            if(nums1[i] <= nums2[j]){
                arr[k] = nums1[i];
                i++;
            }
            else{
                arr[k] = nums2[j];
                j++;
            }
            k++;
        }
        while(i<nums1.length){
            arr[k] = nums1[i];
            i++;
            k++;
        }
        while(j<nums2.length){
            arr[k] = nums2[j];
            j++;
            k++;
        }
        int p1 = length/2;
        float value;
        if(length%2 == 0){ 
            value = arr[p1]+arr[p1-1];
            value = value/2;
        }
        else{
            value = arr[p1];
        }
        return value;
    }
}