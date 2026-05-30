#include <stdio.h>

int maxSubArray(int* nums, int numsSize) {
    
    int currentSum = nums[0];
    int maxSum = nums[0];

    for(int i = 1; i < numsSize; i++) {

        if(currentSum < 0) {
            currentSum = nums[i];
        } 
        else {
            currentSum = currentSum + nums[i];
        }

        if(currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}

int main() {

    int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = maxSubArray(nums, numsSize);

    printf("Maximum Subarray Sum = %d\n", result);

    return 0;
}