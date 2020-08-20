##############################################  
#Name   : Basic_Calc  
#Author : Luis Teixeira  
#Date   : 19-05-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  

@test.describe('Example Tests')
def example_tests():
    @test.it('Example Test Case')
    def example_test_case():
        test.assert_equals(calculate(3.2,"+", 8), 11.2, "3.2 + 8 = 11.2")
        test.assert_equals(calculate(3.2,"-", 8), -4.8, "3.2 - 8 = -4.8")
        test.assert_equals(calculate(3.2,"/", 8), 0.4, "3.2 / 8 = .4")
        test.assert_equals(calculate(3.2,"*", 8), 25.6, "3.2 * 8 = 25.6")
        test.assert_equals(calculate(-3,"+", 0), -3, "-3 + 0 = -3")
        test.assert_equals(calculate(-3,"-", 0), -3, "-3 - 0 = -3")
        test.assert_equals(calculate(-2, "/", -2), 1, "-2 / -2 = 1")
        test.assert_equals(calculate(-3,"*", 0), 0, "-3 * 0 = 0")
    @test.it('Edge Cases')
    def edge_case_tests():
        test.assert_equals(calculate(-3,"/", 0), None, "-3 / 0 = None")
        test.assert_equals(calculate(-3,"w", 0), None, "-3 w 0 = None")
        test.assert_equals(calculate(-3,"w", 1), None, "-3 w 1 = None")
