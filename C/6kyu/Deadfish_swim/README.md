##############################################  
#Name   : Deadfish_swim  
#Author : Luis Teixeira  
#Date   : 06-01-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################

Write a simple parser that will parse and run Deadfish.

Deadfish has 4 commands, each 1 character long:

i increments the value (initially 0)
d decrements the value
s squares the value
o outputs the value into the return array
Invalid characters should be ignored.

parse("iiisdoso") == {8, 64}