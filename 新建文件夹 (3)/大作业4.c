#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int huahua=0;//ȫ�ֱ���

struct list
{
	long  int  xuehao;           //ѧ��
	char name[20];               //����
	char sex[5];                 //�Ա�
	char sushe[20];               //�������
	char Tel[20];                //����
	struct list *next;
};
struct last
{
	long int xuehao;
	char bianhao[50];//���
	char mingcheng[20];//����
	int xuefen;//ѧ��
	int pingshi;//ƽʱ�ɼ�
	int shiyan;//ʵ��ɼ�
	int juanmian;//����ɼ�
	double zonghe;//�ۺϳɼ�
	double shidexuefen;//ʵ��ѧ��
	struct last *nex;//B
};
struct list *shanchua(struct list *head);           //ɾ������A
struct list *adda(struct list *head);            //��Ӻ���A
void shuchua(struct list *head);                //�������A
struct list *shurua();                          //���뺯��A
void xiugaia(struct list *head);                 //�޸ĺ���A
void chaxuna(struct list *head);                 //��ѯ���� A
void baocuna(struct list *listhead);            //������������ı�A
struct list *delealla(struct list *listhead);    /*�ͷ�����ȫ�����*////A
struct last *shanchub(struct last *head);           //ɾ������B
struct last *addb(struct last *head);            //��Ӻ���B
void shuchub(struct last *head);                //�������B
struct last *shurub();                          //���뺯��B
void xiugaib(struct last *head);                 //�޸ĺ���B
void chaxunb(struct last *head);                 //��ѯ���� B
void baocunb(struct last *lasthead);            //������������ı�B
struct last *deleallb(struct last *lasthead);    /*�ͷ�����ȫ�����*///B
int main()
{
	struct list *head;
	int ch,d,f;
	head=NULL;
	while(1)
	{
		/*if(f%5==0)
			system("cls");
		f++;*/
		printf("\n\n\t\t\t��ӭʹ��ѧ������ϵͳ\n\n\n\n");
	printf("\t\t��ѡ��(0-12):\n");
	printf("\tح===================================================ح\n");
    printf("\tح*1.���������Ϣ  2.���������Ϣ  3.�޸ĸ�����Ϣ    ح\n");
	printf("\tح---------------------------------------------------ح\n");
	printf("\tح*4.��ѯ������Ϣ  5.��Ӹ�����Ϣ  6.ɾ��������Ϣ    ح\n");
	printf("\tح---------------------------------------------------ح\n");
	printf("\tح*7.����ɼ�      8.����ɼ�      9.�޸ĳɼ�        ح\n");
	printf("\tح---------------------------------------------------ح\n");
  	printf("\tح*10.��ѯ�ɼ�     11.��ӳɼ�     12.ɾ���ɼ�       ح\n");
    printf("\tح---------------------------------------------------ح\n");
	printf("\tح*       0.�˳�ϵͳ                                 ح\n");
	printf("\tح===================================================ح\n");
	printf("\n\t\t����ѡ����\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:head=shurua();break;        //����A
		case 2:shuchua(head);break;        //���A
		case 3:xiugaia(head);break;         //�޸�A
		case 4:chaxuna(head);break;         //��ѯA
		case 5:head=adda(head);break;       //���A
        case 6:head=shanchua(head);break;      //ɾ��A
        case 7:head=shurub();break;        //����B
		case 8:shuchub(head);break;        //���B
		case 9:xiugaib(head);break;         //�޸�B
		case 10:chaxunb(head);break;         //��ѯB
		case 11:head=addb(head);break;       //���B
		case 12:head=shanchua(head);break;      //ɾ��B
		case 0:	printf("�Ƿ񱣴��޸ģ�1.�����޸ģ�2.�������޸�");
			scanf("%d",&d);
			if(d==1)
			{
				baocuna(head);
				head=delealla(head);
				baocunb(head);
			    head=deleallb(head);break;
			}
		default:printf("������������������");
		}
		if(ch==0)
			break;
		}
	return 0;
}
struct list *shurua()//����A������Ϣ
{
	struct list *listhead,*p,*listp;
	int x,i,d;
    listhead=NULL;
	printf("������ 1 ���м�������:");
	scanf("%d",&d);
	if(d==1)
	{
	printf("������ѧ����������");
	scanf("%d",&x);
	printf("����ѧ����Ϣ");
	for(i=0;i<x;i++)
	{
		if((p=(struct list*)malloc(sizeof(struct list)))==NULL)//�����ڵ�
		{
			printf("�ڴ����");
			exit(0);
		}
		if(listhead==NULL)
			listhead=p;
		else
			listp->next=p;        //���ӽڵ�
			listp=p;
			printf("ѧ��:");
	        scanf("%d",&listp->xuehao);
		    printf("����: ");
		    scanf("%s",listp->name);
	        printf("�Ա�:" );
		    scanf("%s",listp->sex);
		    printf("����: ");
		    scanf("%s",listp->sushe);
		    printf("����: ");
		    scanf("%s",listp->Tel);
			printf("��������һ��ѧ����Ϣ��\n");
			listp->next=NULL;
	}
	}

