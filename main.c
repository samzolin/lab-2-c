//Author: Samantha Zolin saz5193@psu.edu
//Collaborator: 
//Collaborator:
//Collaborator:
//Section: 1
//Break out:
#include <stdio.h>
#include <readline/readline.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char *lettergrade = readline("Enter your CMPSC 131 grade: ");
  double grade = atof(lettergrade);
  void printgrade ();
  if(grade >= 93.0){
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
    else if(grade >= 90.0) {
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
    else if(grade >= 87.0) {
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
    else if(grade >= 83.0) {
    printf("Your letter grade for CMPSC is B.\n");
  }
    else if(grade >= 80.0) {
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
    else if(grade >= 77.0) {
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
    else if(grade >= 70.0) {
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
    else if(grade >= 60.0) {
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
    else if(grade < 60.0) {
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
    else {
    printf("Invalid");
  }
  return 0;
}

 


  