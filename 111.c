#include "stdafx.h"

int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{
 // TODO: Place code here.
 int ret=MessageBox(NULL,TEXT("你超过18岁了吗？"),TEXT("提问"),MB_YESNO|MB_ICONQUESTION);
if(ret==IDYES)
{
 MessageBox(NULL,TEXT("你是成年人了"),TEXT("回复"),MB_OK);
}
else
{
 MessageBox(NULL,TEXT("你是未成年人了"),TEXT("回复"),MB_OK);
}
 return 0;
}