#include <stdio.h>
#include <ctype.h>
#define MAX_LENGTH_STRING 30

void display_menu(void);
char ask_command(void);
char read_string(char read_str[]);
char print_string(char print_str[MAX_LENGTH_STRING]);
int main(void)
{
    char current_string[MAX_LENGTH_STRING] = "Hello world!";
    display_menu();
    print_string(current_string);
    
    while (character != 88)//Runs as long as "char string" isn't 'X(ascii 88)'
    {
        char character = ask_command();
        if (character == 69)
        {
            printf("%s",current_string);
        }
        if (character == 70)
        {
            read_string()
        }
        
        
        
        
    }
    
    printf("%c",string);
}

void display_menu(void)
{
    printf("A) Count the number of vowels in string\n");
    printf("B) Count the number of constants in the string\n");
    printf("C) Convert the string to uppercase\n");
    printf("D) Convert the string to lowercase\n");
    printf("E) Display the current string\n");
    printf("F) Enter another string\n");
    printf("G) Read string from file\n");
    printf("H) Write string to file\n\n");
    printf("M) Display this menu\n");
    printf("X) Exit this program\n");
}

char print_string(char print_str[MAX_LENGTH_STRING])
{
    printf("%s",print_str);
}

char ask_command(void)
{
    char str[6];
    int i;
    char ret_char;
    while (i != 1)
    {
        printf("\n");
        fgets(str,6,stdin);
        ret_char = toupper(str[0]);
        if (ret_char > 64 && ret_char < 91)//selvittää onko annettu arvo kirjain
        {
            i = 1;
        }
        
    }
    return ret_char;   
}
    
    
