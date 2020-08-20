/***************************************
#Name   : Remove_URL  
#Author : Luis Teixeira  
#Date   : 21-01-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/
#include <criterion/criterion.h>
#include <stdlib.h>

char *remove_url_anchor(const char *url_in);

Test(Example_Tests, should_pass_all_the_tests_provided) {
  {
    char *submission = remove_url_anchor("www.codewars.com#about");
    char *expected = "www.codewars.com";
    if(submission) {
        cr_expect_str_eq(submission, expected, "submitted: %s\nexpected:  %s", submission, expected);
        free(submission); submission = NULL;
    }
    else cr_assert_fail("submitted: (NULL)\nexpected:  %s", expected);
  }
  {
    char *submission = remove_url_anchor("www.codewars.com/katas/?page=1#about");
    char *expected = "www.codewars.com/katas/?page=1";
    if(submission) {
        cr_expect_str_eq(submission, expected, "submitted: %s\nexpected:  %s", submission, expected);
        free(submission); submission = NULL;
    }
    else cr_assert_fail("submitted: (NULL)\nexpected:  %s", expected);
  }
  {
    char *submission = remove_url_anchor("www.codewars.com/katas/");
    char *expected = "www.codewars.com/katas/";
    if(submission) {
        cr_expect_str_eq(submission, expected, "submitted: %s\nexpected:  %s", submission, expected);
        free(submission); submission = NULL;
    }
    else cr_assert_fail("submitted: (NULL)\nexpected:  %s", expected);
  }
}