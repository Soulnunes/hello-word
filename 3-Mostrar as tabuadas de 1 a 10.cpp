/*Mostrar as tabuadas de 1 a 10*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num=1,multi=1,res;
    while(multi<=10)
	{
	   while(num<=10)
	  {
		printf("%d x %d= ",num,multi);
		res=num*multi;
		printf("%d\n",res);
		num++;
	
	  } 
	  printf("\n");
	  num=1;
	  multi++; 
    }
    
	return(0);
	system("pause>>NULL");
}
