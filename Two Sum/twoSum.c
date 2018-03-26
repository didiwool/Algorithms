/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int *new = malloc(2 * sizeof(int));
    for(int a = 0; a < numsSize; a ++){
        for(int b = a + 1; b < numsSize; b ++){
            if(nums[a] + nums[b] == target){
                new[0] = a;
                new[1] = b;
            }
        }
    }
    return new;
}
