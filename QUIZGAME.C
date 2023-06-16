#include<stdio.h>
#include<conio.h>
int main() {
 int ans,score=0,wrong=0,correct=0;
    clrscr();
    printf("-----------------------Quiz------------------------------------");
    printf("\nQ1. The nearest planet to the Earth is?");
     printf("\n1)Nuptune\t\t2)Mercury");
     printf("\n3) Jupiter\t\t4) Venus");
     printf("\nSelect Option:");
     scanf("%d",&ans);
     if (ans==2)
     {
	 score+=5;
	 correct++;
     }
     else{
	wrong++;
     }
  printf("Q2.the largest planet in our solar system is ?");
  printf("\n1)Jupiter\t\t2)Neptune");
  printf("\n3)Mercury\t\t4)Venus");
	  printf("\nSelect Option:");
	  scanf("%d",&ans);
if (ans==1)
{
    score+=5;
    correct++;
}
else
{
    wrong++;
}
printf("Q3. How many planets are there in solar system");

printf("\n1)5\t\t\t2)11");

printf("\n3)8\t\t\t4)9");

printf("Select Option:");

scanf("%d",&ans);
if (ans==3)
{
     score+=5;
     correct++;
}
else
{
    wrong++;
}
printf("Q4. Which is the smallest planet in the Solar System");

printf("\n1)Mercury\t\t2) Jupiter");

printf("\n3) Venus \t\t4)Saturn");

printf("\nSelect Option:");

scanf("%d",&ans);
if (ans==1)
{
    score+=5;
    correct++;
}
else
{
    wrong++;
}
printf("your score = %d",score);
printf("correct answer = %d",correct);
printf("wrong answer = %d",wrong);
getch();
return 0;
}