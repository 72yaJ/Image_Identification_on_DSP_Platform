//#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int i,j;
const int Width=1440;
const int Height=960;
const int a=255;//ͼ����ʾʹ��
const int size=Height*Width;    
unsigned char pixels[Height][Width];
unsigned char pixels1[Height][Width];
unsigned char mid[size];

void DumpRawAsRaw(char*FileName, unsigned char*Img,int Imheight,int Imwidth)//���raw�ļ�
{
	FILE *fp = NULL;
	fp = fopen(FileName, "wb");
    if (fp == NULL) 
	{
    	return;
    }	
	for (int i =0 ; i<Imheight; i++)
	{
		for (int j=0; j<Imwidth; j++)
		{
			fwrite(&(Img[i*Imwidth+j]), 1, 1, fp);
		}
	}
	fclose(fp);
}                                                                              
//

int clamp_0_255(int x)//����ͼ������
{
	return (x < 129) ? a : 0;
}                     
//

void ZhongZhiLvBo21(unsigned char billPixel[Height][Width],int Imheight,int Imwidth)//��ֵ�˲�21*21
{	
	int num[21];
	for(int j=0;j<Imwidth;j++)//ȥͼ���Ե��ɫ
	{
		for(int i=0;i<10;i++)
		{
			billPixel[i][j]=0;
		}
		for(i=Imheight-1;i>Imheight-11;i--)
		{
			billPixel[i][j]=0;	
		}	    
	}
    for(int i=0;i<Imheight;i++)
	{
		for(int j=0;j<10;j++)
		{
			billPixel[i][j]=0;
		}
		for(j=Imwidth-1;j>Imwidth-11;j--)
		{
			billPixel[i][j]=0;	
		}	    
	}                         
    //
	for(i=10;i<Imheight-10;i++)
	{
		for(int j=10;j<Imwidth-10;j++)
		{
			/*for(int m=0;m<10;m++)
			{
				for(int n=10;n>0;n--)
				{
					num[m]=billPixel[i][j-n];
				}	
			}

			for(m=10;m<21;m++)
			{
				for(int n=0;n<11;n++)
				{
					num[m]=billPixel[i][j+n];
				}	
			}*/

			num[0]=billPixel[i][j-10];
            num[1]=billPixel[i][j-9];
            num[2]=billPixel[i][j-8];
			num[3]=billPixel[i][j-7];
			num[4]=billPixel[i][j-6];
			num[5]=billPixel[i][j-5];
            num[6]=billPixel[i][j-4];
            num[7]=billPixel[i][j-3];
			num[8]=billPixel[i][j-2];
			num[9]=billPixel[i][j-1];

			num[10]=billPixel[i][j];
            num[11]=billPixel[i][j+1];
            num[12]=billPixel[i][j+2];
			num[13]=billPixel[i][j+3];
			num[14]=billPixel[i][j+4];
			num[15]=billPixel[i][j+5];
            num[16]=billPixel[i][j+6];
            num[17]=billPixel[i][j+7];
			num[18]=billPixel[i][j+8];
			num[19]=billPixel[i][j+9];
			num[20]=billPixel[i][j+10];

			for(int h=0;h<21;h++)
			{
				for(int w=0;w<21;w++)
				{
					if (num[h]>num[w])
					{
						int t=0;
						t=num[w];
				    	num[w]=num[h];
                        num[h]=t;
					}		
				}
			}
            billPixel[i][j]=num[10];
		} 
	}


	for(i=10;i<Imheight-10;i++)
	{
		for(int j=10;j<Imwidth-10;j++)
		{
			/*for(int m=0;m<10;m++)
			{
				for(int n=10;n>0;n--)
				{
					num[m]=billPixel[i-n][j];
				}	
			}

			for(m=10;m<21;m++)
			{
				for(int n=0;n<11;n++)
				{
					num[m]=billPixel[i+n][j];
				}	
			}*/

			num[0]=billPixel[i-10][j];
            num[1]=billPixel[i-9][j];
            num[2]=billPixel[i-8][j];
			num[3]=billPixel[i-7][j];
			num[4]=billPixel[i-6][j];
			num[5]=billPixel[i-5][j];
            num[6]=billPixel[i-4][j];
            num[7]=billPixel[i-3][j];
			num[8]=billPixel[i-2][j];
			num[9]=billPixel[i-1][j];

			num[10]=billPixel[i][j];
            num[11]=billPixel[i+1][j];
            num[12]=billPixel[i+2][j];
			num[13]=billPixel[i+3][j];
			num[14]=billPixel[i+4][j];
			num[15]=billPixel[i+5][j];
            num[16]=billPixel[i+6][j];
            num[17]=billPixel[i+7][j];
			num[18]=billPixel[i+8][j];
			num[19]=billPixel[i+9][j];
			num[20]=billPixel[i+10][j];

			for(int h=0;h<21;h++)
			{
				for(int w=0;w<21;w++)
				{
					if (num[h]>num[w])
					{
						int t=0;
						t=num[w];
				    	num[w]=num[h];
						num[h]=t;
					}		
				}
			}
			billPixel[i][j]=num[10];
		} 
	}
	
	/*for(i=0;i<Imheight-20;i++)
	{
		for(int j=0;j<Imwidth-20;j++)
		{
			for(int m=0;m<21;m++)
			{
				for(int n=0;n<21;n++)
				{
					num[m]=billPixel[i][j+n];
				}	
			}
			for(int h=0;h<21;h++)
			{
				for(int w=0;w<21;w++)
				{
					if (num[h]>num[w])
					{
						int t=0;
						t=num[w];
				    	num[w]=num[h];
                        num[h]=t;
					}		
				}
			}
            billPixel[i][j+10]=num[10];
		} 
	}

	for(i=0;i<Imheight-20;i++)
	{
		for(int j=0;j<Imwidth-20;j++)
		{
			for(int m=0;m<21;m++)
			{
				for(int n=0;n<21;n++)
				{
					num[m]=billPixel[i+n][j];
				}	
			}
			for(int h=0;h<21;h++)
			{
				for(int w=0;w<21;w++)
				{
					if (num[h]>num[w])
					{
						int t=0;
						t=num[w];
				    	num[w]=num[h];
						num[h]=t;
					}		
				}
			}
			billPixel[i+10][j]=num[10];
		} 
	}*/
}
//

