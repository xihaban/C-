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
      printf("输入数据:\n");  
	 
    for(i=n;i>0;i--)   
    {   scanf("%d",&ch);
        p = (linklist*)malloc(sizeof(linklist));  
        p->data = ch;  
        if(h == NULL)        //先判断输入的是不是第一个节点  
        {  
            h = p;             
        }  
        else  
        {  
            e->next = p;     //e始终指向输入的最后一个节点  
        }  
        e = p;  
    }  
    if(e != NULL)               //如果链表不为空，则最后节点的下一个节点为空  
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
	printf("%d元素的位置%d\n",e,j);
	return h;
}
linklist *Delelist(linklist *h,int i)  //删除元素
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
        printf("1.创建单链表\t");  
        printf("2.链表输出显示\t"); 
		printf("3.插入数据\t");
		printf("4.删除数据\t");
		printf("5.查找数据\t");
        printf("6.退出\n");  
        printf("你的选择是 ：");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
	
        case 1: 
			printf("多少个数据");
			scanf("%d",&i);
            head = CreateList_End(i);  
            break;   
        case 2:  
            head=ShowLinklist(head);  
            break;  
		case 3:
			printf("插入的数据");
			scanf("%d",&e);
			printf("插入的位置");
			scanf("%d",&j);
			head=insertlinklist(head,e,j);
			break;
		case 4:
			printf("删除数据的位置");
			scanf("%d",&i);
			head=Delelist(head,i);
			break;
		case 5:
			printf("查找的数据");
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
