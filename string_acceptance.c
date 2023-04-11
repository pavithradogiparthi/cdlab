#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);
    flag = 1;

    // Check if the string is under a*
    for (i = 0; i < len; i++) {
        if (str[i] != 'a') {
            flag = 0;
            break;
        }
    }

    if (flag) {
        printf("String is under a*\n");
        return 0;
    }

    flag = 1;

    // Check if the string is under a*b+
    if (str[0] == 'a') {
        for (i = 1; i < len; i++) {
            if (str[i] == 'b') {
                flag = 1;
            }
            else flag=0;
        }
    } else {
        flag = 0;
    }

    if (flag) {
        printf("String is under a*b+\n");
        return 0;
    }

    flag = 1;

    // Check if the string is under *abb
    if (str[len - 1] == 'b' && str[len - 2] == 'b') {
        for (i = 0; i < len - 2; i++) {
            if (str[i] != 'a') {
                flag = 0;
                break;
            }
        }
    } else {
        flag = 0;
    }

    if (flag) {
        printf("String is under *abb\n");
        return 0;
    }

    printf("String is not under any of the given regular expressions.\n");

    return 0;
}
