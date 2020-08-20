##############################################
#Name   : Smallest  
#Author : Luis Teixeira  
#Date   : 27-11-2018  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################
test.assert_equals(find_smallest_int([78, 56, 232, 12, 11, 43]), 11)
test.assert_equals(find_smallest_int([78, 56, -2, 12, 8, -33]), -33)
test.assert_equals(find_smallest_int([0, 1-2**64, 2**64]), 1-2**64)