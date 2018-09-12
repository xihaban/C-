#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	char xuehao[5];         //ѧ��
	char name[10];          //����
	char xingb[5];          //�Ա�
	int  sushe;             //�����
	char dianhua[11];       //�绰
	char kcID[10][10];		//�γ̱��
	char kcname[10][10];	//�γ�����
	int xuefen[10];			//ѧ��
	int chengji[10][3];	    //���ųɼ�
	double zonghe[10][2];   //���ճɼ�
	struct student *next;
	
};
void tt(struct student *p){
	int i=0;
	int j=0;
	for(i=0;i<10;i++)
		strcpy(p->kcID[i],"");		
	for(i=0;i<10;i++)
		strcpy(p->kcname[10],"");	
	for(i=0;i<10;i++)
		p->xuefen[i]=-1;		
	for(i=0;i<10;i++)
		for(j=0;j<3;j++)
			p->chengji[i][j]=0;	    
		for(i=0;i<10;i++)
			for(j=0;j<2;j++)
				p->zonghe[i][j]=0;   
}

struct student *ti_qu(struct student *head);         //��A�ı�¼�������Ϣ
void tiqu(struct student *head);                     //��B�ı�¼�������Ϣ
struct student *cha_ru(struct student *head);        //������Ϣģ��
void chaxun(struct student *head);                   //��ѯ��Ϣģ��
void display(struct student *head);                  //���ģ��
struct student *dele(struct student *head);          //ɾ������
void xiugai(struct student *head);		        	 //�޸�����
void bao_cunA(struct student *studenthead);          //����A����
void bao_cunB(struct student *studenthead);          //����B����
struct student *deleall(struct student *studenthead); //�ͷŽڵ�
int main()
{
	int m,d,count=0;
	char x[15],y[15]={"123"};
	struct student *head;
	head=NULL;
	printf("\n\n\t\t\t(*^__^*)--��ӭʹ��ѧ������ϵͳ--(*^__^*)\n\n\n\n\n");
	printf("\t���������ϵͳ����\n");
	scanf("%s",x);
	while((strcmp(x,y))&&count<4)   
	{
		
		count++;
		if(count==3)
		{
			printf("����������Ѵ�����\n\n\t\tлл����ʹ��!\t �ټ�!\n");
			exit(0);
		}
		printf("������������!����������!\n");
		scanf("%s",x);	
	}
	system("cls");                //�����Ļ��Ϣ
		while(1)
		{    
			printf("\n\n\n\n\t\t\t\t------����(0-5)ѡ��----\t\t\t\n");
			printf("\t\t-------���-----��ӭʹ��ѧ������ϵͳ-------���--------\n");	
			printf("\t\t*=====================================================*\n");
			printf("\t\t*   1.¼��ѧ����Ϣ   2.��ѯѧ����Ϣ    3.ɾ��ѧ����Ϣ *\n");
			printf("\t\t*\t\t\t\t\t\t      *\n");
			printf("\t\t*=====================================================*\n");	
			printf("\t\t*   4.�޸�ѧ����Ϣ  5.�������ѧ����Ϣ  6.����ѧ����Ϣ*\n");
			printf("\t\t*\t\t\t\t\t\t      *\n");
			printf("\t\t*=====================================================*\n");
			printf("\t\t*               0.�˳�ϵͳ                            *\n");
			printf("\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t����ѡ���� ");
			scanf("%d",&m);
			system("cls");                 //�����Ļ��Ϣ
			switch(m)
			{
			case 1:head=ti_qu(head);break;
			case 2:chaxun(head);break;
			case 3:head=dele(head);break;
			case 4:xiugai(head);break;
			case 5:display(head);break;
			case 6:head=cha_ru(head);break;
			case 0:
				printf("�Ƿ񱣴��޸ģ�1����\t2�����棡");
				scanf("%d",&d);
				if(d==1)
				{ bao_cunA(head);
				bao_cunB(head);}
				head=deleall(head);break;        //�˳�
			default:printf("\t��������\n");
			}
			if(m==0) break;
			system("pause");
			
		}
			system("cls");
		printf("\n\n\n\n\t��л����ʹ��!\t  �ټ�!\n\n\n");
		
}



