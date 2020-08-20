##############################################  
#Name   : Printer_Error  
#Author : Luis Teixeira  
#Date   : 06-12-2018  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
Test.describe("printer_error")
Test.it("Basic tests")
s="aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyz"
Test.assert_equals(printer_error(s), "3/56")