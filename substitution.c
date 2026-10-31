/*First the condition for the arguement count 
  then the condition for the arguement vector 
  condition for the arguement vector to make sure every key is in capital letter
  condition to check if there are dublicate letters in the key
  taking the input and printing the output
  condition to check the values of the input  */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 #include <cs50.h>
 #include <ctype.h>

 int main(int argc, string argv[])
 {
    if (argc != 2)
    {
        printf("Warning: ./substitution program must receive key\n");
        return 1;
    }

    if (strlen(argv[1]) != 26)
    {
        printf("Key must contains 26 characters\n");
        return 1;
    }    

    for (int i = 0; i < 26 ; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Key must be alphabets only\n");
            return 1;
        }
    }

    for (int i = 0; i < 26 ; i++)
    {
        for (int k = i + 1 ; k < 26 ; k++)
        {
            if (toupper(argv[1][i]) == toupper(argv[1][k]))
            {
                printf("Key must not contain dublicates\n");
                return 1;
            } 
        }
    }

    string plaintext = get_string("Plaintext: ");
    printf("Cipher: ");
    
    for (int i = 0, p = strlen(plaintext) ; i < p ; i++)
    {
        if (isupper(plaintext[i]))
        {
            int index = plaintext[i] - 'A';
            //knowing that plaintext contains strings how does the index expression makes it into a mathematical or int operation by minusing the ASCII number of the string with the 'a';

            printf("%c", toupper(argv[1][index]));
            // return 0;
        }

        else if (islower(plaintext[i]))
        {
            int index = plaintext[i] - 'a';
            printf("%c", tolower(argv[1][index]));
            // return 0;
        }

        else 
        {
            printf("%c", plaintext[i]);
            // return 0;
        }

    }
    printf("\n");
    return 0;
 }
/*Key: WEDCVAQRTSNMKUFPXLHBIYOGJZ*/