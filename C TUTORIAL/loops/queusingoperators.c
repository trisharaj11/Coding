//WAP TO COUNT DIGITS OF A GIVEN NUMBER

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER n:");
//     scanf("%d",&n);
//     int count=0;
//     while(n>0){
//     n=n/10;
//     count++;
//     }
//     printf("THE NUMBER OF DIGITS ARE:%d",count);
//     return 0;
// }

//WAP TO PRINT SUM OF DIGITS OF A GIVEN NUMBER

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER A NUMBER: ");
//     scanf("%d",&n);
//     int sum=0;
//     int a=0;
//     while(n!=0){
//         a=n%10;
//         sum=sum+a;
//         n=n/10;

//     }printf("THE SUM OF DIGITS IS:%d",sum);
// }

//WAP TO PRINT EVEN DIGITS OF A NUMBER
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER A NUMBER: ");
//     scanf("%d",&n);
//     int sum=0;
//     int a=0;
//     while(n!=0){
//         a=n%10;
//         if(n%2==0){
//           sum=sum+a;
//         }n=n/10;
      
//     }printf("THE SUM IS:%d",sum);
// }

//WAP TO PRINT SUM OF ODD DIGITS OF A NUMBER
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER A NUMBER: ");
//     scanf("%d",&n);
//     int sum=0;
//     int a=0;
//     while(n!=0){
//         a=n%10;
//         if(n%2!=0){
//           sum=sum+a;
//         }n=n/10;
      
//     }printf("THE SUM IS:%d",sum);
// }

//WAP TO PRINT RVERSE OF A GIVEN NUMBER

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER A NUMBER WHICH IS TO BE REVERSED: ");
//     scanf("%d",&n);
//     int rev=0;
//     int lastDigit=0;
//     while(n!=0){
//         lastDigit=n%10;//for remainder
//         rev=rev*10+lastDigit;//for reversing
//         n=n/10;//for removing last digit
//     }printf("THE REVERSED NUMBER IS : %d",rev);
// }


// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER THE NUMBER: ");
//     scanf("%d",&n);
//     //1-2+3-4+5-6+7.....n terms
//     int sum=0;
//     for(int i=1;i<=n;i++){
//          if(i%2!=0) sum=sum+i;
//          else sum=sum-i;
//     }
//     printf("%d",sum);
// }




//using diff method
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER THE NUMBER: ");
//     scanf("%d",&n);
//     //1-2+3-4+5-6+7.....n terms
//     int sum=0;
//   
//      if(i%2!=0) {
    //       sum=(-n/2)+n;
//      }else {
   // sum=(-n/2);
  //  }
//     
//       printf("%d",sum);
// }


//factorial of a number
// #include <stdio.h>
// int main()
// {
//   int n;
//   printf("ENTER NUMBER TO FIND FACTORIAL: ");
//   scanf("%d",&n);
//   int prod=1;
//   for(int i=1;i<=n;i++){
//     prod=prod*i;
//     }
//     printf("THE FACTORIAL IS %d",prod);
// }



//FACTORIAL OF FIRST N TERMS
// #include <stdio.h>
// int main()
// {
//   int n;
//   printf("ENTER THE NUMBER: ");
//   scanf("%d",&n);
//   int prod=1;
//   for(int i=1;i<=n;i++){
//     prod=prod*i;
//     printf("THE FACTORIAL OF %d IS: %d\n ",i,prod);
//   }


//   return 0;
// }


//fibonaaci series
// #include <stdio.h>
// int main()
// {
//   int n;
//   printf("ENTER THE NUMBER: ");
//   scanf("%d",&n);
//   int a=1;
//   int b=1;
//   int sum=1;
//   for(int i=1;i<=n-2;i++){
//     sum=a+b;
//     a=b;
//     b=sum;
    
//   }printf("THE %dth FIBONACCI TERM IS %d",sum);


// }


// #include <stdio.h>
// int main()
// {
//   int n;
//   printf("ENTER THE NUMBER: ");
//   scanf("%d",&n);
//   int a=1;
//   int b=1;
//   int sum=1;
//   for(int i=1;i<=n-2;i++){
//     sum=a+b;
//     a=b;
//     b=sum;
//     printf("THE %d FIBONACCI TERM IS: %d\n",i,sum);
    
//   }


// }


//base to the power
// #include <stdio.h>
// int main(){
//   int a,b;
//   printf("ENTER BASE: ");
//   scanf("%d",&a);
//   printf("ENTER POWER: ");
//   scanf("%d",&b);
//   int power=1;
//   for(int i=1;i<=b;i++){
//     power=power*a;
//   }printf("%d RAISED TO THE POWER %d IS: %d\n",a,b,power);

// }


//2^n
// #include <stdio.h>
// int main(){
//   int a=2,b;
  
//   printf("ENTER POWER: ");
//   scanf("%d",&b);
//   int power=1;
//   for(int i=1;i<=b;i++){
//     power=power*a;
//     printf("%d RAISED TO THE POWER %d IS: %d\n",a,i,power);

//   }
// }


//for reversing a number
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER A NUMBER WHICH IS TO BE REVERSED: ");
//     scanf("%d",&n);
//     int rev=0;
//     int lastDigit=0;
//     while(n!=0){
//         lastDigit=n%10;//for remainder
//         rev=rev*10+lastDigit;//for reversing
//         n=n/10;//for removing last digit
//     }printf("THE REVERSED NUMBER IS : %d",rev);
// }