void ImagePengZhang(unsigned char billPixel[Height][Width],int Imheight,int Imwidth)//���ʹ���
{
	for(i=1;i<Imheight-1;i++)
	{
		for(j=1;j<Imwidth-1;j++)
		{
			if(billPixel[i-1][j-1]==a||
				billPixel[i-1][j]==a||
				billPixel[i-1][j+1]==a||
				billPixel[i][j-1]==a||
				billPixel[i][j]==a||
				billPixel[i][j+1]==a||
				billPixel[i+1][j-1]==a||
				billPixel[i+1][j]==a||
				billPixel[i+1][j+1]==a
				)
			{
				pixels1[i][j]=a;
			}
		}
	}
	for(i=0;i<Imheight;i++)
	{
		for(j=0;j<Imwidth;j++)
		{
			billPixel[i][j]=pixels1[i][j];
		}		
	}
}
//

void ImageFuShi(unsigned char billPixel[Height][Width],int Imheight,int Imwidth)//��ʴ����
{
	for(i=1;i<Imheight-1;i++)
	{
		for(j=1;j<Imwidth-1;j++)
		{
					
			if(
			    billPixel[i-1][j-1]==0||
				billPixel[i-1][j]==0||
				billPixel[i-1][j+1]==0||
				billPixel[i][j-1]==0||
				billPixel[i][j]==0||
				billPixel[i][j+1]==0||
				billPixel[i+1][j-1]==0||
				billPixel[i+1][j]==0||
				billPixel[i+1][j+1]==0
				)

			/*if(
				billPixel[i-1][j]==0||
				billPixel[i][j-1]==0||
				billPixel[i][j]==0||
				billPixel[i][j+1]==0||
				billPixel[i+1][j]==0
				)*/

			{
				pixels1[i][j]=0;
			}
		}
	}
	for(i=0;i<Imheight;i++)
	{
		for(j=0;j<Imwidth;j++)
		{
			billPixel[i][j]=pixels1[i][j];
		}		
	}
}
//

