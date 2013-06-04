#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include "stdafx.h"

int get_choice(void)
{
   int choice = 0;
   printf("\n\n");
   printf("--------------------------------------------\n");
   printf("Vibirite_deistvie:\n");
   printf("%-1d   %-10s\n", 1, "Вывод массивов");
   printf("%-1d   %-10s\n", 2, "Расчет параметра");
   printf("%-1d   %-10s\n", 3, "Сохранение в файл");
   printf("%-1d   %-10s\n", 4, "Выход");
   printf("--------------------------------------------\n");

   printf("Vash vibor:");
   scanf("%d%*c", &choice);
   while(choice < 1 || choice > EXIT_CODE)
   {
       printf("Range choice [1..%d]\n" ,EXIT_CODE);
       printf("You choice:");
       scanf("%d%*c", &choice);
   }
   return choice;

}