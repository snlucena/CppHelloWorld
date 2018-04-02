#include <stdio.h>
int main ()
{
  FILE * pFile;
  pFile = fopen ("output.txt","w");
  if (pFile!=NULL)
  {
    fputs ("Hello World!!Soy sofi lucena",pFile);
    fclose (pFile);
  }
  return 0;
}

