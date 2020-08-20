##############################################
#Name   : Sum_of_Positive  
#Author : Luis Teixeira  
#Date   : 23-11-2018  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################

Test.describe("positive_sum")

Test.it("works for some examples")
Test.assert_equals(positive_sum([1,2,3,4,5]),15)
Test.assert_equals(positive_sum([1,-2,3,4,5]),13)
Test.assert_equals(positive_sum([-1,2,3,4,-5]),9)

Test.it("returns 0 when array is empty")
Test.assert_equals(positive_sum([]),0)

Test.it("returns 0 when all elements are negative")
Test.assert_equals(positive_sum([-1,-2,-3,-4,-5]),0)
