#include<stdio.h>
#include<ctype.h>
#include<cs50.h>
#include<string.h>
#include<math.h>


int main(void)
{
    string text = get_string("Text: ");
    int letters = 0;
    // decleared words as 1 because there are one more words than spaces and I used spaces to determine the words
    int words= 1;
    int sentences = 0;
    //getting string length
    int n = n = strlen(text); 

    // check if the char in the array is an alphabet
     for (int i = 0; i < n; i++)
     {
         if (text[i]  >= 'A' && text[i] <= 'z' )
         {
           letters++;
         }
     }

     // adding words 
     for (int i = 0; i < n; i++)
     {
         if (text[i]==' ')
         {
           words++;
         }
     }

     //check if the char in the array is a punctuation mark
    for (int i = 0; i < n; i++)
     {
         if (text[i] == '.' || text[i]== '!' || text[i]== '?')
         {
           sentences++;
         }
     }

     // sentences & letters per 100 words
    float L = (100*letters)/words;
    float S = (100*sentences)/words;

    int index = round((0.0588*L)-(0.296*S)-15.8);
    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if( index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }


}
