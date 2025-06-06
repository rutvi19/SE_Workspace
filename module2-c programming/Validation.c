#include <stdio.h>
#include <string.h>

void main() {
    char fName[100], pass[100];
    char myEmail[100] = "a@gmail.com";
    char myPassword[100] = "123456";

    printf("Enter User Name: ");
    fgets(fName, sizeof(fName), stdin);
    fName[strcspn(fName, "\n")] = 0; // Remove newline if present

    printf("Enter Password: ");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = 0;

    int data = strlen(fName);
    int data2 = strlen(pass);

    if (data != 0 && data2 != 0) {
        if (strcmp(fName, myEmail) == 0 && strcmp(pass, myPassword) == 0) {
            printf("Email & Password is valid\n");
        } else {
            printf("Incorrect\n");
        }
    } else {
        printf("Please Enter UserName & Password\n");
    }
}
