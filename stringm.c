#include <stdio.h>

void display_menu(void);
char ask_command(void);
int main(void){
    
    display_menu();
    char string = ask_command();
}

void display_menu(void){
    printf("A) Count the number of vowels in string\n");
    printf("B) Count the number of constants in the string\n");
    printf("C) Convert the string to uppercase\n");
    printf("D) Convert the string to lowercase\n");
    printf("E) Display the current string\n");
    printf("F) Enter another string\n");
    printf("G) Read string from file\n");
    printf("H) Write string to file\n\n");
    printf("M) Display this menu\n");
    printf("X) Exit this program");
}
char ask_command(void){
    char str[6];
    fgets(str,6,stdin);
    return str[0];
}
