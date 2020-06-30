#include<stdio.h>
#include<errno.h>

/*
    to count the total number of characters
    inside the source file
*/
long count_characters(FILE *);

void main()
{
    int i;
    long cnt;
    char ch, ch1;
    FILE *fp1, *fp2, *fp3;
    char filename[100], c;


    fp1 = fopen("File_1.txt", "r");
    printf("The FILE has been opened...\n");
    printf("PRINT the content of FILE ...\n\n");
    // Read contents from file
    c = fgetc(fp1);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fp1);
    }

    if (fp1==NULL){
        printf("Cannot open file \n");
        exit(0);
    } else{

        fp2 = fopen("File_2.txt", "w");
        cnt = count_characters(fp1);
        fseek(fp1, -1L, 2);
        printf("\n\nNumber of characters to be copied : %d ", ftell(fp1));

        while (cnt)
        {
            ch = fgetc(fp1);
            fputc(ch, fp2);
            fseek(fp1, -2L, 1);
            cnt--;
        }
        printf("\n***** Your File has been successfully in copied reverse order **\n");

    }


    fclose(fp1);
    fclose(fp2);

    fp3 = fopen("File_2.txt", "r");
    printf("\nPRINT File contents in reverse order...\n");
    c = fgetc(fp3);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fp3);
    }
    fclose(fp3);
}

long count_characters(FILE *f)
{
    fseek(f, -1L, 2);
    long last_pos = ftell(f);
    last_pos++;
    return last_pos;
}
