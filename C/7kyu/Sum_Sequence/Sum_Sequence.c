/***************************************
#Name   : Sum_Sequence  
#Author : Luis Teixeira  
#Date   : 22-01-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/
unsigned sequence_sum(unsigned start, unsigned end, unsigned step)
{
	int ret = 0;

	if (start > end)
	{
		return 0;
	}

	for (int i = start; i <= end; i += step)
	{
		ret += i;
	}
	
  return ret;
}