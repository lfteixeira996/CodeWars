##############################################  
#Name   : Dominates_Array  
#Author : Luis Teixeira  
#Date   : 19-05-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
@test.describe('Example Tests')
def example_tests():

    test.assert_equals(dominator([3,4,3,2,3,1,3,3]),3)
    test.assert_equals(dominator([1,2,3,4,5]),-1)
    test.assert_equals(dominator([1,1,1,2,2,2]),-1)
    test.assert_equals(dominator([1,1,1,2,2,2,2]),2)
    test.assert_equals(dominator([]),-1)
