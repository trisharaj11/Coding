// #include <stdio.h>
// int ways(int cr,int cc,int er,int ec){
//     int rightways=0;
//     int downways=0;
//     if(cr==er && cc==ec) return 1;
//     if(cr==er){//only right
//        rightways += ways(cr,cc+1,er,ec);
//     }
//     if(cc==ec){//only down
//         downways += ways(cr+1,cc,er,ec);
//     }
//     if(cr<er && cc<ec){   
//      rightways=ways(cr,cc+1,er,ec);
//      downways=ways(cr+1,cc,er,ec);
//     } 
//     int totalways=rightways+downways;
//     return totalways;
// }

// int main()
// {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     int m;
//     printf("Enter m: ");
//     scanf("%d",&m);
//     int path=ways(1,1,n,m);
//     printf("The ways are %d",path);
// }


//2nd method
#include <stdio.h>
int ways(int x,int y){
    int rightways=0;
    int downways=0;
    if(x==1 && y==1) return 1;
    if(x==1){//only right
       rightways += ways(x,y-1);
    }
    if(y==1){//only down
        downways += ways(x-1,y);
    }
    if(x>1 && y>1){   
     rightways=ways(x,y-1);
     downways=ways(x-1,y);
    } 
    int totalways=rightways+downways;
    return totalways;
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int m;
    printf("Enter m: ");
    scanf("%d",&m);
    int path=ways(n,m);
    printf("The ways are %d",path);
}

