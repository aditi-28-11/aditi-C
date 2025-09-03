#include<stdlib.h>
#include<stdio.h>
#include <unistd.h>
int main()
{
    int b, m,i,j,def[10][10];
    printf("number system and modulo number");
    scanf("%d%d",&b,&m);

    for (i=0;i<m;i++) {
        for (j=0;j<b;j++) {
            def[i][j]=((i*b)+j)%m;
        }
    }
        FILE *fp = fopen("graph1.dot", "w");
    if (fp == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
        fprintf(fp, "digraph G {\n");

        for (i=0;i<m;i++) {
            for (j=0;j<b;j++) {

    fprintf(fp, "   %d  ->%d [label=%d];\n",i,j,def[i][j]);
            }
        }
        fprintf(fp,"}");
        fclose(fp);
         execlp("dot", "dot", "-Tpng", "graph1.dot", "-o", "graph.png", NULL);

}
