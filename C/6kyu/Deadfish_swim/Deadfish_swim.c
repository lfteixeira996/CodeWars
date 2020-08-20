/***************************************
#Name   : Deadfish_swim  
#Author : Luis Teixeira  
#Date   : 06-01-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/

int* parse(char* program)
{
  
  int val = 0;
  int j = 0;
  int *res = malloc(sizeof(int) * strlen(program));
  
  for(int i=0; i<strlen(program); ++i)
  {
  	switch(program[i])
  	{
  		case 'i': 
  		{
  			++val;
  			break;	
  		}

  		case'd':
  		{
  			--val;
  			break;	
  		}

  		case's':
  		{
  			val *= val;
  			break;	
  		}

  		case'o':
  		{
  			res[j] = val;
  			++j;
  			break;	
  		}
  	}
  }

  return res;
}  

