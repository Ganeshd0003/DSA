Largest Element in Array
Difficulty: BasicAccuracy: 67.48%Submissions: 347K+Points: 1
Given an array, arr. The task is to find the largest element in it.

Examples:

Input: arr = [1, 8, 7, 56, 90]
Output: 90
Explanation: The largest element of the given array is 90.
Input: arr = [5, 5, 5, 5]
Output: 5
Explanation: The largest element of the given array is 5.
Input: arr = [10]
Output: 10
Explanation: There is only one element which is the largest.
Expected Time Complexity: O(n)
Expected Space Complexity: O(1)

Constraints:
1 <= arr.size()<= 106
0 <= arr[i] <= 106


Solution: 
class Solution {
  public:
    int largest(vector<int> &arr) {
        int k=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>k) k=arr[i];
        }
        return k;
    }
};