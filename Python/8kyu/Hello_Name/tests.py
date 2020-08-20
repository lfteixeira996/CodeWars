##############################################
#Name   : Hello_Name  
#Author : Luis Teixeira  
#Date   : 20-11-2018  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################

test.describe("Example Tests")

tests = (
    ("John", "Hello, John!"),
    ("aLIce", "Hello, Alice!"),
    ("", "Hello, World!"),
)

for inp, exp in tests:
    test.assert_equals(hello(inp), exp)

test.assert_equals(hello(), "Hello, World!")