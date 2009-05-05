#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
    LPSTR lpCmdLine, int nCmdShow)
{
	MessageBox(NULL, "Hello!", "Hello from Message Box", MB_OK);
	return 0;
}