struct student *ti_qu(struct student *studenthead)/////��A.txt�ĵ�����ȡ��Ϣ
{	
    FILE *fp;
	struct student *p,*studentp,*f;
	char h[20];
	int i=0;
	if((fp=fopen("A.txt","r"))==NULL)
	{
		printf("�ļ��������ڣ�");
		exit(0);
	} 
	studentp=studenthead;
    while(!feof(fp))
	{ 
		if(i!=0)
		{
			if((p=(struct student*)malloc(sizeof(struct student)))==NULL)//�����ڵ�
			{
				printf("�ڴ����");
				exit(0);
			}
			if(studenthead==NULL)
				studenthead=p;
			else
				studentp->next=p;        //���ӽڵ�
			f=studentp;
			studentp=p;
			fscanf(fp,"%s%s%s%d%s",studentp->xuehao,studentp->name,studentp->xingb,&studentp->sushe,studentp->dianhua);
			tt(studentp);
			tiqu(studentp);
			studentp->next=NULL;
		}else
		{
			for(i=0;i<5;i++)
				fscanf(fp,"%s",h);
		}
	}
    f->next=NULL;
	free(p);
	printf("��ȡ��ϣ�\n");
	fclose(fp);
	return studenthead;
}



void  tiqu(struct student *p) /////��B.txt�ĵ�����ȡ��Ϣ
{	
    FILE *fp;
	char h[20];
	int i=0;
	int y=0;
	char xuehao[10];
	char kcID[10];		//�γ̱��
	char kcID1[10]="fhjksdfhkdfjhdua";//�γ̱��
	char kcname[10];	//�γ�����
	int xuefen;	//ѧ��
	int chengji[3];	    //���ųɼ�
	double zonghe[2];   //���ճɼ�
	double sum=0;
	if((fp=fopen("B.txt","r"))==NULL)
	{
		printf("�ļ��������ڣ�");
		exit(0);
	} 
	while(!feof(fp))
	{ 
		if(i!=0)
		{
			
			fscanf(fp,"%s%s%s%d%d%d%d",xuehao,kcID,kcname,&xuefen,&chengji[0],&chengji[1],&chengji[2]);	
			
			if(!strcmp(xuehao,p->xuehao)&&strcmp(kcID,kcID1))
			{
				strcpy(kcID1,kcID);
				zonghe[0]=0;
				if(chengji[1]==-1)                       
				{
					sum=0.3*(chengji[0])+0.7*(chengji[2]);            //�������ݼ����ۺϳɼ�������������
					(zonghe[0])=sum;
					sum=0;
				}
				else {
					sum=0.15*(chengji[0])+0.15*(chengji[1])+0.7*(chengji[2]);
					zonghe[0]=sum;
					sum=0;
				}
				zonghe[1]=0;
				if((zonghe[0])>=90&&zonghe[0]<=100)           //�����ۺϳɼ���һ������ʵ��ѧ�ֲ�����������
					zonghe[1]=xuefen;
				else if((zonghe[0])>=80)
					zonghe[1]=xuefen*0.8;
				else if(zonghe[0]>=70)
					zonghe[1]=xuefen*0.75;
				else if(zonghe[0]>=60)
					zonghe[1]=xuefen*0.6;
				else 
					zonghe[1]=0;
				
				strcpy(p->kcID[y],kcID);
				strcpy(p->kcname[y],kcname);
				p->xuefen[y]=xuefen;
				p->chengji[y][0]=chengji[0];
				p->chengji[y][1]=chengji[1];
				p->chengji[y][2]=chengji[2];
				p->zonghe[y][0]=zonghe[0];
				p->zonghe[y][1]=zonghe[1];
				y++;
				
			}
		}
		else
		{
			for(i=0;i<7;i++)
				fscanf(fp,"%s",h);
		}
	}
	
	fclose(fp);
	
}


