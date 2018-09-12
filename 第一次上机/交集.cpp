#include <stdlib.h>
#include <stdio.h>
# define List_Init_Size  100
# define ListIncrement   10
typedef  int ElemType; 

struct Sqlist{
   ElemType   *elem;  //存储空间基址             
   int        length; //当前长度(数据元素个数)
   int        ListSize;//当前分配的存储容量
} ;

bool InitList (Sqlist &L){
L.elem=(ElemType *)malloc(List_Init_Size*sizeof(ElemType));  
if (!L.elem) exit(EXIT_FAILURE) ;
L.length=0;
L.ListSize=List_Init_Size;
return  true;
}
void  InsertList(Sqlist &L,int i,ElemType x)
 {     //int j;
	if(i <1 || i >L.length+1)
	{printf("Position error");
            return;
	}
	if(L.length>=L.ListSize)
		{printf("overflow");
	     exit(EXIT_FAILURE);
		}
	 for(int j=L.length-1;j>= i-1;--j)
	     L.elem[j+1]=L.elem[j];
    L.elem[i-1]=x;
    ++L.length;
	return;
	 
}
void deleteList(Sqlist  &L,int i)
 {
     int j;
     if(i<1 || i>L.length)
            printf("Position error");
            return; 
          for(j=i;j<=L.length-1;j++)
         L. elem[j-1]=L. elem[j];
         L.length--;
   } 
//找到返回序号，找不到返回0             
int Locate(Sqlist L, ElemType x)
    {  int i=1;
       while(i<=L.length && L. elem[i-1]!=x)
            ++i;  
        if(i<=L.length)  return i;
           else return 0;
      }

void GetElem(Sqlist L,int i, ElemType &e)
	{  
     e=L.elem[i-1];
     }
int ListLength(Sqlist L) 
	{  
     return L.length;
     }
void Output(Sqlist L)
{
	printf("表中元素个数为：%d\n",L.length);
	for (int i=1;i<=L.length;i++)
	{
		printf("第%d个元素为：%d\n",i,L.elem[i-1]);
	}
}
void Input(Sqlist &L)
{
	int n,x;
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf ("%d",&x);
		L.elem[i-1]=x;
		L.length++;
	}
}

void unio(Sqlist &La,Sqlist Lb) {
	   ElemType e;
       int La_len=ListLength(La);
       int Lb_len=ListLength(Lb);
       for(int i=1;i<=Lb_len;++i) {
         GetElem(Lb,i,e);
         if(!Locate(La,e))
            InsertList(La,++La_len,e);
       }
      Output(La);
     }
void  mergelist(Sqlist La,Sqlist Lb,Sqlist &Lc){
       int i=1,j=1,k=0; ElemType ai,bj;
       int La_len=ListLength(La);
       int Lb_len=ListLength(Lb);
       while((i<=La_len)&&(j<=Lb_len)){
		GetElem(La,i,ai);GetElem(Lb,j,bj);
		if(ai<=bj)
		{InsertList(Lc,++k,ai);++i;}
		else {InsertList(Lc,++k,bj);++j;}
	   }
	   while(i<=La_len){
       GetElem(La,i++,ai);InsertList(Lc,++k,ai);
       }
       while(j<=Lb_len){
       GetElem(Lb,j++,bj);InsertList(Lc,++k,bj);
       }
    
	   Output(Lc);
}


void  jiaoji(Sqlist La,Sqlist Lb,Sqlist &Lc)
{
 int i=1,j=1,k=0;
 ElemType ai,bj;
 int La_len=ListLength(La);
 int Lb_len=ListLength(Lb);
    while((i<=La_len)&&(j<=Lb_len))
 {
  GetElem(La,i,ai);
  GetElem(Lb,j,bj);
  if(ai==bj)  { InsertList(Lc,++k,ai); ++i;j=1; }
  else { ++j;}
 }
 Output(Lc);
}

void main(){
	Sqlist L,La,Lb,Lc;
	int conti=1,choice=0,loc=0; ElemType x;
	while (conti)
	{
		
		printf("1.初始化  2.插入  3.删除  4.定位  5.并集  6.合并  7.交集 8.输出 9.退出");
		scanf ("%d",&choice);
		switch (choice){
			int i;
		case  1:
				InitList(L);break;
		case  2:
			    
				printf("请输入要插入的位置");
		        scanf ("%d",&i);
				printf("请输入要插入的内容");
				scanf ("%d",&x);
				InsertList(L,i,x);
				break;
		case  3:
			   	printf("请输入要删除的位置");
		        scanf ("%d",&i);
				deleteList(L,i);
				break;
		case  4:
			    printf("请输入要定位的内容：");
		        scanf ("%d",&x);
				loc = Locate(L,x);
				if (!loc) printf("该元素不存在\n");
				else printf("该元素的序号是：%d \n",loc);
				break;
		case  5:
			    InitList(La);
				InitList(Lb);
			    printf("请输入La中的元素个数:");
				Input(La);
				printf("请输入Lb中的元素个数:");
				Input(Lb);
				unio(La,Lb);
				break;
		case  6:
			    InitList(La);
				InitList(Lb);
				InitList(Lc);
			    printf("请输入La中的元素个数:");
				Input(La);
				printf("请输入Lb中的元素个数:");
				Input(Lb);
				mergelist(La,Lb,Lc);
				break;

		case  7:
			    InitList(La);
				InitList(Lb);
				InitList(Lc);
			    printf("请输入La中的元素个数:");
				Input(La);
				printf("请输入Lb中的元素个数:");
				Input(Lb);
				jiaoji(La,Lb,Lc);
				break;
        case  8:
               Output(L);	break;

		case  9:
			   conti=0;
			   break;
	}

}
}
