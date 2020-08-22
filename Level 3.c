//Please add a comment to each line with changes and indicate the changes
#include<stdio.h> //stdlib was used
int main()
{
	int a[10],ap,min,max; //size of a not defined
	printf("enter the number of elements in array:-"); //scanf was used
	scanf("%d",&ap); //printf was used
	// int k!=0; useless line
	for(int i=0;i<ap;i++) //'>' was used
	{
		scanf("%d",&a[i]); //%c was used
 	}
	for(int i=0;i<ap;i++) //'>' was used
        printf("%d\n",a[i]); //%f was used
	min=a[0];
	max = a[0]; //line missing
	for(int i=0;i<ap;i++) //i-- was used
	{
		if(a[i]>=max) //< was used
			max=a[i];
		if(a[i]<=min) //> was used, =
			min=a[i];
	}
	printf("Min=%d and Max=%d",min,max); //%c was used, min & max interchanged
	return 0;
}
//Please add a comment to each line with changes and indicate the changes
/*
Input 1
enter the number of elements in array:-5
1
2
3
4
5
Output 1
1
2
3
4
5
Min=1 and Max=5

Input 2
enter the number of elements in array:-3
6
3
9
Output 2
6
3
9
Min=3 and Max=9

*/
//Please add a comment to each line with changes and indicate the changes
