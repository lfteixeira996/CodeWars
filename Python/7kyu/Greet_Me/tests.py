##############################################  
#Name   : Greet_Me  
#Author : Luis Teixeira  
#Date   : 22-07-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  

@test.describe('Example Tests')
def example_tests():
    test.assert_equals(greet('riley'), 'Hello Riley!')
    test.assert_equals(greet('molly'), "Hello Molly!")
    test.assert_equals(greet('BILLY'), "Hello Billy!")