//Author: Samantha Zolin saz5193@psu.edu
//Collaborator: 
//Collaborator:
//Collaborator:
#include <stdio.h>

int main(void) {
  printf("Enter your CMPSC 131 grade: ");
  double d;
  

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
