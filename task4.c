#include<stdio.h>//Підключення бібліотек
#include<conio.h>
int main()
{
 int a,sum=0,i,kol=0;
 //Введення цілих доданих чисел
 printf("Введіть цілі додані числа\n");
 for (i=0;i<5;i++)
  {
   scanf("%d",&a);
   if ((a>=-15)&&(a<=5))   
    kol++;
   if (a>0) 
    sum+=a;
  }
 printf("Середнє арифметичне=%d\n", (int)sum/5);
 getch();
 return 0;
}


