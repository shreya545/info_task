#include <stdio.h>
#include<string.h>
int main() {
    char str[50];
    printf("enter the string: ");
    scanf("%[^\n]", str);
    int strl=strlen(str);
    printf("after str length :%d \n",strl);
    int i = 0, j = 0;
    while (str[i] == ' ')
        i++;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        else {
            str[j++] = ' ';
            while (str[i] == ' ')
                i++;
            continue;
        }
        i++;
    }
    if (j > 0 && str[j - 1] == ' ')
        j--;
    str[j] = '\0';
    strl=j-1;
    printf("after str length :%d \n",strl);
    printf("Output:%s\n", str);
    return 0;
}
