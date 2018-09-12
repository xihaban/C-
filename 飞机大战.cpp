
#include<windows.h>
#include"resource.h"
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
  
#define TIMER_DIREN 101      //���嶨ʱ��
#define TIMER_DIRENMOVE 102
#define TIMER_ZIDAN 103
#define TIMER_DIRENRELEASE 104
  
typedef struct Node    //���ˣ��Լ����ӵ��ṹ��
{
  int x;
  int y;
  struct Node *pnext;
}DiRen,FeiJi,ZiDan;
void ZaoDiRen();                //�����
void ShowDiRen(DiRen *pHead,HWND hWnd);     //��ʾ����
void ZaoZiDan();                //���ӵ�
void ShowZiDan(ZiDan *pHead,HWND hWnd);     //��ʾ�ӵ�
void DiRenMove(DiRen *pHead);          //�����ƶ�
void ZiDanMove(DiRen *pHead);          //�ӵ��ƶ�
void shoot(HWND hWnd,FeiJi *ziji,DiRen **diren,ZiDan **zidan);//�ж��Ƿ�����  
void ReleaseDiren(DiRen **pHead);        //�ͷų�ȥ�ĵ���
void ReleaseZidan(ZiDan **pHead);        //�ͷų�ȥ���ӵ�
void ZaoZiJi(HWND hWnd);            //���Լ�
LRESULT CALLBACK pp(HWND hWnd,UINT msg,WPARAM wParam,LPARAM lParam);//�ص�����
int __stdcall WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)
{
  WNDCLASSEX wc;
  HWND hWnd;
  MSG msg;
  wc.hInstance=hInstance;
  wc.cbClsExtra=0;
  wc.cbSize=sizeof(WNDCLASSEX);
  wc.cbWndExtra=0;
  wc.hIcon=NULL ;
  wc.hCursor=NULL ;
  wc.hIconSm=NULL;
  wc.lpfnWndProc=pp;
  wc.lpszClassName="hello";
  wc.lpszMenuName=NULL;
  wc.style=CS_HREDRAW|CS_VREDRAW | CS_OWNDC ;
  wc.hbrBackground=(HBRUSH)5;
  RegisterClassEx(&wc);
  hWnd=CreateWindow("hello","world", WS_OVERLAPPEDWINDOW,100,100,600,600,NULL,NULL,hInstance,NULL);
  ShowWindow(hWnd,nCmdShow);
  while(GetMessage(&msg,NULL,0,0))
  {
    TranslateMessage(&msg);
    DispatchMessage(&msg);
  }
  return 0;
}
DiRen *pDiRen=NULL;  //����
ZiDan *pZiDan=NULL;  //�ӵ�
FeiJi *pZiJi=NULL;   //�Լ�
static int score=0;   //����
static char sco[20];  //װ�������ַ���
LRESULT CALLBACK pp(HWND hWnd,UINT msg,WPARAM wParam,LPARAM lParam)
{
  int i=1,  //λ
    jscore;
  HDC hdc;
  HDC memdc;
  HBITMAP hbm;
  BITMAP bminfo;
  switch(msg)
  {
  case WM_TIMER:   //��ʱ��
    hdc=GetDC(hWnd); //�õ��豸���
    hbm=LoadBitmap(GetModuleHandle(NULL),MAKEINTRESOURCE(IDB_BITMAP4));//���뱳��λͼ
    GetObject(hbm, sizeof(bminfo), &bminfo);
    memdc=CreateCompatibleDC(hdc);
    SelectObject(memdc,hbm);
    BitBlt(hdc,0,0,600,600,memdc,0,0,SRCCOPY);
    /*itoa(score,sco,10);*/
    sprintf(sco,"%d",score);  //������װ���ַ���
    jscore=score;
    while((jscore=jscore/10)>0) //�жϷ����м�λ
      i++;
    TextOut(hdc,0,0,"����",4);
    TextOut(hdc,30,0,sco,i); //��ʾ����
    DeleteDC(memdc);
    ReleaseDC(hWnd,hdc);  //�ͷž��
    DeleteObject(hbm);
    ZaoZiJi(hWnd);     //���Լ�
    if(TIMER_ZIDAN==wParam)  //��ʱ��101
    {
      ZiDanMove(pZiDan);   //�ӵ��ƶ�
      ReleaseZidan(&pZiDan); //�ͷų���Ļ���ӵ�
    }
    else if( TIMER_DIREN==wParam) //��ʱ��102
    {
      ZaoDiRen();       //�����   
    }
    else if(TIMER_DIRENRELEASE==wParam)  //��ʱ��103
    {
      ReleaseDiren(&pDiRen);  //�ͷų���Ļ�ĵ���
    }
    ShowDiRen(pDiRen,hWnd);       //��ʾ����
    DiRenMove(pDiRen);       //�����ƶ�
    ShowZiDan(pZiDan,hWnd);     //��ʾ�ӵ�
    shoot(hWnd,pZiJi,&pDiRen,&pZiDan);   //�Ƿ�����
    break;
  case WM_CLOSE:    //�ر�
    PostQuitMessage(0);
    break;
  case WM_KEYDOWN:    //�жϰ���
    switch(wParam)  
    {
    case VK_LEFT:   //����
      if(pZiJi->x>0)
        pZiJi->x-=20;
      break;
    case VK_RIGHT:  //����
      if(pZiJi->x<530)
      pZiJi->x+=20;
      break;
    case VK_UP:   //����
      if(pZiJi->y>0)
      pZiJi->y-=20;
      break;
    case VK_DOWN:  //����
      if(pZiJi->y<520)
      pZiJi->y+=20;
      break;
    case VK_SPACE:  //�ո����ӵ�
      ZaoZiDan();
      break;
    }
    break;
  case WM_CREATE:   //����
    srand(time(NULL)); 
    pZiJi=(struct Node*)malloc(sizeof(struct Node));
    pZiJi->x=200;     //�Լ���x
    pZiJi->y=500;     //�Լ���y
    SetTimer(hWnd,TIMER_DIREN,1000,NULL);  //���ö�ʱ��
    SetTimer(hWnd,TIMER_DIRENMOVE,200,NULL);
    SetTimer(hWnd,TIMER_ZIDAN,100,NULL);
    SetTimer(hWnd,TIMER_DIRENRELEASE,300,NULL);
    break;
  }
  return DefWindowProc(hWnd,msg,wParam,lParam);
}
    
