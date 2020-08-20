##############################################  
#Name   : Build_Tower  
#Author : Luis Teixeira  
#Date   : 19-05-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
test.describe("Tests")
test.it("Basic Tests")
test.assert_equals(tower_builder(1), ['*', ])
test.assert_equals(tower_builder(2), [' * ', '***'])
test.assert_equals(tower_builder(3), ['  *  ', ' *** ', '*****'])