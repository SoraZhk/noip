#include<stdio.h>
#include<string.h>
int main()
{
	char ch[205];
	int i;
	while(gets(ch)&&strcmp(ch,"ENDOFINPUT")!=0)
	{
		gets(ch);
		for(i=0;ch[i]!='\0';i++)
		{
			if(ch[i]>='A'&&ch[i]<='Z')
			{
				if(ch[i]<='E') putchar(ch[i]+21);
				else putchar(ch[i]-5);
			}
			else putchar(ch[i]);
		}
		putchar('\n');
		gets(ch);
	}
}
