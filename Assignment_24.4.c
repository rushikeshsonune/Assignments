// 24.4  WAP which accepts string from user and check whether it contains vowels in it or not 
// Input : MarvellouS 
// Output :  TRUE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int ChkVowel(char *str)
{
  if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') || 
    (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') )
    {
      return TRUE;  
    }
    else
    {
      return FALSE;  
    }
}

int main()
{
  char Arr[20];
  BOOL bRet = FALSE;
  
  printf("Enter string \n");
  scanf("%[^'\n']s",Arr);

  bRet = ChkVowel(Arr);

  if(bRet == TRUE)
  {
    printf("Contains vowel \n");  
  }
  else
  {
    printf(" there is no vowel \n");  
  }

  return 0;  
}