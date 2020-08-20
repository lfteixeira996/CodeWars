##############################################  
#Name   : Basic_Calc  
#Author : Luis Teixeira  
#Date   : 19-05-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
def calculate(num1, operation, num2): 

    if operation == '+':
        return num1 + num2
       
    elif operation == '-':
        return num1 - num2
       
    elif operation == '*':
        return num1 * num2
    
    elif operation == '/':
        if num2 == 0:
            return None
        
        return num1/num2
        
    else:
        return None



######Another Approach######        
def calculate(num1, operation, num2):
    try:
        return eval(f'{num1}{operation}{num2}')
    except Exception:
        return