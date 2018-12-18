#include <stdio.h>
#include <memory.h>

int main() {
    char S[10000];
    int T;

    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        scanf("%s", S);
        for (int i = 0; i < strlen(S); i+=2) {
            if (S[i] != '\n') {
                printf("%c", S[i]);
            }
        }
        printf(" ");
        for (int i = 1; i < strlen(S); i+= 2) {
            if (S[i] != '\n') {
                printf("%c", S[i]);
            }
        }
        printf("\n");
    }


    return 0;
}