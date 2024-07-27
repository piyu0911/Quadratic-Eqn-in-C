#include<math.h>
main()
{
      float a,b,c,term,x1,x2;
      clrscr();
      printf("Enter the values of a,b,c:");
      scanf("%f %f %f ",&a,&b,&c);
      term = b*b-4*a*c;
      if (term<0){
          printf("Roots are imaginary");
      }
      if (term == 0){
          printf("Roots are real and equal.\n");
      
          x1 = -b/(2*a);
          x2 = x1;
          printf("x1 = %f x2 = %f",x1,x2);
      }
      if (term>0){
          printf("Roots are real and distinct\n");
          x1 = (-b + sqrt(term))/(2*a);
          x2 = (-b-sqrt(term))/(2*a);
          printf("x1 = %f x2 = %f",x1,x2);
      }
      getch();
}
