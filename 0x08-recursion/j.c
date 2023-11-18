#include <stdio.h>

int main()
{
	    int count, i;
	        char s[] = "Hello";
		    char ch;
		        i = 0;

			    for (i = 0; s[i] != '\0'; i++)
				        {
						        count++;
							    }
			        for (i = 0; i = count / 2; i++)
					    {
						            ch = s[i];
							            s[i] = s[count - i - 1];
								            s[count -i - 1] = ch;
									        }
				    printf("%s", s);
}
