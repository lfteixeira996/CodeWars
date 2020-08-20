// TODO: Replace examples and use TDD development by writing your own tests. The code provided here is just a how-to example.

#include <criterion/criterion.h>
#include <stdlib.h>
#include <string.h>

// replace with the actual method being tested
char* remove_bang(char*);

char* greetings[] = {"Hi", "Hi!", "Hi!!!!", "!Hi", "!Hi!", "Hi Hi!!", "Hi!\nHi"};
char* expected[] = {"Hi!", "Hi!", "Hi!", "Hi!", "Hi!", "Hi Hi!", "Hi\nHi!"};

Test(the_multiply_function, should_pass_all_the_tests_provided) {
  for(int i=0; i<sizeof(greetings)/sizeof(char*); i++) {
    char* modified = remove_bang(greetings[i]);
    cr_assert_eq(strcmp(modified, expected[i]), 0);
    free(modified);
	}
}