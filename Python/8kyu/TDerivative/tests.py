##############################################  
#Name   : TDerivative  
#Author : Luis Teixeira  
#Date   : 12-05-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
@test.describe('Example Tests')
def example_tests():
    test.assert_equals(derive(7,8), "56x^7")
    test.assert_equals(derive(5,9), "45x^8")