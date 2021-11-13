//Important libraries
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *asciip;
    int width,i;
    asciip=fopen("ascii.properties","r"); //Search file
    
    //View more information
    printf("Ascii Properties Creator\n");
    printf("by: The With Commands\n\n");
	
    //If the file does not exist, it will be created. If not, remind.
    if(asciip==NULL)asciip=fopen("ascii.properties","w");
    else while(1)
    {
    	fclose(asciip);
    	printf("here is an existing file, please move it to another location, ");
    	printf("and then press any key.\n");
    	system("pause>nul");
    	asciip=fopen("ascii.properties","r");
    	if(asciip==NULL)
		{
			asciip=fopen("ascii.properties","w");
			break;
		}
	}
	
    //Run
    for(i=0x21;i<0xb0;i++)
    {
    	printf("Character hex code orientation is currently %xh, enter the width.\n",i);
    	scanf("%d",&width);
    	if(width>7)while(1)
    	{
    		printf("For Optifine requirements below 1.13, the width cannot exceed 7, please re-enter.\n");
    	 	scanf("%d",&width);
    	 	if(width>7);else break;
		}
		fprintf(asciip,"width.%d=%d\n",i,width+1);
	}
	for(i=0xe0;i<0xff;i++)
	{
    	printf("Character hex code orientation is currently %xh, enter the width.\n",i);
    	scanf("%d",&width);
    	if(width>7)while(1)
    	{
    		printf("For Optifine requirements below 1.13, the width cannot exceed 7, please re-enter.\n");
    	 	scanf("%d",&width);
    	 	if(width>7);else break;
		}
		fprintf(asciip,"width.%d=%d\n",i,width+1);
	}
	fclose(asciip); //Done
	printf("Finished generating an ascii.properties file. Press any key to exit.");
	system("pause>nul");
}
