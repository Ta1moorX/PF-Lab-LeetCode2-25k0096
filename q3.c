#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0) {
        return 0;
    }
    
    int pos = 1;
    
    for(int i = 1; i < numsSize; i++) {
        if(nums[i] != nums[i - 1]) {
            nums[pos] = nums[i];
            pos++;
        }
    }
    
    return pos;
}

int main() {
    int arr1[] = {1, 1, 2};
    int size1 = 3;
    
    printf("Before: ");
    for(int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    
    int k1 = removeDuplicates(arr1, size1);
    
    printf("\nAfter: k = %d, nums = ", k1);
    for(int i = 0; i < k1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n\n");
    
    int arr2[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int size2 = 10;
    
    printf("Before: ");
    for(int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    
    int k2 = removeDuplicates(arr2, size2);
    
    printf("\nAfter: k = %d, nums = ", k2);
    for(int i = 0; i < k2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    return 0;
}