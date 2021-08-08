#include <stdio.h>
#include <string.h>

/*
AIM: To impliment the sliding window algoritham  to find the pattren \
     match with the given sub array string 
     And, display the index of the string from the main string!
*/

void FindSub_StringMatch(const char *str, const char *ptrn, int N, int K)
{
    for(int i= 0; i<= N-K+1; i++)
   {
       int j=0;
       for(j=0; j <K; j++)
       {
           /* str {i, i+1, i+2...}*/
          if(str[i+j]!= ptrn[j])
          {
              /* inner loop should break, if not match to first char */
              break;
          } 
       }
    if(j==K)
        {
            printf("Matched at %4d \r\n", i);
        }
   }
}

int main(void)
{
   const char *str   = "AABCCADCDBAAABCAABC";
   const char *patten= "AABC";
   int N= strlen(str);
   int K= strlen(patten);
   FindSub_StringMatch(str, patten, N,K);
   
   return 0;
}
