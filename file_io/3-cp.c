#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main()
{
   char ch;
   FILE *source, *target;
   char file_from[]="x1.txt";
   char file_to[]="x2.txt";
   source = fopen(file_from, "r");
   if (source == NULL) {
      printf("Press any key to exit...\n");
      exit(EXIT_FAILURE);
   }
   target = fopen(file_to, "w");
   if (target == NULL) {
      fclose(source);
      printf("Press any key to exit...\n");
      exit(EXIT_FAILURE);
   }
   while ((ch = fgetc(source)) != EOF)
      fputc(ch, target);
   printf("File copied successfully.\n");
   fclose(source);
   fclose(target);
   return 0;
}
