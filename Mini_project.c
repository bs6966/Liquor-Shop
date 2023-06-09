#include <stdio.h>
int main()
{
   FILE *ptr;
   int softdrink, breezer, beer, whiskey, vodka;
   int drink;
   int quantity;
   int age;
   ptr = fopen("drinkprice.txt","w");
   printf("Enter the drink you want to drink\n");
   printf("Press 1 for soft drink\n");
   printf("Press 2 for breezer\n");
   printf("Press 3 for beer\n");
   printf("Press 4 for whiskey\n");
   printf("Press 5 for vodka\n");
   scanf("%d", &drink);
   switch (drink)
   {
   case 1:
      printf("Enter quantity\n");
      scanf("%d", &quantity);
      fprintf(ptr,"Price=%d rupees", 20 * quantity);
      break;
   case 2:
      printf("Enter quantity\n");
      scanf("%d", &quantity);
      fprintf(ptr,"Price=%d rupees", 150 * quantity);
      break;
   case 3:
      printf("Enter your age\n");
      scanf("%d", &age);
      if (age < 18)
      {
         fprintf(ptr,"You are not eligible to drink beer");
      }
      else
      {
         printf("Enter quantity\n");
         scanf("%d", &quantity);
         fprintf(ptr,"Price=%d rupees", 500 * quantity);
      }
      break;
   case 4:
      printf("Enter your age\n");
      scanf("%d", &age);
      if (age < 21)
      {
         fprintf(ptr,"You are not eligible to drink whiskey");
      }
      else
      {
         printf("Enter quantity\n");
         scanf("%d", &quantity);
         fprintf(ptr,"Price=%d rupees", 1000 * quantity);
      }
      break;
   case 5:
      printf("Enter your age\n");
      scanf("%d", &age);
      if (age < 25)
      {
         fprintf(ptr,"You are not eligible to drink vodka");
      }
      else
      {
         printf("Enter quantity\n");
         scanf("%d", &quantity);
         fprintf(ptr,"Price=%d rupees", 2000 * quantity);
      }
      break;

   default:
      printf("Try again");
      break;
   }
   return 0;
}