void display(struct student *studenthead)             //---------���������Ϣ
{
	FILE*fp;
	char ch;
	int i=0,j=0;
	struct student *p;
	printf("��ѡ��1���������Ϣ��2����ĵ���Ϣ��\n");
	scanf("%d",&i);
	if(i==1)
	{
		if(studenthead==NULL)
		{
			printf("�Ҳ���ѧ����Ϣ��\n");
			return;
		}
		p=studenthead;
		printf("ѧ��     ����      �Ա�       �������       �绰  \n");
		while(p!=NULL)
		{
			printf("%-10s%-10s%-10s%-10d%-10s\n",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);
			p=p->next;
		}
	}
	else if(i==2)
	{     
		printf("��ѡ��  1.ѧ��������Ϣ  2.ѧ���ɼ���Ϣ��\n");
		scanf("%d",&j);
		if(j==1)
		{
			if((fp=fopen("A.txt","r"))==NULL)
			{
				printf("�ļ��������ڣ��Ҳ���ѧ����Ϣ��");
				exit(0);}
			while(!feof(fp))
			{ 
				ch=fgetc(fp);
				putchar(ch);}
			fclose(fp);
		}
		else if(j==2)
		{
			if((fp=fopen("C.txt","r"))==NULL)
			{
				printf("�ļ��������ڣ��Ҳ���ѧ����Ϣ��");
				exit(0);}
			while(!feof(fp))
			{ 
				ch=fgetc(fp);
				putchar(ch);}
			fclose(fp);
		}
	}
}

///---------------------------��ѯ
void chaxun(struct student *head)     
{
	
	struct student *p;	
	char a[10],n[5];
	int m,k,l=0,x,j=0;                   //�����־l
	p=head;
	if(head==NULL)
	{
		printf("\t\tѧ����ϢΪ�գ�����¼��ѧ����Ϣ��\n\n");
		return ;
	}
	printf("\n\t\t-----���-----------���------\n");	
	printf("\t\t1.ѧ����Ϣ��ѯ      2.�ɼ���ѯ\n");
	printf("\t\t-----���-----------���------\n");	
	scanf("%d",&m);
	if(m==1)
	{
		m=0;
		printf("\n\t\t-----���-----------���------\n");	
		printf("\t\t1.������Ϣ��ѯ��2.ס����Ϣ��ѯ\n");
		printf("\t\t-----���-----------���------\n");	
		scanf("%d",&k);
		if(k==1)
		{
			printf("\n\t\t-----���-----------���------\n");	
			printf("\t\t1.������ѯ        2.ѧ�Ų�ѯ  \n");
			printf("\t\t-----���-----------���------\n");	
			scanf("%d",&m);
			if(m==1)
			{
				printf("������Ҫ��ѯ��ѧ����������\n");
				scanf("%s",a);
				while(p!=NULL)
				{
					if(!(strcmp(p->name,a)))
					{
						printf("\nѧ�ţ� %s\n������ %s\n�Ա� %s\n������룺 %d\n�绰���룺%s\n",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);
						l=1;
						
					}
					p=p->next;	
				}
				if(l==0)
				{
					printf("����ʧ��!!\n");
					l=0;	
				}
			}
			else if(m==2)
			{
				printf("������Ҫ��ѯ��ѧ����ѧ�ţ�\n");
				scanf("%s",n);
				while(p!=NULL)
				{
					if(!strcmp(p->xuehao,n))
					{
						printf("ѧ�ţ� %s\n������ %s\n�Ա� %s\n������룺 %d\n�绰���룺%s\n",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);l=1;
					}
					p=p->next;
				}
				if(l==0)
				{
					printf("����ʧ��!!\n");
					l=0;	
				}
			}
		}
		else if(k==2)
		{
			printf("������Ҫ��ѯ��ѧ����������룺\n");
			scanf("%d",&x);
			system("cls");                        //�����Ļ��Ϣ
			while(p!=NULL)
			{
				if(p->sushe==x)
				{
					printf("ѧ�ţ� %s\n������ %s\n�Ա� %s\n������� %d\n�绰���룺%s\n\n",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);l=1;
					
				}
				p=p->next;
			}
			if(l==0)
			{
				printf("����ʧ��!!\n");
				l=0;	
			}
			
		}
	}
	else if(m==2)
	{
		struct student *p;	
		char n[5];
		p=head;
		printf("������Ҫ��ѯ��ѧ����ѧ�ţ�\n");
		scanf("%s",n);
		system("cls");                  //�����Ļ��Ϣ
		while(p!=NULL)
		{
			if(!(strcmp(p->xuehao,n)))
			{
				printf("ѧ��%5s\t����:%5s\n",p->xuehao,p->name);
				for(j=0;j<10;j++)
					if(p->xuefen[j]!=-1)
						printf("ѧ��%3d�γ�����:%10s\t�γ̱��:%10s\t�ۺϳɼ�:%5.2lf\tʵ��ѧ��:%5.2lf\n",p->xuefen[j],p->kcname[j],p->kcID[j],p->zonghe[j][0],p->zonghe[j][1]);l=1;
			}
			p=p->next;
		}
		if(l==0)
		{
			printf("����ʧ��!!");
			l=0;	
		}
	}
	
}




