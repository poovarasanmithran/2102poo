#include <stdio.h>
int main(void)
{
	int i;
	char str[1000];
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(i==0 )
		{
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32;
				
			}
		}
	          if(str[i]==' ')
		{
			++i;
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32;
			}
		}
	}
	printf("%s",str);
	return 0;
}
