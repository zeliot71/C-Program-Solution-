#include <stdio.h>
#include <stdlib.h>

int main()
{
 //   char str[50];
    //scanf("%s",&str);
   // scanf("%[^\n]",str);
    //printf("%s",str);

    //char str2[50];
    //gets(str2);
    //puts(str2);

    /*printing string character by character:

    char s1[]="Suparna";
    int i=0;

    while(s1[i]!='\0')
    {
        printf("%c\n",s1[i]);
        i++;
    }
*/

/*Find string length using strlen function:
    char str[]="United International University";

    int len = strlen(str);

    printf("%d",len);

*/


/*Find string length without using strlen function:
    char str[]="UIU - United International University";

    int len = 0,i=0;

    while(str[i]!='\0')
    {
        i++;
        len++;
    }

    printf("Length: %d",len);

*/

    //Copy a string using  strcpy function
    /*
    char source[]="olleh wbProgramming";
    char target[50];

    strcpy(target,source);

    printf("Source String: %s\n",source);
    printf("target String: %s\n",source);
*/

/*
    //Concatenation using strcat()
    char str1[]="My name is ";
    char str2[]="Zihad Khan";
    //str2 will store in the end of str1

    strcat(str1,str2);
    //this will also work
    strcat(str1,"-!-");
    printf("String1: %s\n",str1);
    //str2 will remain same!
    printf("String2: %s",str2);
*/

/*
    //Concatenation using strcat
    char st1[] = "Amr sonar bangla ";
    char st2[] = "ami tomai valobashi";

    int i=0,len=0,j=0;

    while(st1[i] != '\0')
    {
        i++;
        len++;
    }

    while(st2[j]!='\0')
          {
              st1[len+j]=st2[j];
                j++;
          }
    //adding null in the end of line
    st1[len+j]= '\0';

    printf("%s\n",st1);
*/


//Compare two string using strcmp
/*
char stri1[]= "Asadujjaman";
char stri2[]= "Asadujjaman";

int d = strcmp(stri1,stri2);

if(d==0)
{
    printf("Equal");
}
else
{
    printf("Not equal");
}
*/

//Reversing a string using strrev
/*
char string[]= "Zeliot71";

printf("Main string: %s\n",string);
strrev(string);

printf("Reversed String: %s\n",string);

*/
//Reverersing string without strrev
/*
char string1[30]="Ammaaaaaaaa";
char string2 [30];

int i=0,len=0,j;
while(string1[i] != '\0')
{
    i++;
    len++;
}

for(j=0,i=len-1;i>=0;i--,j++)
{
    string2[j]=string1[i];
}
string2[j]= '\0';
printf("Before Reverse: %s\n",string1);
printf("After Reverse: %s\n",string2);
*/

//string palindrome check
/*
char str1[30]="madam";
char str2[30];

int i=0,j,len=0;

while(str1[i] != '\0')
{
    i++;
    len++;
}

for(j=0,i=len-1;i>=0;i--,j++)
{
    str2[j]=str1[i];
}
str2[j]='\0';

int d= strcmp(str1,str2);

if(d==0)
{
    printf("String is Palindrome!");
}
else
{
    printf("String is Not Palindrome!");
}
*/

//Swapping string
/*
char str1[15]="Bangladesh";
char str2[15]="India";
char temp[15];

printf("String1: %s\n",str1);
printf("String2: %s\n",str2);

strcpy(temp,str1);
strcpy(str1,str2);
strcpy(str2,temp);

printf("String1: %s\n",str1);
printf("String2: %s\n",str2);
*/

//String Lower Case & Upper Case
/*
char str[]="Capital letter";
strupr(str);
printf("%s\n",str);

char str1[]="Small letter";
strlwr(str1);
printf("%s\n",str1);
*/

char str[100],ch;
printf("Enter a string: ");
gets(str);

int i,vowel,consonant,word,digit,other;

i=vowel=consonant=word=digit=other=0;

while((ch=str[i]) !='\0')
{
    if(ch=='a'|| ch =='e'||ch =='i'||ch =='o'||ch =='u' || ch =='A'||ch =='E'||ch =='I'||ch =='O'||ch =='U')
            vowel++;

    else if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
        consonant++;

    else if(ch>='0' && ch<='9')
        digit++;

    else if(ch==' ')
        word++;

    else
        other++;

    i++;
}
word++;

printf("Number of vowel: %d\n",vowel);
printf("Number of consonant: %d\n",consonant);
printf("Number of word: %d\n",word);
printf("Number of digit: %d\n",digit);
printf("Number of other: %d\n",other);


    }
