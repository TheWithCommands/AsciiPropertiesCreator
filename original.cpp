//包含重要库 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *asciip;
    int width,i;
    asciip=fopen("ascii.properties","r"); //查找文件 
    
    //显示介绍 
    printf("材质包内容 ascii.properties 生成工具\n");
	printf("by: The With Commands\n");
	printf("该工具写于2020年新冠病毒哀悼活动期间，即2020年4月4日。\n\n") ;
	printf("愿逝者安息，愿生者奋发，愿祖国昌盛。\n\n");
	
	//如果文件不存在就创建，反之提示 
	if(asciip==NULL)asciip=fopen("ascii.properties","w");
    else while(1)
    {
    	fclose(asciip);
    	printf("存在现有文件，请先将其移动到其他位置，");
    	printf("然后按任意键。\n");
    	system("pause>nul");
    	asciip=fopen("ascii.properties","r");
    	if(asciip==NULL)
		{
			asciip=fopen("ascii.properties","w");
			break;
		}
	}
	
	//运行 
    for(i=0x21;i<0xb0;i++)
    {
    	printf("字符十六进制代码定向目前是 %xh，请输入宽度。\n",i);
    	scanf("%d",&width);
    	if(width>7)while(1)
    	{
    		printf("据 Optifine 要求，宽度不能超过 7，请重新输入。\n");
    	 	scanf("%d",&width);
    	 	if(width>7);else break;
		}
		fprintf(asciip,"width.%d=%d\n",i,width+1);
	}
	for(i=0xe0;i<0xff;i++)
	{
    	printf("字符十六进制代码定向目前是 %xh，请输入宽度。\n",i);
    	scanf("%d",&width);
    	if(width>7)while(1)
    	{
    		printf("据 Optifine 要求，宽度不能超过 7，请重新输入。\n");
    	 	scanf("%d",&width);
    	 	if(width>7);else break;
		}
		fprintf(asciip,"width.%d=%d\n",i,width+1);
	}
	fclose(asciip); //完成操作，关闭文件 
	printf("已经完成生成一个 ascii.properties 文件。按任意键退出。");
	system("pause>nul");
}
