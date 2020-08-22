//Please add a comment to each lines that has changes and Indicate the changes
#include<stdio.h>
int main() //'rnain' was used instead of main
{
 	int a,b, n=0; //;, char was used, variable missing
 	scanf("%d",&a); //%d was used, b
 	while(a!=0)
 	{
 		b=a%10; //was outside braces, redundant line
  		n=n*10+(b); //+, * interchanged, b changed to new variable, a%10 is redundant
  		a=a/10;
 	}//Please add a comment to each lines that has changes and Indicate the changes
 	printf("%d",n); //%c was used
 	return 0;
}
//Please add a comment to each lines that has changes and Indicate the changes
/*
Input 1
1234
Output 1
4321

Input 2
5667
Output 2
7665
*/



