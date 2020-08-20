##############################################  
#Name   : Dominates_Array  
#Author : Luis Teixeira  
#Date   : 19-05-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
Test.assert_equals(dominator([3,4,3,2,3,1,3,3]),3)
Test.assert_equals(dominator([1,2,3,4,5]),-1)
Test.assert_equals(dominator([1,1,1,2,2,2]),-1)
Test.assert_equals(dominator([1,1,1,2,2,2,2]),2)
Test.assert_equals(dominator([]),-1)