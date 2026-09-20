#include <stdi0.h>
int main()
{

int choice;
float num1, num2, result;

do
{

printf("\n ====: MENU DRIVEN CALCULATOR ===:= V");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n"):
printf("4. Division\n"):
printf("5. Exit\n");
printf("Enter your cholce: "):
scanf("%d", &choice);
switch (choice)
{

case 1 :
printf("Enter two numbers: ");
scanf("%f %f", &num1, &num2);
result = numi + num2;
printf("Result = %.2f\", result);
break:

case 2:
printf("Enter two numbers: "):
scanf("%f %f", dnum1, &nm2);
result = numi - num2;
printf("Result = %.2f\n", result):
break

case 3:
printf("Enter two numbers: "):
scanf("%f %f", dmum1, dnwm2);
result = numl * num2;
printf("Reeult = %.2f\n", result);
break;
cose 4:
printf("Enter two numbers: "):
scanf('%f %f". &num1, dnum2);

if (num2 != 0)
printf("Result = %.2f\n", num1 / num2):
else
printf("Error! Division by zero is not allowed.Vn");
break:

case 5:
printf("Exiting Calculeter .. \n"):
break;

default:
printf("Invalid choice! Please try again. \n");
 
}

} while (choice != 5):

return 0:

}