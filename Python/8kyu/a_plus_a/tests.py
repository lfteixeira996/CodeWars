##############################################  
#Name   : a_plus_a  
#Author : Luis Teixeira  
#Date   : 22-05-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
Test.it("Basic test")
Test.assert_equals(array_plus_array([1, 2, 3], [4, 5, 6]), 21)
Test.assert_equals(array_plus_array([-1, -2, -3], [-4, -5, -6]), -21)
Test.assert_equals(array_plus_array([0, 0, 0], [4, 5, 6]), 15)
Test.assert_equals(array_plus_array([100, 200, 300], [400, 500, 600]), 2100)