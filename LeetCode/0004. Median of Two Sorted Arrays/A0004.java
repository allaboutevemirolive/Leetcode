public class A0004 {
    public static void main(String[] args) {

        int[] nums1 = { 2, 3, 5, 8 };
        int[] nums2 = { 10, 12, 14, 16, 18, 20 };

        double median = B0004.findMedianSortedArrays(nums1, nums2);
        System.out.println("The median of the two sorted arrays is: " + median);
    }
}
