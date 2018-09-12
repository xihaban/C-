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
		head==AppendNode(head);//向head为头指针的链表末尾添加节点
		DisplyNode (head);
		printf("Do you want to append a new node (Y/N)?");
		scanf(" %c",&c);
		i++;


	}

	printf("%d new nodes have been apended! \n",i);
	DeleteMemorry(head);


}
  /*函数功能：新建一个节点并添加到链表末尾，返回添加节点后的链表的头指针*/
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

/*函数功能：显示链表中所有节点的节点号和该节点中的数据项内容*/
 

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


/*函数功能：释放head指向的链表中所有的节点占用的内存*/
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


/*函数功能;从head指向的链表中删除一个节点，返回删除节点后的链表的头指针*/



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


/*函数功能：在已按升序排序的链表中插入一个节点，返回插入节点后的链表头指针*/

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