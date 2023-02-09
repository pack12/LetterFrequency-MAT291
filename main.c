#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(){

    printf("Enter the letter: ");
    char letter[1];
    memset(letter, 0, sizeof(letter));
    scanf("%c", letter);
    char scan_letter[1];
    char msg[200];
    char buf[5];
    // memset(msg, 0, sizeof(msg));
    printf("Enter the message: \n");
    fgets(buf, sizeof buf, stdin);
    fgets(msg, sizeof msg, stdin);
    // strcpy(scan_letter, toupper(letter));

    
    int count = 0;
    printf("The letter: %c\n", toupper(letter[0]));
    printf("The Message: %s", msg);
    for (int i = 0; i < sizeof msg; i++)
    {
        if(msg[i] == toupper(letter[0])){
            printf("A!");
            count+=1;
        }
    }
    printf("Count: %i", count);
    return 0;
}