##############################################  
#Name   : who_likes_it  
#Author : Luis Teixeira  
#Date   : 26-09-2019  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
Test.assert_equals(likes([]), 'no one likes this')
Test.assert_equals(likes(['Peter']), 'Peter likes this')
Test.assert_equals(likes(['Jacob', 'Alex']), 'Jacob and Alex like this')
Test.assert_equals(likes(['Max', 'John', 'Mark']), 'Max, John and Mark like this')
Test.assert_equals(likes(['Alex', 'Jacob', 'Mark', 'Max']), 'Alex, Jacob and 2 others like this')