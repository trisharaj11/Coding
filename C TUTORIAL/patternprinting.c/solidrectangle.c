// #include <stdio.h>
// int main()
// {
//     int n,m;
//     printf("ENTER no of Rows: ");
//     scanf("%d",&n);
//     printf("ENTER no of Columns: ");
//     scanf("%d",&m);
//     for(int i=1;i<=n;i++){//no of lines/rows
//         for(int j=1;j<=m;j++){//no of columns/stars
//             printf("* ");
//         }
//     printf("\n");//for next line
//     }
// }


//for same rosw and columns...star square
// #include <stdio.h>
// int main()
// {
//     int n,m;
//     printf("ENTER no of Rows: ");
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i++){//no of lines/rows
//         for(int i=1;i<=n;i++){//no of columns/stars
//             printf("*");
//         }
//     printf("\n");//for next line
//     }
// }



//12345\n12345....
//number rectangle
// #include <stdio.h>
// int main()
// {
//     int n,m;
//     printf("ENTER NO OF ROWS: ");
//     scanf("%d",&n);
//     printf("ENTER NO OF columns: ");
//     scanf("%d",&m);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             printf("%d ",j);
//         }printf("\n");
//     }
// }


// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER ROWS: ");
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("* ",j);
//         }printf("\n");
//     }

// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER N: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             printf("* ");
//         }printf("\n");
//     }
// }


//number triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter n: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
//         }printf("\n");
//     }
// }



// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter n: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             printf("%d ",j);
//         }printf("\n");
//     }
// }


// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter n: ");
//     scanf("%d",&n);
//     int a=n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=a;j++){
//             printf("%d ",j);
//         }
//             a--;
//         printf("\n");
//     }
// }


//odd number triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter n: ");
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i++){
//     int a=1;
//         for(int j=1;j<=i;j++){
            
//             printf("%d ",a);
//               a=a+2;
//             }
        
//         printf("\n");
//     }
// }



//alphabet square
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER n:");
//     scanf("%d",&n);
     
//     for(int i=1;i<=n;i++){
//          int a=1;  
//         for(int j=1;j<=n;j++){
//             int d=a+64;
//             char ch=(char)d;
//             printf("%c ",ch);
//             a++;
//         }printf("\n");
//     }
// }


//triangle alaphabet 
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter n: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1;j<=i;j++){
//             int d=a+64;
//             char ch=(char)d;
//             printf("%c ",ch);
//             a++;
//         }printf("\n");
//     }
// }



//plus star
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER n: ");
//     scanf("%d",&n);
//     int a;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             a=n/2+1;
//             if(j==a || i==a) printf("*");
//             else printf(" ");
//         }
//         printf("\n");
//     }
// }


 //hollow rectangle    
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER n: ");
//     scanf("%d",&n);  
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1 || i==n || j==1 || j==n) printf("*");
//             else printf(" ");
//         }printf("\n");
//     }  
// }


//cross star
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER n: ");
//     scanf("%d",&n); 
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==j || i+j==n+1) printf("*");
//             else printf(" ");
//         }printf("\n");
//     } 
// }


//number triangle 1 23 456 78910
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER n: ");
//     scanf("%d",&n);
//     int a=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
            
//             printf("%d",a);
//             a++;
//         }printf("\n");
//     }
   
//     }

//1 35 7911 13 1517....
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER n: ");
//     scanf("%d",&n);
//     int a=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
            
//             printf("%d ",a);
//             a+=2;
//         }printf("\n");
//     }
   
//     }

//1 01 101 0101...
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter n: ");
//     scanf("%d",&n);
//     int a;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0) a=1;
//             else a=0;
//         for(int j=1;j<=i;j++){
//             printf("%d ",a);
//             if(a==1) a=0;
//             else a=1;
            
//         }printf("\n");
//     }
// }


//2nd methof 1 01 101 0101
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter n: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if(i==j || (i+j)%2==0) printf("1 ");
//             else printf("0 ");
//         }printf("\n");


//     }
    
    //}


//mast triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER n: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){// for spaces
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++){
//                 printf("*");
//         }
//             printf("\n");
//     }
// }    


// alphabet mast triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER n: ");
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1;j<=n-i;j++){// for spaces
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++){
//             int d=a+64;
//             char ch=(char)d;
//                 printf("%c",ch);
//                 a++;
//         }
//             printf("\n");

// }   
// } 


//parallelogram
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER n: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){// for spaces
//             printf(" ");
//         }
//         for(int k=1;k<=(2*n-1);k++){
//                 printf("*");
//         }
//             printf("\n");
//     }
// }    

//star pyramid odd
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER n: ");
//     scanf("%d",&n);
//     int a=1;
//     for(int i=1;i<=n;i++){
//         for(int k=1;k<=n-i;k++){//spaces n=4 i=1 4-1=3....
//             printf(" ");
//         }
        
//         for(int j=1;j<=a;j++){
//             printf("*");
            
//         }a+=2;
//         printf("\n");
//     }
// }    


//number triangle 1 121 12321 1234321 123454321...
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter n: ");
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i++){//lines rows
//         int a=i-1;
//         for(int j=1;j<=n-i;j++){//spaces
//             printf(" ");
//         }for(int k=1;k<=i;k++){// number triangle 1 12 123 1234
//             printf("%d",k);
//         }for(int r=1;r<=i-1;r++){//for . 1 21 321
//             printf("%d",a);
//             a--;
//         }printf("\n");
//     }
// }


//alphabet pyramid
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i++){
        
//         int a=i-1;
        
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }for(int k=1;k<=i;k++){
//             char ch=(char)(k+64);
//             printf("%c",ch);
//         }for(int r=1;r<=i-1;r++){
//             char b=(char)(a+64);
//             printf("%c",b);
//             a--;

//         }printf("\n");
        
//     }
// }

//star diamond
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter n : ");
//     scanf("%d",&n);

// }


