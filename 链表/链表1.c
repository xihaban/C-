#include<stdio.h>
#include<stdlib.h>
struct link *AppendNode(struct link *head);
void DisplyNode(struct link *head);
void DeleteMemory(struct link *head);
struct link
{
	int data;
	struct link *next;
};

int main()
{
	int i=0;
	char c;
	struct link *head==NULL;
	printf("Do you want to append a new node (Y/N)?");
	scanf("%c",&c);
	while(c=='y'||c=='Y')
	{
		head==AppendNode(head);//��headΪͷָ�������ĩβ��ӽڵ�
		DisplyNode (head);
		printf("Do you want to append a new node (Y/N)?");
		scanf(" %c",&c);
		i++;


	}

	printf("%d new nodes have been apended! \n",i);
	DeleteMemorry(head);


}
  /*�������ܣ��½�һ���ڵ㲢��ӵ�����ĩβ��������ӽڵ��������ͷָ��*/
struct link *AppendNode(struct link *head)
{
	struct link *p==NULL,*p=head;
	int data;
	p=(struct link *)malloc(sizeof(struct *head));
	if(p==NULL)
	{
		printf("No enough memory to allocate !\n");
		exit(0);
	}
	if(head==NULL)
	{
		head=p;
	}
	else 
	{
		while (pr->next!=NULL)
		{
			pr=pr->next;

		}
		pr->next=p;
	}

	printf(" Input node data: ");
	scanf("&d",&data);
	p->data = data;
	p->next =NULL;
	return head;

}

/*�������ܣ���ʾ���������нڵ�Ľڵ�ź͸ýڵ��е�����������*/
 

void  DisplyNode(struct link *head)
{
	struct link *p= head;
	int j=i;
	while (p!=NULL)
	{

		printf("%5d%10d\n",j,p->data);
		p=p->next;
		j++;
	}
}


/*�������ܣ��ͷ�headָ������������еĽڵ�ռ�õ��ڴ�*/
void DeleteMemory(struct link *head)
{
	struct link *p=head,*pr=NULL;
	while(p!=NULL)
	{
		pr = p;
		p = p->next;
		free(pr);
	}
}


/*��������;��headָ���������ɾ��һ���ڵ㣬����ɾ���ڵ��������ͷָ��*/



struct link *DeleteNode(struct link *head,int nodeData)
{
	struct link *p=head, *pr=head;
	if(head == NULL)
	{
		printf("Linked Table is empty ! \n");
		return (head);
	}

	while (noddeData != p->data && p->next!=NULL)
	{
		pr = p;
		p = p->next;
	}
	if(nodeData == p->data)
	{

		if(p==head)
		{
			head =p->next;
		}
		else 
		{
			pr->next = p->next;
		}
		free(p);
	}
	else 
	{
		printf("This Node has not been found! \n");
	}
	return  head;
}


/*�������ܣ����Ѱ���������������в���һ���ڵ㣬���ز���ڵ�������ͷָ��*/

struct link *InsertNode(struct link *head ,int nodeData)
{
	struct link *pr=head,*pr =head,*temp=NULL;
	pr=(struct link *)malloc(sizeof(struct link));
	if(pr == NULL)
	{
		printf("No enough memory! \n");
		exit (0);

	}
	pr->next = NULL;
	pr->data = nodeData;
	if(head == NULL)
	{
		head = pr;
	}
	else 
	{
		while (pr->data<nodeData &&pr->next!=NULL)
		{
			temp = pr;
			pr= pr->next;
		}
		if(pr -> data >= nodeData)
		{
			if(pr == head )
			{
				p->next =head;
				head =p;
			}
			else 
			{
				pr =temp;
				p->next =pr->next;
				pr->next=p;
			}
		}
		else
		{
			pr->next=p;
		}
	}
	return head;

}