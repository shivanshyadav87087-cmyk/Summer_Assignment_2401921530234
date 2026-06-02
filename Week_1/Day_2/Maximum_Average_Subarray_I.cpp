class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        int n = nums.size();

        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }

        int maxsum = sum;

        int startingindex = 0;
        int endingindex = k;

        while(endingindex < n) {
            sum -= nums[startingindex];
            startingindex++;

            sum += nums[endingindex];
            endingindex++;

            maxsum = max(maxsum, sum);
        }

        return (double)maxsum / k;
    }
};
