#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int cur = 1;
    int max_len = 1;
    
    for(int i = 1; i < n; i++) {
        if(a[i] > a[i - 1]) {
            cur++;
        } else {
            if(cur > max_len) {
                max_len = cur;
            }
            cur = 1;
        }
    }
    
    if(cur > max_len) {
        max_len = cur;
    }
    
    printf("%d\n", max_len);
    return 0;
}
