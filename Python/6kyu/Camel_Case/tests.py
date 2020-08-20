##############################################  
#Name   : Camel_Case  
#Author : Luis Teixeira  
#Date   : 13-01-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
Test.describe("Basic tests")
Test.assert_equals(camel_case("test case"), "TestCase")
Test.assert_equals(camel_case("camel case method"), "CamelCaseMethod")
Test.assert_equals(camel_case("say hello "), "SayHello")
Test.assert_equals(camel_case(" camel case word"), "CamelCaseWord")
Test.assert_equals(camel_case(""), "")