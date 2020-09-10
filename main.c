//Author: Samantha Zolin saz5193@psu.edu
//Collaborator: 
//Collaborator:
//Collaborator:
//Section:
//Break out:
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  
  double d;
  printf("Enter your CMPSC 131 grade: ");

  scanf("%lf", &d);

  if(d>=93.0)
    printf("Your letter grade for CMPSC is A.");
  
  else if(d>=90.0)
    printf("Your letter grade for CMPSC is A-.");
   
  else if(d>=87.0)
    printf("Your letter grade for CMPSC is B+.");
  
  else if(d>=83.0)
    printf("Your letter grade for CMPSC is B.");
  
  else if(d>=80.0)
    printf("Your letter grade for CMPSC is B-.");
  
  else if(d>=77.0)
    printf("Your letter grade for CMPSC is C+.");
  
  else if(d>=70.0)
    printf("Your letter grade for CMPSC is C.");
  
  else if(d>=60.0)
    printf("Your letter grade for CMPSC is D.");
  
  else if(d<60.0)
    printf("Your letter grade for CMPSC is F.");
  
  else
    printf("Invalid");

  return 0;
}
