#include "stdafx.h"

int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{
 // TODO: Place code here.
 int ret=MessageBox(NULL,TEXT("�㳬��18������"),TEXT("����"),MB_YESNO|MB_ICONQUESTION);
if(ret==IDYES)
{
 MessageBox(NULL,TEXT("���ǳ�������"),TEXT("�ظ�"),MB_OK);
}
else
{
 MessageBox(NULL,TEXT("����δ��������"),TEXT("�ظ�"),MB_OK);
}
 return 0;
}