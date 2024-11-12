// #include <stdio.h>
// int main()
// {
//     int i;
//     for(i=1;i<=100;i++){
//         printf("%d ",i);
//     }printf("%d",i);
// }

// #include <stdio.h>
// int main()
// {
//     int i;
//     for(i=1;i<=100;i++){
//         if(i%2==0){
//             printf("%d ",i);
//         }
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int i;
//     for(i=1;i<=100;i++){
//         if(i%2!=0){
//             printf("%d ",i);
//         }
//     }
// }

//table of 19
// #include <stdio.h>
// int main()
// {
//     int i;
//     for(i=19;i<=190;i++){
//         if(i%19==0){
//             printf("%d ",i);
//         }
//     }
// }

//TABLE OF n 
// #include <stdio.h>
// int main()
// {
//     int n,i;
//     printf("ENTER n:");
//     scanf("%d",&n);
//     for(i=n;i<=n*10;i=i+n){
//         if(i%n==0){
//             printf("%d ",i);
//         }
//     }
// }

// AP OF ODD
// #include <stdio.h>
// int main()
// {
//     int n,i;
//     printf("ENTER n:");
//     scanf("%d",&n);
//     for(i=1;i<=2*n-1;i=i+2){
//         printf("%d ",i);
//     }
// }


//AP
// #include <stdio.h>
// int main()
// {
//     int n,i;
//     printf("ENTER n:");
//     scanf("%d",&n);
//     for(i=4;i<3*n+1;i=i+3){
//         printf("%d ",i);
//     }
// }

//AP without Maths...4 7 10 13 16....n terms
// #include <stdio.h>
// int main()
// {
//     int n,i;
//     printf("ENTER n:");
//     scanf("%d",&n);
//     int a=4;//starting term of AP
//     for(i=1;i<=n;i++){

//         printf("%d ",a);
//         a=a+3;//sum the common difference with starting term
//     }
// }

//GP FOR N TERMS
// #include <stdio.h>
// int main() 
// {
//     int a=1;
//     int n;
//     printf("ENTER n:");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         printf("%d ",a);
//         a=a*2;
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int a=3;
//     int n;
//     printf("ENTER N:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("%d ",a);
//         a=a*4;//common ratio *starting term
//     }
// }


//till positive n terms ap
// #include <stdio.h>
// int main()
// {
//     int a=100;
//     for(int i=1;a>0;i++){
//         printf("%d ",a);
//         a=a-3;
    
//     }
//         return 0;
// }

// #include <stdio.h>
// int main() 
// {
//     float a=100;
//     float n;
//     printf("ENTER n:");
//     scanf("%f",&n);

//     for(int i=1;i<=n;i++){
//         printf("%f ",a);
//         a=a*0.5;
//     }
// }

//WAP TO CHECK IF A NUMBER IS PRIME OR NOT

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("ENTER n:");
//     scanf("%d",&n);
//     int a=0;
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//         a=1;
//         break;
// }
//     }if(a==0){
//         printf("PRIME NUMBER");
//     }else if(n==1){
//         printf("NEITHER PRIME NOR COMPOSITE");
//     }else{
//         printf("COMPOSITE NUMBER");
//     }
// }


