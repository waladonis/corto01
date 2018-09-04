#include <stdio.h>
#include <stdlib.h>  


int main()
{
    int f,c;
    int m1[f][c];
    int m2[f][c];
    int mR[f][c];
    int cont,contz,x,w,opcion;
    
        printf("Introduzca n filas: "); 

        scanf("%d",&f); 

        printf("Introduizca n columnas: "); 

        scanf("%d",&c); 
        
       for(x=0;x<=f-1;x++){      
            for(w=0;w<=f-1;w++){
                printf("m1[%d][%d]=",x,w);
                scanf("%d",&cont);
                m1[x][w]=cont;
              
            }
        }


            cont=0;
            for(x=0;x<=f-1;x++){     
            for(w=0;w<=f-1;w++){
                printf("m2[%d][%d]=",x,w);
                scanf("%d",&cont);
                m2[x][w]=cont;
                
            }
        }


    printf("Matriz M1:\n");
    for(x=0;x<=f-1;x++){             
        for(w=0;w<=f-1;w++){
            printf("%d",m1[x][w]);
        }
        printf("\n");
    }

        printf("Matriz M2:\n");
    for(x=0; x<=f-1;x++){              
        for(w=0;w<=f-1;w++){
            printf("%d",m2[x][w]);
        }
        printf("\n");
}
 printf("\n\nResultado de multiplicasion de la matriz es:\n\n");
   

int i,j,k,b,contb;
for(i=0;i<=f-1;i++){
    for(j=0;j<=c-1;j++){
        mR[i][j]=0;
        for(k=0;k<=c-1;k++){
            mR[i][j]=(mR[i][j]+(m1[i][k]*m2[k][j]));
        }
        printf("%d ",mR[i][j]);
          }
          printf("\n");
}

 // numeros primos
 
 
 /*
   for (i = 0; i <=f-1; i++) {
      for (j = 0; j <=c-1; j++) {
         b = 1;
         contb = 0;
         while ( (b <= mR[i][j]) ) {
            if ( (mR[i][j] % b) == 0) {
               contb = contb + 1;
            }
            b = b + 1;
         }
         if (contb == 2)
            printf("a[%d][%d] == %d\n", i, j, mR[i][j]);
      }
   }
   */

    return 0;
}
