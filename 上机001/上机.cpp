#include <stdio.h>  
#include <stdlib.h>  
  
typedef struct link  
{  
    int data;  
    struct link *next;  
}linklist; 
 

linklist *CreateList_End(int n)  
{  
    linklist *h, *p, *e;  
    int ch;  
    int i;
    h = NULL;  
    e = NULL;  
      printf("��������:\n");  
	 
    for(i=n;i>0;i--)   
    {   scanf("%d",&ch);
        p = (linklist*)malloc(sizeof(linklist));  
        p->data = ch;  
        if(h == NULL)        //���ж�������ǲ��ǵ�һ���ڵ�  
        {  
            h = p;             
        }  
        else  
        {  
            e->next = p;     //eʼ��ָ����������һ���ڵ�  
        }  
        e = p;  
    }  
    if(e != NULL)               //�������Ϊ�գ������ڵ����һ���ڵ�Ϊ��  
    {  
        e->next = NULL;  
    }  
	printf("\n");
    return h;                
}  
linklist *insertlinklist(linklist *h,int e,int i)
{
	linklist *p,*s;
	p=h;
	int j=0;
	while(!p&&j<i-1)
	{
		p=p->next;
		++j;
	}
	if(!p||j>i-1)
	{
		printf("error!\n");
		return 0;
	}
	s=(linklist*)malloc(sizeof(linklist));
	s->data=e;s->next=p->next;
	p->next=s;
	return h;
} 

linklist *locaty(linklist *h,char e)
{
	linklist *p;
	p=h;
	int j=1;
	while(p)
	{
		if(p->data==e)
			break;
		p=p->next;
		++j;
	}
	if(!p)
	{
		printf("error!\n");
		return 0;
	}
	printf("%dԪ�ص�λ��%d\n",e,j);
	return h;
}
linklist *Delelist(linklist *h,int i)  //ɾ��Ԫ��
{
	linklist *p,*s;
	p=h;
	int j=0;
	while(!p&&j<i-1)
	{
		p=p->next;
		++j;
	}
	if(!p||j>i-1)
	{
		printf("error!\n");
		return 0;
	}
	s=p->next;
	p->next=s->next;
	free(s);
	return h;

}
linklist *ShowLinklist(linklist *h)  
{  
    linklist *p;  
  
    p = h;  
    while(p != NULL)  
    {  
        printf("%d ", p->data);  
        p = p->next;  
    }  
    printf("\n");  
	return h;
} 
void main()  
{  
    int choice,i,j,e;  
    linklist *head; 
    //h = (linklist*)malloc(sizeof(linklist));  
    while(1)  
    {   
        printf("1.����������\t");  
        printf("2.���������ʾ\t"); 
		printf("3.��������\t");
		printf("4.ɾ������\t");
		printf("5.��������\t");
        printf("6.�˳�\n");  
        printf("���ѡ���� ��");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
	
        case 1: 
			printf("���ٸ�����");
			scanf("%d",&i);
            head = CreateList_End(i);  
            break;   
        case 2:  
            head=ShowLinklist(head);  
            break;  
		case 3:
			printf("���������");
			scanf("%d",&e);
			printf("�����λ��");
			scanf("%d",&j);
			head=insertlinklist(head,e,j);
			break;
		case 4:
			printf("ɾ�����ݵ�λ��");
			scanf("%d",&i);
			head=Delelist(head,i);
			break;
		case 5:
			printf("���ҵ�����");
			scanf("%d",&e);
			head=locaty(head,e);
			break;
        case 6:   
            break;  
        default:  
            break;  
        }  
    }   
}  
