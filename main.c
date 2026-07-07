#include<stdio.h>
#include<conio.h>
int main()
{
	// give num and i == 0 , so they cant get garbage value assigned
int num=0;
int i=0;
char genp[500];
srand(time(NULL));
printf("====== Password Generator ======\n");
  printf("Enter password length:");
  scanf("%d",&num);
//logic behind this ->>
char pool[500] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()-_=+[]{}<>?/|";
int poolsize = 89;
for(i=0;i<num;i++)
{
	int index= rand()% poolsize;
	genp[i]=pool[index];
}
genp[num] = '\0';
printf("Generated Password: %s\n",genp);

}
