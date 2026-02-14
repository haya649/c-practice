#include <stdio.h>
int main(){
    char s[11];
    scanf("%10s", s);
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'i' || s[i] == 'j') {
            count += 1;
        }
    }
    printf("%d", count);
    return 0;
}
