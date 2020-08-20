##############################################  
#Name   : Printer_Error  
#Author : Luis Teixeira  
#Date   : 06-12-2018  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
def printer_error(s):
    
    ok = 0
    count = 0
    
    for ch in s:
    	if ch<'a' or ch>'m':
    		ok +=1

    	count +=1	

    return str(ok)+'/'+str(count)	