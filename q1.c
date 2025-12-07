#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int pos = 0;
    
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] != 0) {
            nums[pos] = nums[i];
            pos++;
        }
    }
    
    for(int i = pos; i < numsSize; i++) {
        nums[i] = 0;
    }
}

int main() {
    int arr1[] = {0, 1, 0, 3, 12};
    int size1 = 5;
    
    printf("Before: ");
    for(int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    
    moveZeroes(arr1, size1);
    
    printf("\nAfter: ");
    for(int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n\n");
    
    int arr2[] = {0};
    int size2 = 1;
    
    printf("Before: ");
    for(int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    
    moveZeroes(arr2, size2);
    
    printf("\nAfter: ");
    for(int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    return 0;
}