void ImageXiHua(unsigned char billPixel[Height][Width],int Imheight,int Imwidth)//ϸ������
{
	int t1,t2,m,n;
	int count;
	int finish=0;
	int num[5][5];

	while(!finish)
	{
		finish=1;
		for(i=2;i<Imheight-2;i++)
		{
			for(j=2;j<Imwidth-2;j++)
			{
				if(billPixel[i][j]==0)
				continue;
				//��������������
				t1=0;
				t2=0;
				for(m=0;m<5;m++)
				{
					for(n=0;n<5;n++)
					{
						if(billPixel[i+m-2][j+n-2]==a)
						{
							num[m][n]=1;
						}
						else
						{
							num[m][n]=0;
						}
					}
				}
				//��ʼ�ֱ��ж����������Ƿ����
				//t1
				//�ж��������ж��ٿɼ�����
				count=num[1][1]+num[1][2]+num[1][3]+num[2][1]+num[2][3]+num[3][1]+num[3][2]+num[3][3];
				if(count>=1 && count<=6)
				{
					//�������6����ɾ����Ӱ��������״
					t1=1;
				}
				else
				{
					continue;
				}
		
				//t2
				//�жϳ��е��������Ϊ��������
				count=0;
				if(num[1][2]==0 && num[1][1]==1)
					count++;
				if(num[1][1]==0 && num[2][1]==1)
					count++;
				if(num[2][1]==0 && num[3][1]==1)
					count++;
				if(num[3][1]==0 && num[3][2]==1)
					count++;
				if(num[3][2]==0 && num[3][3]==1)	
					count++;
				if(num[3][3]==0 && num[2][3]==1)
					count++;
				if(num[2][3]==0 && num[1][3]==1)
					count++;
				if(num[1][3]==0 && num[1][2]==1)	
					count++;
				if(count==1)
				{
					//���������ֻ��һ��������ô����㲻�Ǳ����
					t2=1;
				}	
				else	
				{	
					continue;	
				}	
				//********************����չ����*********************//

		
				//***************************************************//
		
				//���ǰ�������������㣬��ô��������ȥ��	
				if(t1*t2==1)	
				{	
					billPixel[i][j]=0;		
					finish=0;	
				}	
			}	
		}
	}
}
//

int PanDuan(unsigned char billPixel[Height][Width],int Imheight,int Imwidth)//�ж�
{
	int count;

	for(i=1;i<Imheight-1;i++)
	{
		for(j=1;j<Imwidth-1;j++)
		{
			if(billPixel[i][j]==a)
			{
				count=billPixel[i-1][j-1]+billPixel[i-1][j]+billPixel[i-1][j+1]+
				billPixel[i][j-1]+billPixel[i][j+1]+
				billPixel[i+1][j-1]+billPixel[i+1][j]+billPixel[i+1][j+1];
			
				if(count>1)
				{
					return(1);
//					break;
				}
				else
				{
					continue;
				}

			}
		}
	}
	return(0);
}

void main()
{
    FILE *Image;
	int q=0;
    char filename[]="result.raw";

	char pic_name[30];//����ͼ������
	for(i =0; i< 30; i++)
	{
		pic_name[i] = 0;
	}
	printf("\nPlease input the picture's name(such as vc.raw)...\n");
	scanf("%s", pic_name);
	if((Image = fopen(pic_name, "rb")) == NULL)
	{
		printf("can't open the file1\n");
	}                 
	//                                                 
    
//	if((Image=fopen("buhege4.raw", "rb"))==NULL)//����ͼ��
//	{
//		printf("can't open the file1\n");
//	}                                           
	//

	for (int i=0; i<Height; i++)//����ͼ������
	{
		for (int j=0; j<Width; j++)
		{
			int val=0;
			fread(&val, 1, 1, Image);
			pixels[i][j] = clamp_0_255(val);
		}
	}
	//

	ZhongZhiLvBo21(pixels,Height,Width);//��ֵ�˲�21*21

	for(int t=0;t<11;t++)
	{
		ImagePengZhang(pixels,Height,Width);//����
	}

	for( t=0;t<18;t++)
	{
		ImageFuShi(pixels,Height,Width);//��ʴ
	}

	ImageXiHua(pixels,Height,Width);//ϸ��

	q = PanDuan(pixels,Height,Width);//�ж�

	if(q==1)
		printf("\n%s�ļ���ʾͼ��������!\n",pic_name);
	else
		printf("\n%s�ļ���ʾͼ��������!\n",pic_name);

//	if(q==1)
//		printf("\n��ͼ��������!\n");
//	else
//		printf("\n��ͼ��������!\n");

	for ( i=0; i<Height; i++)//���raw�ļ�
	{
		for (int j=0; j<Width; j++)
		{
			mid[i*Width+j] = pixels[i][j] ;
		}
	}
	DumpRawAsRaw(filename,mid,Height,Width);
	//

    fclose(Image);
    printf("\n");
}