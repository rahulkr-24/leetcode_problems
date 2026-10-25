class Solution {
    public int maxScore(int[] cardPoints, int k) {
        int n = cardPoints.length;
        int currentSum = 0;

        for (int i = 0; i < k; i++) {
            currentSum += cardPoints[i];
        }

        int maxSum = currentSum;
        int left = k - 1;
        int right = n - 1;

        while (left >= 0) {
            currentSum -= cardPoints[left];
            currentSum += cardPoints[right];
            maxSum = Math.max(maxSum, currentSum);
            left--;
            right--;
        }

        return maxSum;
    }
}