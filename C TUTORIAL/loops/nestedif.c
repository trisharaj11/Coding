/*#include <stdio.h>
int main()
{
  int n;
  printf("ENTER NUMBER:");
  scanf("%d",&n);
  if(n%5==0){
    if(n%3==0){
      printf("THE NUMBER IS DIVISIBLE BY 5 AND 3");
    }
    else{
      printf("THE NUMBER IS NOT DIVISIBLE BY 3 AND 5");
    }
  }else{
    printf("THE NUMBER IS NOT DIVISIBLE BY 5 AND 3");
  }
}*/

//divisible by 3 or 5but not by 15
/*#include <stdio.h>
int main()
{
  int n;
  printf("ENTER NUMBER:");
  scanf("%d",&n);
  // if(n%5==0 || n%3==0){
  //   if(n%15!=0){
  //   printf("NUMBER IS DIVISIBLE BY 5 or 3 but not by 15");
  // }
  // else{
  //   printf("THE NUMBER IS DIVISIBLE BY 15");
  // }
  // }
  if((n%5==0 || n%3==0) && n%15!=0){//wrong condition 
    printf("NUMBER IS DIVISIBLE BY 5 or 3 but not by 15");
  }
  else{
    printf(" DIVISIBLE BY 15");
  }
}*/

/*#include <stdio.h>
int main()
{
  int a,b,c;
  printf("ENTER a:");
  scanf("%d",&a);
  printf("ENTER b:");
  scanf("%d",&b);
  printf("ENTER c:");
  scanf("%d",&c);
  if(a>b){
    if(a>c){
      printf("%d is greatest",a);
      }else{
        printf("%d is greatest",c);
      }
    }else{
      if(b>c){
      printf("%d is greatest",b);
      }
      else{
        printf("%d is greatest",c);
      }
    }
  }*/

  /*#include <stdio.h>
  int main(){
    int ram,shyam,ajay;
    printf("ENTER age of RAM:");
    scanf("%d",&ram);
    printf("ENTER age of SHYAM:");
    scanf("%d",&shyam);
    printf("ENTER age of AJAY:");
    scanf("%d",&ajay);
    if(ram<shyam){
      if(ram<ajay){
        printf("RAM IS YOUNGEST");
      }else{
        printf("AJAY IS YOUNGEST");
      }
    }else{
      if(shyam<ajay){
        printf("SHYAM IS YOUNGEST");
      }else{
        printf("AJAY IS YOUNGEST");
      }
    }
}*/

// #include <stdio.h>
// int main()
// {
//     int marks;
//     printf("ENTER MARKS:");
//     scanf("%d",&marks);
//     if(marks>90 && marks<100){
//         printf("EXCELLENT");
//     }
//     else if(marks>80 && marks<90){
//         printf("VERY GOOD");
//     }
//     else if(marks>70 && marks<80){
//         printf("GOOD");
//     }
//     else if(marks>60 && marks<70){
//         printf("CAN DO BETTER");
//     }
//     else if(marks>50 && marks<60){
//         printf("AVERAGE");
//     } 
//     else if(marks>40 && marks<50){
//         printf("BELOW AVERAGE");
//     }
//     else if(marks<=40){
//         printf("FAIL");
//     }
    
//     return 0;
// }


//odd even
/*#include <stdio.h>
int main(){
    int n;
    printf("n is:");
    scanf("%d",&n);
    if(n%2==0){
      printf("EVEN NUMBER");
    }else{
      printf("ODD");
    }
  return 0;  
} */

//divisible by 5 or not
/*#include <stdio.h>
int main(){
  int n;
  printf("enter n");
  scanf("%d",&n);
  if(n%5==0){
    printf("divisible by 5");
  }else{
    printf("not divisible by 5");
  }
}*/

//leap year or not
/*#include <stdio.h>
int main(){
  int year;
  printf("enter year:");
  scanf("%d",&year);
  if(year%4==0){
    printf("leap year");
  }else{
    printf("not a leap year");
  }
  return 0;
}*/

//absolute value of int
/*#include <stdio.h>
int main(){
  int n;
  printf("enter n:");
  scanf("%d",&n);
  if(n<0){
    n=n*(-1);
  }printf("the absolute value is %d",n);
}*/