//----------------------ɾ��ѧ������
struct student *dele(struct student *studenthead)  
{
	struct student *p,*studentp,*R;
	int k,l=0,j;
	char n[10];
	if(studenthead==NULL)
	{
		printf("ѧ����Ϣ�����ڣ���¼��ѧ����Ϣ��\n");
		return studenthead;
	}
	printf("����Ҫɾ����ѧ����������\n");
	scanf("%s",n);
	k=1;
	R=studenthead;
	while(R!=NULL&&(strcmp(n,R->name)))
	{
		studentp=R;
		R=R->next;
		k=k+1;
		l=1;
	}
	if(R==NULL||(strcmp(n,R->name)))
		printf("ɾ����Ч!\n");
	else if(k==1)
	{
		p=studenthead;            //pָ���1�����
		studenthead=p->next;     //��1������������ڶ�������Ϊ��һ�����
		printf("ɾ���ɹ�!\n");  
		printf("�Ƿ񱣴�:  1.���� \t2.����\n");
		scanf("%d",&j);
		if(j==1)
		{	bao_cunA(studenthead); 	bao_cunB(studenthead);}
		free(p);             //�ͷ�ɾ���Ľڵ�
		
	}
	else if(R!=NULL&&!(strcmp(n,R->name)))
	{
		p=studentp->next;       
		studentp->next=p->next;
		printf("ɾ���ɹ�!"); 
		printf("�Ƿ񱣴�:  1.���� \t2.����\n");
		scanf("%d",&j);
		if(j==1)
		{	bao_cunA(studenthead); 	bao_cunB(studenthead);}
		free(p);
	}
	return studenthead;
}


//--------------------�޸�ѧ����Ϣ
void xiugai(struct student *head)
{
	struct student *p;
	char n[10] ;int m;
	p=head;
	printf("������Ҫ�޸�ѧ����Ϣ��������");
	scanf("%s",n);
	while(p!=NULL)
	{
		if(!(strcmp(p->name,n)))
		{
			printf("���ѧ����ѧ�š��������Ա�������롢�绰�����޸ģ�\n");
			scanf("%s%s%s%d%s",p->xuehao,p->name,p->xingb,&p->sushe,p->dianhua);
			printf("�Ƿ񱣴��޸ģ�1.��\t2.��\n");  
			scanf("%d",&m);
			if(m==1)
			{
				bao_cunA(head);
				
			}
			else if(m==2)
			{
				main();
			}
			return ;
		}
		p=p->next;
	}
	printf("������������ ! \n");
	return ;
}





