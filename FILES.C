#include<stdio.h>
int main()
{
char ch;
FILE *fp;
fp=fopen("data.txt","w");
fprintf(fp,"learning a computer language was new to me.at the beginning i felt the chapter to be easy and understandable but it ain't last long,started to feel diffcult as the protion went deeper but some how i am carrying it forward hoping I would do good further");
fclose(fp);
fp=fopen("data.txt","a");
fprintf(fp,"I am comfortable with sir's teaching and I would suggest sir to solve more coding problem  at class,make sure to show codes at a laptop rather on the black board");
fclose(fp);
fp=fopen("data.txt","r");
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
return 0;
}
