/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int find(int* nums, int size, int x){
    int res;
    
    for(int i = 0; i < size; i++){
        if(nums[i] == x){
            res = i;
            break;
        }
    } 
        
    return res;
}
    
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    *returnSize = nums1Size;
    int* result = malloc(*returnSize * sizeof(int));
        
    for(int i = 0; i < nums1Size; i++){
        int tmp = find(nums2, nums2Size, nums1[i]);
        bool no = true;
        for(int j = tmp; j < nums2Size; j++){
            if(nums2[j] > nums1[i]){
                result[i] = nums2[j];
                no = false;
                break;
            }
        }
        if(no) result[i] = -1;
    }
        
    return result;
}