void ZaoDiRen()  //���ӵ�
{
  DiRen *u;
  u=(struct Node*)malloc(sizeof(struct Node));
  u->x=rand()%550;   //�ӵ���x�������
  u->y=-10;      //���ֵ�������̶�
  u->pnext=NULL;
  if(NULL==pDiRen) 
  {
    pDiRen=u;
  }
  else
  {
    u->pnext=pDiRen;   //���²������������ͷ
    pDiRen=u;
  
  }
}
void ShowDiRen(struct Node *pHead,HWND hWnd)  //��ʾ����
{
  HDC hdc;
  HDC memdc;
  HBITMAP hbm;
  BITMAP bminfo;
  hdc=GetDC(hWnd);
  hbm=LoadBitmap(GetModuleHandle(NULL),MAKEINTRESOURCE(IDB_BITMAP1));//�������λͼ
  GetObject(hbm, sizeof(bminfo), &bminfo);
  memdc=CreateCompatibleDC(hdc);
  SelectObject(memdc,hbm);
  while(pHead!=NULL) //��������Ϊ�գ���ʾ�л�
  {
    BitBlt(hdc,pHead->x,pHead->y,40,40,memdc,0,0,SRCCOPY);
    pHead=pHead->pnext;
  }
  DeleteDC(memdc);
  ReleaseDC(hWnd,hdc);
  DeleteObject(hbm);
}
void ZaoZiJi(HWND hWnd)
{
  HDC hdc;
  HDC memdc;
  HBITMAP hbm;
  BITMAP bminfo;
  hdc=GetDC(hWnd);
  hbm=LoadBitmap(GetModuleHandle(NULL),MAKEINTRESOURCE(IDB_BITMAP3));//�����Լ���λͼ
  GetObject(hbm, sizeof(bminfo), &bminfo);
  memdc=CreateCompatibleDC(hdc);
  SelectObject(memdc,hbm);
  BitBlt(hdc,pZiJi->x,pZiJi->y,40,40,memdc,0,0,SRCCOPY); //��ʾ�Լ�
  DeleteDC(memdc);
  ReleaseDC(hWnd,hdc);
  DeleteObject(hbm);
}
void ZaoZiDan()   //���ӵ�
{
  ZiDan *u;
  u=(ZiDan*)malloc(sizeof(ZiDan));
  u->x=pZiJi->x+15;
  u->y=pZiJi->y+10;
  u->pnext=NULL;
  if(pZiDan==NULL)
  {
    pZiDan=u;
  } 
  else
  {
    u->pnext=pZiDan;  //���ӵ���������ͷ
    pZiDan=u;
  }
}
void ShowZiDan(ZiDan *pHead,HWND hWnd) //��ʾ�ӵ�
{
  HDC hdc;
  HDC memdc;
  HBITMAP hbm;
  BITMAP bminfo;
  hdc=GetDC(hWnd);
  hbm=LoadBitmap(GetModuleHandle(NULL),MAKEINTRESOURCE(IDB_BITMAP2)); //�����ӵ�λͼ
  GetObject(hbm, sizeof(bminfo), &bminfo);
  memdc=CreateCompatibleDC(hdc);
  SelectObject(memdc,hbm);
  while(pHead!=NULL)  //�ӵ�����Ϊ�գ���ʾ�ӵ�
  {
    /*Ellipse(hdc,pHead->x,pHead->y,pHead->x+5,pHead->y+5);*/
    BitBlt(hdc,pHead->x,pHead->y,10,10,memdc,0,0,SRCCOPY);
    pHead=pHead->pnext;
  } 
  DeleteDC(memdc);
  ReleaseDC(hWnd,hdc);
  DeleteObject(hbm);
}
  
