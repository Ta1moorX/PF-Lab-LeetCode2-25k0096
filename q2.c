#include <stdio.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;
    char temp;
    
    while(left < right) {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char str1[] = {'h', 'e', 'l', 'l', 'o'};
    int size1 = 5;
    
    printf("Before: ");
    for(int i = 0; i < size1; i++) {
        printf("%c", str1[i]);
    }
    
    reverseString(str1, size1);
    
    printf("\nAfter: ");
    for(int i = 0; i < size1; i++) {
        printf("%c", str1[i]);
    }
    printf("\n\n");
    
    char str2[] = {'H', 'a', 'n', 'n', 'a', 'h'};
    int size2 = 6;
    
    printf("Before: ");
    for(int i = 0; i < size2; i++) {
        printf("%c", str2[i]);
    }
    
    reverseString(str2, size2);
    
    printf("\nAfter: ");
    for(int i = 0; i < size2; i++) {
        printf("%c", str2[i]);
    }
    printf("\n");
    
    return 0;
}