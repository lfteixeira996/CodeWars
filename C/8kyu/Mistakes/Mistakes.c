/***************************************
#Name   : Mistakes  
#Author : Luis Teixeira  
#Date   : 23-11-2018  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/
char *correct(char *str)
{
  char *prt = str;

	while(*prt != '\0')
	{
		switch(*prt)
		{
			case '5':	*prt = 'S'; 
						break;

			case '0':	*prt = 'O'; 
						break;

			case '1':	*prt = 'I'; 
						break;
		}

		prt++;
	}

  return str;
}