		printf("�Ƿ񱣴��޸ģ�1�������ݣ�����2�����棡");
		scanf("%d",&d);
		if(d==1)
			baocuna(listhead);
		return listhead;
}
void baocuna(struct list *listhead)//����A
{
	struct list *p;
	FILE *fp;
	printf("s���뵽�ļ�A.txt��");
	if((fp=fopen("A.txt","w"))==NULL)
	if(listhead==NULL)
	{
		printf("��ʧ�ܣ�����Ϊ�գ�");
		return;
	}
	p=listhead;
	fprintf(fp,"ѧ��    ����      �Ա�      ����       ����     \n");
	while(p!=NULL)
	{
		fprintf(fp,"%-10d%-10s%-9s%-10s%-20s\n",p->xuehao,p->name,p->sex,p->sushe,p->Tel);
		p=p->next;
	}
	fclose(fp);
	printf("������ϣ�");
}
void shuchua(struct list *listhead)             //���A������Ϣ
{
	struct list *p;
	if(listhead==NULL)
	{
		printf("����Ϊ�գ�");
		return;
	}
	p=listhead;
	printf("ѧ��        ����       �Ա�     ����       ����     \n");
	while(p!=NULL)
	{
     	printf("%-10d%-10s%-9s%-10s%-20s\n",p->xuehao,p->name,p->sex,p->sushe,p->Tel);
		p=p->next;
	}
}
struct list *adda(struct list *listhead)     //����ڵ㣬���ѧ����ϢA
{
	struct list *p,*listp;
	int k,i,n=0;
	if(listhead==NULL)
	{
		printf("δ�ҵ�ѧ����Ϣ\n");/*�������Ϊ��*/
		return listhead;
	}
	k=1;
	p=listhead;
		while(p!=NULL)
	{
		p=p->next;
		n++;
	}
		printf("����%d��λ�ÿɲ���ѧ����Ϣ\n",n+1);
		printf("�����²���ѧ��λ�ã�");/*�������������*/
		scanf("%d",&i);
	listp=listhead;
	while(listp!=NULL&&k<i-1)
	{
		listp=listp->next;
		k++;
	}
	if(listp==NULL||i<1)
	printf("����ѧ����Ϣ��Ч\n");
	else if(i==1)                      ///ͷ�ڵ����
	{
		if((p=(struct list*)malloc(sizeof(struct list)))==NULL)
		{
			printf("�ڴ��������\n");
			exit(0);
		}
	   	printf("ѧ�š��������Ա����ᡢ���룺\n");
		scanf("%d%s%s%s%s",&p->xuehao,p->name,p->sex,p->sushe,p->Tel);             ///������Ϣ
		p->next=listhead;
		listhead=p;
	}
	else
	{
		if((p=(struct list*)malloc(sizeof(struct list)))==NULL)      //����ͷ�ڵ�Ĳ���A
		{
			printf("�ڴ��������\n");
			exit(0);
		}
		printf("ѧ�� ���� �Ա� ���� ���� ��\n");
		scanf("%d%s%s%s%s",&p->xuehao,p->name,p->sex,p->sushe,p->Tel);             ///������ϢA
		p->next=listp->next;
		listp->next=p;
	}
	return listhead;
}
struct list *delealla(struct list *listhead)/////�ͷŽڵ�A
{
	struct list *p;
	p=listhead;
	while(p!=NULL)
	{
		listhead=p->next;
		free(p);
		p=listhead;
	}
	return p;
}
void xiugaia(struct list *head)//�޸���ϢA
{
	struct list *p;
	int n;
	p=head;
	printf("������Ҫ�ĵ�ѧ��ѧ�ţ�");
	scanf("%d",&n);
	while(p!=NULL)
	{
	if(p->xuehao==n)
	{
	   printf("���ѧ����ѧ��  ����  �Ա�  ����  ���������޸ģ�");
       scanf("%d%s%s%s%s",&p->xuehao,p->name,p->sex,p->sushe,p->Tel);
	   return ;
	}
	p=p->next;
	}
    printf("������������");
		return;

}
void chaxuna(struct list *head)//��ѯѧ��������Ϣ
{
	struct list *p;
	int n,m;
	char name[20];
	char sushe[20];
	p=head;
	printf("��ѯѧ����Ϣ,��ѡ���ѯ��ʽ��1.ѧ�Ų�ѯ��2.������ѯ��3.�����ѯ");
	scanf("%d",&m);
	if(m==1)
	{
	printf("������Ҫ��ѯ��ѧ����ѧ�ţ�");
	scanf("%d",&n);
	while(p!=NULL)
	{
	if(p->xuehao==n)
	{
	   printf("ѧ��    %d\n������   %s\n�Ա�   %s\n���᣺   %s\n���룺   %s\n",p->xuehao,p->name,p->sex,p->sushe,p->Tel);
	   return ;
	}
	}
    printf("������������");
		return;
	}else if(m==2)
	{
		printf("������Ҫ��ѯ��ѧ����������");
	scanf("%s",name);
	while(p!=NULL)
	{
	if(!(strcmp(p->name,name)))
	{
	   printf("ѧ��    %d\n������   %s\n�Ա�   %s\n���᣺   %s\n���룺   %s\n",p->xuehao,p->name,p->sex,p->sushe,p->Tel);
	   return ;
	}
	p=p->next;
	}
    printf("������������");
		return;
	}
	else if(m==3)
        {
            printf("������Ҫ��ѯ������ţ�");
            scanf("%s",sushe);
            while(p!=NULL)
            {
                if(!(strcmp(p->sushe,sushe)))
                {
                    printf("ѧ��    %d\n������   %s\n�Ա�   %s\n���᣺   %s\n���룺   %s\n",p->xuehao,p->name,p->sex,p->sushe,p->Tel);
                    p=p->next;
                }
            }
            return;
        }else
        {
            printf("������������");
            return;
            }
}
struct last *shurub()//����B��Ϣ
{
	struct last *lasthead,*p,*lastp;
	int x,i,d;
    lasthead=NULL;
	printf("��ѡ��1.��������:");
	scanf("%d",&d);
	if(d==1)
	{
	printf("������ѧ����������");
	scanf("%d",&x);
	huahua =x;//ȫ�ֱ������и�ֵ
	printf("����ѧ����Ϣ");
	for(i=0;i<x;i++)
	{
		if((p=(struct last*)malloc(sizeof(struct last)))==NULL)//�����ڵ�
		{
			printf("�ڴ����");
			exit(0);
		}
		if(lasthead==NULL)
			lasthead=p;
		else
			lastp->nex=p;        //���ӽڵ�
			lastp=p;
			printf("ѧ��:");
	        scanf("%d",&lastp->xuehao);
			printf("�γ̱��:");
			scanf("%s",lastp->bianhao);
			printf("�γ�����:");
	        scanf("%s",lastp->mingcheng);
			printf("ѧ��:");
	        scanf("%d",&lastp->xuefen);
			printf("ƽʱ�ɼ�:");
	        scanf("%d",&lastp->pingshi);
			printf("ʵ��ɼ�:");
	        scanf("%d",&lastp->shiyan);
			printf("����ɼ�:");
	        scanf("%d",&lastp->juanmian);
			printf("��������һ��ѧ������Ϣ:\n");
			lastp->nex=NULL;
		}
	}
		printf("�Ƿ񱣴��޸ģ�1�������ݣ�����2�����棡");
		scanf("%d",&d);
		if(d==1)
			baocunb(lasthead);
		return lasthead;
}
void baocunb(struct last *lasthead)//����B
{
	struct last *p;
	FILE *fp;
	printf("s���뵽�ļ�B.txt��");
	if((fp=fopen("B.txt","w"))==NULL)
	if(lasthead==NULL)
	{
		printf("��ʧ�ܣ�����Ϊ�գ�");
		return;
	}
	p=lasthead;
	fprintf(fp,"ѧ��  �γ̱��  �γ�����  ѧ��  ƽʱ�ɼ�  ʵ��ɼ�  ����ɼ�  �ۺϳɼ�  ʵ��ѧ�� \n");
	while(p!=NULL)
	{
		if(p->shiyan==-1)
		{
			p->zonghe=p->pingshi*0.3+p->juanmian*0.7;
			if(p->zonghe>=90&&p->zonghe<=100)
				p->shidexuefen=p->xuefen;
			else if(p->zonghe>=80&&p->zonghe<90)
				p->shidexuefen=p->xuefen*0.8;
			else if(p->zonghe>=70&&p->zonghe<80)
				p->shidexuefen=p->xuefen*0.75;
			else if(p->zonghe>=60&&p->zonghe<70)
				p->shidexuefen=p->xuefen*0.6;
			else
				p->shidexuefen=0;
		}
		else
		{
			p->zonghe=p->shiyan*0.15+p->juanmian*0.7+p->shiyan*0.15;
			if(p->zonghe>=90&&p->zonghe<=100)
				p->shidexuefen=p->xuefen;
			else if(p->zonghe>=80&&p->zonghe<90)
				p->shidexuefen=p->xuefen*0.8;
			else if(p->zonghe>=70&&p->zonghe<80)
				p->shidexuefen=p->xuefen*0.75;
			else if(p->zonghe>=60&&p->zonghe<70)
				p->shidexuefen=p->xuefen*0.6;
			else
				p->shidexuefen=0;
		}
		fprintf(fp,"%-9d%-9s%-9s%-9d%-9d%-9d%-9d%-9.2lf%-9.2lf\n",p->xuehao,p->bianhao,p->mingcheng,p->xuefen,p->pingshi,p->shiyan,p->juanmian,p->zonghe,p->shidexuefen);
		p=p->nex;
	}
	fclose(fp);
	printf("������ϣ�");
}
struct last *deleallb(struct last *lasthead)/////�ͷŽڵ�B
{
	struct last *p;
	p=lasthead;
	while(p!=NULL)
	{
		lasthead=p->nex;
		free(p);
		p=lasthead;
	}
	return p;
}
void shuchub(struct last *lasthead)             //���B������Ϣ
{
	struct last *p,*q,*h,*m;
	int n,temp;
	m=(struct last*)malloc(sizeof(struct last));
	if(lasthead==NULL)
	{
		printf("����Ϊ�գ�");
		return;
	}
	p=lasthead;
	//printf("��ѡ�������ʽ��1.�������,2.�������");
	//scanf("%d",&n);
	//if(n==1)
	printf(" ѧ��  �γ̱��  �γ�����  ѧ��  ƽʱ�ɼ�  ʵ��ɼ�  ����ɼ�  �ۺϳɼ�  ʵ��ѧ�� \n");
	p=lasthead;
	while(p!=NULL)
	{
     	printf("%-9d%-9s%-9s%-10d%-9d%-9d%-9d%-9.2lf%-9.2lf\n",p->xuehao,p->bianhao,p->mingcheng,p->xuefen,p->pingshi,p->shiyan,p->juanmian,p->zonghe,p->shidexuefen);
		p=p->nex;
	}
	printf(" ѧ��  �γ̱��  �γ�����  ѧ��  ƽʱ�ɼ�  ʵ��ɼ�  ����ɼ�  �ۺϳɼ�  ʵ��ѧ�� \n");
    p=lasthead;
	for(p;p!=NULL;p=p->nex)
	{
	    h=p;
	    for(q=p->nex;q!=NULL;q=q->nex)
	    {
	        if(h->zonghe>q->zonghe)
	        {
	           h=q;
            }
       }
       if(h != p)
        {
            m->xuehao=p->xuehao;
            p->xuehao=h->xuehao;
            h->xuehao=m->xuehao;

            strcpy(m->bianhao,p->bianhao);
            strcpy(m->mingcheng,p->mingcheng);
			m->xuefen=p->xuefen;
			m->pingshi=p->pingshi;
			m->shiyan=p->shiyan;
			m->juanmian=p->juanmian;
            m->zonghe=p->zonghe;

            strcpy(p->bianhao,h->bianhao);
            strcpy(p->mingcheng,h->mingcheng);
			p->xuefen=h->xuefen;
			p->pingshi=h->pingshi;
			p->shiyan=h->shiyan;
			p->juanmian=h->juanmian;
            p->zonghe=h->zonghe;

            strcpy(h->bianhao,m->bianhao);
            strcpy(h->mingcheng,m->mingcheng);
			h->xuefen=m->xuefen;
			h->pingshi=m->pingshi;
			h->shiyan=m->shiyan;
			h->juanmian=m->juanmian;
			h->zonghe=m->zonghe;
       }
     //  printf("%-9d%-9s%-9s%-10d%-9d%-9d%-9d%-9.2lf%-9.2lf\n",p->xuehao,p->bianhao,p->mingcheng,p->xuefen,p->pingshi,p->shiyan,p->juanmian,p->zonghe,p->shidexuefen);
    }
    p=lasthead;
	while(p!=NULL)
	{
     	printf("%-9d%-9s%-9s%-10d%-9d%-9d%-9d%-9.2lf%-9.2lf\n",p->xuehao,p->bianhao,p->mingcheng,p->xuefen,p->pingshi,p->shiyan,p->juanmian,p->zonghe,p->shidexuefen);
		p=p->nex;
	}
}
struct last *addb(struct last *lasthead)     //����ڵ㣬��ӳɼ�B
{
	struct last *p,*lastp;
	int k,i,n=0;
	if(lasthead==NULL)
	{
		printf("δ�ҵ�ѧ����Ϣ\n");/*�������Ϊ��*/
		return lasthead;
	}
	k=1;
	p=lasthead;
		while(p!=NULL)
	{
		p=p->nex;
		n++;
	}
		printf("����%d��λ�ÿɲ���ѧ����Ϣ\n",n+1);
		printf("�����²���ѧ��λ�ã�");/*�������������*/
		scanf("%d",&i);
	lastp=lasthead;
	while(lastp!=NULL&&k<i-1)
	{
		lastp=lastp->nex;
		k++;
	}
	if(lastp==NULL||i<1)
	printf("����ѧ����Ϣ��Ч\n");
	else if(i==1)                      ///ͷ�ڵ����
	{
		if((p=(struct last*)malloc(sizeof(struct last)))==NULL)
		{
			printf("�ڴ��������\n");
			exit(0);
		}
	   	printf(" ѧ��:\n");
		scanf("%d",&lastp->xuehao);
		printf("�γ̱��:\n");
		scanf("%s",lastp->bianhao);
		printf("�γ�����:\n");
		scanf("%s",lastp->mingcheng);
		printf("ѧ��:\n");
		scanf("%d",&lastp->xuefen);
		printf("ƽʱ�ɼ�:\n");
		scanf("%d",&lastp->pingshi);
		printf("ʵ��ɼ�:\n");
		scanf("%d",&lastp->shiyan);
		printf("����ɼ�:\n");
		scanf("%d",&lastp->juanmian);             ///������Ϣ
		p->nex=lasthead;
		lasthead=p;
	}
	else
	{
		if((p=(struct last*)malloc(sizeof(struct last)))==NULL)      //����ͷ�ڵ�Ĳ���
		{
			printf("�ڴ��������\n");
			exit(0);
		}
		printf(" ѧ��:\n");
		scanf("%d",&lastp->xuehao);
		printf("�γ̱��:\n");
		scanf("%s",lastp->bianhao);
		printf("�γ�����:\n");
		scanf("%s",lastp->mingcheng);
		printf("ѧ��:\n");
		scanf("%d",&lastp->xuefen);
		printf("ƽʱ�ɼ�:\n");
		scanf("%d",&lastp->pingshi);
		printf("ʵ��ɼ�:\n");
		scanf("%d",&lastp->shiyan);
		printf("����ɼ�:\n");
		scanf("%d",&lastp->juanmian);             ///������Ϣ
        p->nex=lastp->nex;
		lastp->nex=p;
	}
	return lasthead;
}
void xiugaib(struct last *head)//�޸���ϢA
{
	struct last *p;
	int n;
	p=head;
	printf("������Ҫ�ĵ�ѧ��ѧ�ţ�");
	scanf("%d",&n);
	while(p!=NULL)
	{
	if(p->xuehao==n)
	{
		printf(" ѧ��:\n");
		scanf("%d",&p->xuehao);
		printf("�γ̱��:\n");
		scanf("%s",p->bianhao);
		printf("�γ�����:\n");
		scanf("%s",p->mingcheng);
		printf("ѧ��:\n");
		scanf("%d",&p->xuefen);
		printf("ƽʱ�ɼ�:\n");
		scanf("%d",&p->pingshi);
		printf("ʵ��ɼ�:\n");
		scanf("%d",&p->shiyan);
		printf("����ɼ�:\n");
		scanf("%d",&p->juanmian);
	    return ;
	}
	p=p->nex;
	}
    printf("������������");
		return;

}
void chaxunb(struct last *head)//��ѯѧ���ɼ�B
{
	struct last *p;
	int n,m;
	char name[20];
	p=head;
	printf("��ѯѧ����Ϣ,��ѡ���ѯ��ʽ��1.ѧ�Ų�ѯ");
	scanf("%d",&m);
	if(m==1)
	{
	printf("������Ҫ��ѯ��ѧ����ѧ�ţ�");
	scanf("%d",&n);
	while(p!=NULL)
	{
	if(p->xuehao==n)
	{
		printf("ѧ��:%d\n",p->xuefen);
		printf("�γ̱��:%s\n",p->bianhao);
		printf("�γ�����:%s\n",p->mingcheng);
		printf("ѧ��:%d\n",p->xuefen);
		printf("ƽʱ�ɼ�:%d\n",p->pingshi);
		printf("ʵ��ɼ�:%d\n",p->shiyan);
		printf("����ɼ�:%d\n",p->juanmian);
		printf("�ۺϳɼ�:%.2lf\n",p->zonghe);
		printf("ʵ��ѧ��:%.2lf\n",p->shidexuefen);
		return ;
	}
	p=p->nex;
	}
    printf("������������");
		return;
	}
	else
	{
		printf("������������");
		return;
	}
}
struct list *shanchua(struct list *listhead)     //ɾ���ڵ㣬ɾ��ѧ����ϢA
{
	struct list *p,*listp,*r;
	int i,k;
	if(listhead==NULL)
	{
		printf("����Ϊ��\n");
		return listhead;
	}
	printf("����ɾ��ѧ��ѧ�ţ�");
	scanf("%d",&i);
	huahua--;
	k=1;
	r=listhead;
	while(r!=NULL&&r->xuehao!=i)
	{
		listp=r;
		r=r->next;
		k=k+1;
	}
	if(r==NULL||r->xuehao!=i)
		printf("ɾ��ѧ��ѧ����Ч\n");
	else if(k==1)
	{
		p=listhead;            /*pָ���1�����*/
		listhead=p->next;      ///��1������������ڶ�������Ϊ��һ�����
		free(p);       //�ͷ�ɾ���Ľڵ�
	}
	else if(r!=NULL&&r->xuehao==i)
	{
	   p=listp->next;
	   listp->next=p->next;
	   free(p);
	}
	return listhead;
}

