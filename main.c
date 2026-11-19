
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[100];
    int choice, result;

    do
    {
        printf("\n----- STRING OPERATIONS MENU -----\n");
        printf("1. String Length\n");
        printf("2. String Copy\n");
        printf("3. String Concatenation\n");
        printf("4. String Comparison\n");
        printf("5. String Reverse\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);

                printf("Length of string = %lu\n", strlen(str1));
                break;

            case 2:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);

                strcpy(str2, str1);

                printf("Copied string = %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                scanf(" %[^\n]", str1);

                printf("Enter second string: ");
                scanf(" %[^\n]", str2);

                strcat(str1, str2);

                printf("Concatenated string = %s\n", str1);
                break;

            case 4:
                printf("Enter first string: ");
                scanf(" %[^\n]", str1);

                printf("Enter second string: ");
                scanf(" %[^\n]", str2);

                result = strcmp(str1, str2);

                if(result == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 5:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);

                strcpy(temp, str1);

                int i, len = strlen(temp);

                for(i = 0; i < len / 2; i++)
                {
                    char ch = temp[i];
                    temp[i] = temp[len - 1 - i];
                    temp[len - 1 - i] = ch;
                }

                printf("Reversed string = %s\n", temp);
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 6);

    return 0;
}
