#include <stdio.h>
#include <string.h>

int i = 0, j = 0, c = 0, z = 0;
char a[100], ac[100], stk[100], act[100];

void check()
{
    strcpy(ac, "reduce to E -> ");

    // c is input length

    // checking for production rule-1 "E->4";
    for (z = 0; z < c; z++)
    {
        if (stk[z] == '4')
        {
            printf("%s4", ac);
            stk[z] = 'E';
            stk[z + 1] = '\0';
            printf("\n$%s\t%s$\t", stk, a);
        }
    }

    // checking for production rule 2 "E->2E2";

    for (z = 0; z < c - 2; z++)
    {
        if (stk[z] == '2' && stk[z + 1] == 'E' && stk[z + 2] == '2')
        {
            printf("%s2E2", ac);
            stk[z] = 'E';
            stk[z + 1] = '\0';
            stk[z + 2] = '\0';
            printf("\n$%s\t%s$\t", stk, a);
            i = i - 2;
        }
    }

    // checking for production rule -3 E->3E3;
    for (z = 0; z < c - 2; z++)
    {
        if (stk[z] == '3' && stk[z + 1] == 'E' && stk[z + 2] == '3')
        {
            printf("%s3E3", ac);
            stk[z] = 'E';
            stk[z + 1] = '\0';
            stk[z + 2] = '\0';
            printf("\n$%s\t%s$\t", stk, a);
            i = i - 2;
        }
    }

    return;
}

int main()
{
    printf("Gramae :\n E->2E2 \n E->3E3 \n E-4\n");

    printf("enter the string: ");
    scanf("%s", a);

    c = strlen(a);
    strcpy(act, "SHIFT");

    printf("stack \t input \t action \n");

    printf("$\t%s$\t", a);

    for (i = 0; j < c; j++, i++)
    {
        printf("%s", act);

        stk[i] = a[j];
        stk[i + 1] = '\0';
        a[j] = ' ';
        printf("\n$%s\t%s$\t", stk, a);
        check();
    }
    check();

    if (stk[0] == 'E' && stk[1] == '\0')
        printf("Accepted \n");
    else
        printf("Rejected \n");
}