struct student *cha_ru(struct student *studenthead)     //------����ѧ������
{
	struct student *p,*studentp;
	int k,i=0,j;
	if(studenthead==NULL)
	{
		printf("ѧ����ϢΪ�գ��޷�����!\n");	/*�������Ϊ��*/
		return studenthead;
	}      /*�������������*/
	p=studenthead;
	while(p!=NULL)
	{
		p=p->next;
		i++;
	}
	printf("��1��%d��λ�ÿ���ѡ�������²���λ�ã�",i+1);
	scanf("%d",&i);          
	k=1;
	studentp=studenthead;
	while(studentp!=NULL&&k<i-1)
	{
		studentp=studentp->next;
		k=k+1;
	}
	if(studentp==NULL||i<1)
		printf("����λ��Ϊ��Чֵ\n");
	else if(i==1)                                    ///ͷ�ڵ����
	{
		if((p=(struct student*)malloc(sizeof(struct student)))==NULL)
		{
			printf("�ڴ��������\n");
			exit(0);
		}
		printf("ѧ�š��������Ա�������롢�绰���룺\n");
		scanf("%s%s%s%d%s",p->xuehao,p->name,p->xingb,&p->sushe,p->dianhua);       ///������Ϣ
		p->next=studenthead;
		studenthead=p;	
		printf("�Ƿ񱣴�:  1.���� \t2.����\n");
		scanf("%d",&j);
		if(j==1)
			bao_cunA(studenthead);
	}
	else
	{ 
		if((p=(struct student*)malloc(sizeof(struct student)))==NULL)               //����ͷ�ڵ�Ĳ���
		{ 
			printf("�ڴ��������\n");
			exit(0);
		}
		printf("ѧ�š��������Ա�������롢�绰���룺\n");
		scanf("%s%s%s%d%s",p->xuehao,p->name,p->xingb,&p->sushe,p->dianhua);         ///������Ϣ
		p->next=studentp->next; 
		studentp->next=p;
		printf("�Ƿ񱣴�:  1.���� \t2.����\n");
		scanf("%d",&j);
		if(j==1)
			bao_cunA(studenthead);
	}
	
	return studenthead;
}




void bao_cunA(struct student *studenthead)    //-----��������Ϣ���浽A.txt�ı��ļ�
{
	struct student *p;
	FILE *fp;
	if((fp=fopen("A.txt","w"))==NULL)
	{
		printf("�ļ���ʧ�ܣ�");
		exit(0);
	}
	if(studenthead==NULL)
	{
		printf("��ʧ�ܣ�����Ϊ�գ�");
		return;
	}
	p=studenthead;
	fprintf(fp,"ѧ��     ����     �Ա�      �������      �绰     \n");
	while(p!=NULL)
	{
		fprintf(fp,"%-10s%-10s%-10s%-10d%-10s\n",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);
		p=p->next;
	}
	fclose(fp);
	printf("������ϣ�");
	return;
}




void bao_cunB(struct student *studenthead)    //-----��������Ϣ���浽B.txt�ı��ļ�
{
	struct student *p;
	FILE *fp;
	int i=0;
	if((fp=fopen("C.txt","w"))==NULL)
	{
		printf("�ļ���ʧ�ܣ�");
		exit(0);
	}
	if(studenthead==NULL)
	{
		printf("��ʧ�ܣ�����Ϊ�գ�");
		return;
	}
	p=studenthead;
	fprintf(fp,"ѧ��    �γ̱��    �γ�����     ѧ��    ƽʱ�ɼ�    ʵ��ɼ�   ����ɼ�    �ۺϳɼ�    ʵ��ѧ��   \n");
	while(p!=NULL)  
	{  
		for(i=0;i<10;i++)
			if(p->xuefen[i] != -1)
				fprintf(fp,"%-10s%-10s%-15s%-10d%-10d%-10d%-10d%-11.2lf%-10.2lf\n",p->xuehao,p->kcID[i],p->kcname[i],p->xuefen[i],p->chengji[i][0],p->chengji[i][1],p->chengji[i][2],p->zonghe[i][0],p->zonghe[i][1]);
			p=p->next;
	}
	fclose(fp);
	printf("������ϣ�");
	return;
}

struct student *deleall(struct student *studenthead)/////---------�ͷŽڵ�
{
	struct student *p;
	p=studenthead;
	while(p!=NULL)
	{
		studenthead=p->next;
		free(p);
		p=studenthead;
	}
	return p;
}





