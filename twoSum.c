

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    *returnSize = 2;
    int *returnValues = malloc((*returnSize) * sizeof(int));
    int i = 0;
    int j = 0;
    for (i; i < numsSize - 1; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                returnValues[0] = i;
                returnValues[1] = j;
                break;
            }
        }
    }
    return returnValues;
}