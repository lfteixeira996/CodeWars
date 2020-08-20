/************************************************  
 Author : Luis Teixeira  
 Date   : 20-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************************/

int basic_op(char op, int value1, int value2) {
  
	int ret;

	switch(op)
	{
		case '+': ret = value1+value2;
			break;


		case '-': ret = value1-value2;
			break;

				 
		case '*': ret = value1*value2;
			break;

				 
		case '/': ret = value1/value2;
			break;
	}
  
  	return ret;
}