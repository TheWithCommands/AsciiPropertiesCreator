//������Ҫ�� 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *asciip;
    int width,i;
    asciip=fopen("ascii.properties","r"); //�����ļ� 
    
    //��ʾ���� 
    printf("���ʰ����� ascii.properties ���ɹ���\n");
	printf("by: The With Commands\n");
	printf("�ù���д��2020���¹ڲ���������ڼ䣬��2020��4��4�ա�\n\n") ;
	printf("Ը���߰�Ϣ��Ը���߷ܷ���Ը�����ʢ��\n\n");
	
	//����ļ������ھʹ�������֮��ʾ 
	if(asciip==NULL)asciip=fopen("ascii.properties","w");
    else while(1)
    {
    	fclose(asciip);
    	printf("���������ļ������Ƚ����ƶ�������λ�ã�");
    	printf("Ȼ���������\n");
    	system("pause>nul");
    	asciip=fopen("ascii.properties","r");
    	if(asciip==NULL)
		{
			asciip=fopen("ascii.properties","w");
			break;
		}
	}
	
	//���� 
    for(i=0x21;i<0xb0;i++)
    {
    	printf("�ַ�ʮ�����ƴ��붨��Ŀǰ�� %xh���������ȡ�\n",i);
    	scanf("%d",&width);
    	if(width>7)while(1)
    	{
    		printf("�� Optifine Ҫ�󣬿�Ȳ��ܳ��� 7�����������롣\n");
    	 	scanf("%d",&width);
    	 	if(width>7);else break;
		}
		fprintf(asciip,"width.%d=%d\n",i,width+1);
	}
	for(i=0xe0;i<0xff;i++)
	{
    	printf("�ַ�ʮ�����ƴ��붨��Ŀǰ�� %xh���������ȡ�\n",i);
    	scanf("%d",&width);
    	if(width>7)while(1)
    	{
    		printf("�� Optifine Ҫ�󣬿�Ȳ��ܳ��� 7�����������롣\n");
    	 	scanf("%d",&width);
    	 	if(width>7);else break;
		}
		fprintf(asciip,"width.%d=%d\n",i,width+1);
	}
	fclose(asciip); //��ɲ������ر��ļ� 
	printf("�Ѿ��������һ�� ascii.properties �ļ�����������˳���");
	system("pause>nul");
}
