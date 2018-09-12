#include <stdlib.h>
#include <stdio.h>
# define List_Init_Size  100
# define ListIncrement   10
typedef  int ElemType; 

struct Sqlist{
   ElemType   *elem;  //�洢�ռ��ַ             
   int        length; //��ǰ����(����Ԫ�ظ���)
   int        ListSize;//��ǰ����Ĵ洢����
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
//�ҵ�������ţ��Ҳ�������0             
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
	printf("����Ԫ�ظ���Ϊ��%d\n",L.length);
	for (int i=1;i<=L.length;i++)
	{
		printf("��%d��Ԫ��Ϊ��%d\n",i,L.elem[i-1]);
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
		
		printf("1.��ʼ��  2.����  3.ɾ��  4.��λ  5.����  6.�ϲ�  7.���� 8.��� 9.�˳�");
		scanf ("%d",&choice);
		switch (choice){
			int i;
		case  1:
				InitList(L);break;
		case  2:
			    
				printf("������Ҫ�����λ��");
		        scanf ("%d",&i);
				printf("������Ҫ���������");
				scanf ("%d",&x);
				InsertList(L,i,x);
				break;
		case  3:
			   	printf("������Ҫɾ����λ��");
		        scanf ("%d",&i);
				deleteList(L,i);
				break;
		case  4:
			    printf("������Ҫ��λ�����ݣ�");
		        scanf ("%d",&x);
				loc = Locate(L,x);
				if (!loc) printf("��Ԫ�ز�����\n");
				else printf("��Ԫ�ص�����ǣ�%d \n",loc);
				break;
		case  5:
			    InitList(La);
				InitList(Lb);
			    printf("������La�е�Ԫ�ظ���:");
				Input(La);
				printf("������Lb�е�Ԫ�ظ���:");
				Input(Lb);
				unio(La,Lb);
				break;
		case  6:
			    InitList(La);
				InitList(Lb);
				InitList(Lc);
			    printf("������La�е�Ԫ�ظ���:");
				Input(La);
				printf("������Lb�е�Ԫ�ظ���:");
				Input(Lb);
				mergelist(La,Lb,Lc);
				break;

		case  7:
			    InitList(La);
				InitList(Lb);
				InitList(Lc);
			    printf("������La�е�Ԫ�ظ���:");
				Input(La);
				printf("������Lb�е�Ԫ�ظ���:");
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
