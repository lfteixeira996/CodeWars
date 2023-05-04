##############################################  
#Name   : DNA to RNA Conversion  
#Author : Luis Teixeira  
#Date   : 04-05-2023  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
import codewars_test as test
from solution import dna_to_rna

@test.describe("Sample Tests")
def basic_tests():
    @test.it('Basic Test Cases')
    def basic_test_cases():
        test.assert_equals(dna_to_rna("TTTT"), "UUUU")
        test.assert_equals(dna_to_rna("GCAT"), "GCAU")
        test.assert_equals(dna_to_rna("GACCGCCGCC"), "GACCGCCGCC")