//profit loss
/*#include<stdio.h>
int main(){
  float cp,sp;
  printf("ENTER COST PRICE:");
  scanf("%f",&cp);
  printf("ENTER SELLING PRICE:");
  scanf("%f",&sp);
  if(sp>cp){
    printf("PROFIT");
  }
  else if(cp>sp){
    printf("LOSS");
  }
  else{
    printf("NO PROFIT NO LOSS");
  }
}*/

//area perimeter which is greater
/*#include <stdio.h>
int main(){
  float l,b,area,perimeter;
  printf("ENTER LENGTH:");
  scanf("%f",&l);
  printf("ENTER BREADTH:");
  scanf("%f",&b);
  area=l*b;
  perimeter=2*(l+b);
  if(area>perimeter){
    printf("AREA IS GREATER THAN PERIMETER");
  }
  else if(perimeter>area){
    printf("PERIMETER IS GREATER THAN AREA");
  }
  else{
    printf("BOTH ARE EQUAL");
  }
  return 0;
  }*/

//multiple condition using && and ||
//take threee digit input and check it is a three digit or not
/*#include <stdio.h>
int main(){
  int n;
  printf("ENTER NUMBER:");
  scanf("%d",&n);
  if(n>99 && n<1000){
    printf("THREE DIGIT NUMBER");
  }
  else{
    printf("NOT A THREE DIGIT NUMBER");
  }
}*/

//divisible by 5 and 3
/*#include <stdio.h>
int main(){
  int n;
  printf("ENTER NUMBER:");
  scanf("%d",&n);
  if(n%5==0 && n%3==0){
    printf("NUMBER IS DIVISIBLE BY 5 AND 3");
  }
  else{
    printf("NOT DIVISIBLE BY 5 AND 3");
  }
}*/

//divisible by 5 or 3
/*#include <stdio.h>
int main(){
  int n;
  printf("ENTER NUMBER:");
  scanf("%d",&n);
  if(n%5==0 || n%3==0){
    printf("NUMBER IS DIVISIBLE BY 5 or 3");
  }
  else{
    printf("NOT DIVISIBLE BY 5 or 3");
  }
}*/

//greatest of three
/*#include <stdio.h>
int main()
{
  int a,b,c;
  printf("ENTER a:");
  scanf("%d",&a);
  printf("ENTER b:");
  scanf("%d",&b);
  printf("ENTER c:");
  scanf("%d",&c);
  if(a>b && a>c){
    printf(" %d IS GREATEST",a);
  }
  else if(b>a && b>c){
    printf("%d IS GREATEST",b);
  }
  else if(c>a && c>b){
    printf("%d IS GREATEST",c);
  }

}*/

//greatest of four num
/*#include <stdio.h>
int main()
{
  int a,b,c,d;
  printf("ENTER a:");
  scanf("%d",&a);
  printf("ENTER b:");
  scanf("%d",&b);
  printf("ENTER c:");
  scanf("%d",&c);
  printf("ENTER d:");
  scanf("%d",&d);
  if(a>b && a>c && a>d){
    printf(" %d IS GREATEST",a);
  }
  else if(b>a && b>c && b>d){
    printf("%d IS GREATEST",b);
  }
  else if(c>a && c>b && c>d){
    printf("%d IS GREATEST",c);
  }
  else if(d>a && d>c && d>b){
    printf("%d IS GREATEST",d);
  }
}*/

//take 3 input and tell if they can be the sides of a triangle or not
/*#include <stdio.h>
int main()
{
  int a,b,c;
  printf("ENTER a:");
  scanf("%d",&a);
  printf("ENTER b:");
  scanf("%d",&b);
  printf("ENTER c:");
  scanf("%d",&c);
  if((a+b)>c && (a+c)>b && (b+c)>a){
    printf("VALID TRIANGLE SIDES");
  }
  else{
    printf("INVALID TRIANGLE SIDES");
  }
}*/

//youngest of three
/*#include <stdio.h>
int main()
{
  int ram,shyam,ajay;
  printf("ENTER age of RAM:");
  scanf("%d",&ram);
  printf("ENTER age of SHYAM:");
  scanf("%d",&shyam);
  printf("ENTER age of AJAY:");
  scanf("%d",&ajay);
  if(ram<shyam && ram<ajay){
    printf(" RAM IS YOUNGEST");
  }
  else if(shyam<ram && shyam<ajay){
    printf("SHYAM IS YOUNGEST");
  }
  else if(ajay<shyam && ajay<ram){
    printf("AJAY IS YOUNGEST");
  }
}*/

