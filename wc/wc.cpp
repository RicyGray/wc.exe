#include <stdio.h>
#include <stdlib.h>
int cnum=0;
int wnum=0;
int lnum=0; 
void count(char *file)
{
    FILE * fp;
    char a;
    if((fp=fopen(file,"r"))==NULL)
    {
        printf("read file failed£¡\n");
        exit(-1);
    }
    while(!feof(fp))
    {
        a=fgetc(fp);
        if(a!=' '&&a!='\n'&&a!='\t'&&a!=','&&a!='.')
            ++cnum;
        if(a==' '||a=='\n'||a==','||a=='.'||a=='!'||a=='='||a==';')
            ++wnum;
        if(a=='\n')
            ++lnum;
    }
    ++lnum;
    --wnum;         
    fclose(fp);
}
 
int main(int argc, char* argv[])             
{
    FILE *fp;
	void count(char *file);
    count(argv[2]);
    char a=*argv[1];
		if((fp=fopen(argv[2],"r"))==NULL)
    	{  
        	printf("FileNull\n");
    	}
    	switch(a)
		{
		case'w':printf("File:%s WordNum:%d\n",argv[2],wnum);break; 
		case'c': printf("File:%s CharNum:%d\n",argv[2],cnum);break;
		case'l': printf("File:%s LineNum:%d\n",argv[2],lnum);break;
		default: printf("NullPoint\n");
	   }   
    return 0;
     
}
