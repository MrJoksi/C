#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_LENGTH_STRING 50
#define FILENAME "stringfilu.txt"

void display_menu(void);
char ask_command(void);
void read_string(char string[]);
void print_string(char string[]);
int count_vowels(char string[]);
int count_consonant(char string[]);
void to_lower(char string[]);
void to_upper(char string[]);
void read_file(char string[]);
void write_file(char string[]);


int main(void)
{
    char current_string[MAX_LENGTH_STRING] = "Hello world!";
    char character;
    display_menu();
    print_string(current_string);
    while (character != 88)//Runs as long as "char string" isn't 'X(ascii 88)
    {
        character = ask_command();
        if (character == 69)// CASE E*******************
        {
            print_string(current_string);
        }
        else if (character == 70)// CASE F*******************
        {
            read_string(current_string);
        }
        else if(character == 65)// CASE A*******************
        {
            int vowel_count = count_vowels(current_string);
            printf("%d",vowel_count);
        }
        else if(character == 66)// CASE B*******************
        {
            int count = count_consonant(current_string);
            printf("%d",count);

        }
        else if(character == 67)// CASE C*******************
        {
           to_upper(current_string);
        }
        else if(character == 68)// CASE D*******************
        {
            to_lower(current_string);
        }
        else if(character == 71)// CASE G*******************
        {
            read_file(current_string);
        }
        else if(character == 72)// CASE H*******************
        {
            write_file(current_string);
        }
        else if(character == 77)// CASE M*******************
        {
            display_menu();
        }
    }
    
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




void print_string(char print_str[])
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
        if (ret_char > 64 && ret_char < 91)//selvittÃ¤Ã¤ onko annettu arvo kirjain
        {
            i = 1;
        }
        
    }
    return ret_char;   
}
 


void read_string(char string[])
{
    printf("Give string: ");
    fgets(string,MAX_LENGTH_STRING,stdin);
}



int count_vowels(char string[])
{
    int string_length = strlen(string);
    int vowel_amount = 0;
    for (int i = 0; i < string_length; i++)
    {
        switch (string[i])
        {
        case 65:
        case 69:
        case 73:
        case 79:
        case 85:
        case 89:
        case 97:
        case 101:
        case 105:
        case 111:
        case 117:
        case 121:
            vowel_amount += 1;
            break;
        }  
    }
    return vowel_amount;
}

void to_upper(char up_string[])
{
    char temp[MAX_LENGTH_STRING];
    for(int x = 0; x < MAX_LENGTH_STRING;x++)
    {
        temp[x] = toupper(up_string[x]);
        up_string[x] = temp[x];
    }
}

void to_lower(char low_string[])
{
   char temp[MAX_LENGTH_STRING];
    for(int x = 0; x < MAX_LENGTH_STRING;x++)
    {
        temp[x] = tolower(low_string[x]);
        low_string[x] = temp[x];
    } 
}

int count_consonant(char string[])
{
    int string_length = strlen(string);
    int consonant_amount = 0;
    for (int i = 0; i < string_length; i++)
    {
        switch (toupper(string[i]))
        {
        case 'B':
        case 'C':
        case 'D':
        case 'F':
        case 'G':
        case 'H':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'V':
        case 'W':
        case 'X':
        case 'Z':
            consonant_amount += 1;
            break;
        }  
    }
    return consonant_amount;
}

void read_file(char string[])
{
    FILE *file_pointer;
    file_pointer = fopen(FILENAME,"r");
    if (file_pointer == 0)
    {
        printf("Error in code");
    }
    else
    {
        fgets(string,MAX_LENGTH_STRING,file_pointer);
    }
    

}