void DiRenMove(DiRen *pHead)  //�����ƶ�
{
  while(pHead!=NULL)  //����Ϊ�գ������ƶ�
  { 
    if(score<500)
    {
      pHead->y+=10;
      pHead=pHead->pnext;
    }
    else
    {
      pHead->y+=20;
      pHead=pHead->pnext;
    }
  }
}
void ZiDanMove(DiRen *pHead)  //�ӵ��ƶ�
{
  while(pHead!=NULL)  //����Ϊ���ӵ��ƶ�
  {
    pHead->y-=20;
    pHead=pHead->pnext;
  }
}
  
void shoot(HWND hWnd,FeiJi *ziji,DiRen **diren,ZiDan **zidan) //�ж��Ƿ���
{
  DiRen *js1=*diren;
  ZiDan *js2=*zidan;
  int n = 1;
  while(js1!=NULL) //�ж��Լ��Ƿ�ײ��
  {
    //ײ���ͷŶ�ʱ����Ϸ����
    if((ziji->x-js1->x<30&&ziji->x-js1->x>-38)&&(ziji->y-js1->y<25&&ziji->y-js1->y>-38))
    {
      KillTimer(hWnd,TIMER_DIREN);
      KillTimer(hWnd,TIMER_ZIDAN);
      KillTimer(hWnd,TIMER_DIRENMOVE);
      KillTimer(hWnd,TIMER_DIRENRELEASE);
      MessageBox(hWnd,"You Lose","����",MB_OK);
      PostQuitMessage(0);
      break;
    }
    else
      js1=js1->pnext;  //û���ж���һ���л�
  }
  js1=*diren;  //�л��ص�ͷ
  while((js1=*diren)!=NULL)  //�жϵ����Ƿ�Ϊ��
  {
    zidan = &pZiDan; 
    n = 0;
    while((js2=*zidan)!=NULL) //�ж��ӵ��Ƿ�Ϊ��
    {   
      //�л��е�
      if((js2->x - js1->x <= 40&&js2->x - js1->x>=-5)&&(js2->y - js1->y <= 40&&js2->y - js1->y>=-8))
      {
        score+=100;
        n = 1;
        *zidan = js2->pnext;
        if(js1->pnext!=NULL) //�����½ڲ�Ϊ�գ�ָ����һ���ͷ��е��ķɻ��ӵ�
        {
          *diren = js1->pnext;
          diren = &pDiRen;
          free(js1);
          free(js2);
        }
        else
          *diren = NULL; 
        break;
      }
      else
      {
        zidan = &js2->pnext;  //û�п���һ��
      }
    }
    if(n != 1)  //�ж��Ƿ����е�������
    {
      diren = &js1->pnext;
    }
  }
}
void ReleaseDiren(DiRen **pHead) //�ͷŷɳ���Ļ�ĵ���
{
  DiRen *js=*pHead;
  while((js=*pHead)!=NULL)
  {
    if(js->y>600)    //�ɳ���Ļ�ͷ�
    {
      *pHead=js->pnext;
      free(js);
    }
    else
    {
      pHead = &js->pnext;  //����һ��
    }
  }
}
void ReleaseZidan(ZiDan **pHead)  //�ͷ��ӵ�
{
  ZiDan *js=*pHead;
  while((js=*pHead)!=NULL)
  {
    if(js->y<0)    //�ɳ����ӵ��ͷ�
    {
      *pHead=js->pnext; 
      free(js);
    }
    else
      pHead=&js->pnext;  //û�ɳ�����һ��
  }
}