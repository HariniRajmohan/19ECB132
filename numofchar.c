#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,c=0;
	printf("Enter Sentence:");fgets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			c++;
		}
    }
    printf("the number of characters in provided sentence is %d",c);
    getc();
}

