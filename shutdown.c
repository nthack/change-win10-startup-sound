#include <windows.h>
#include <stdio.h>
#pragma comment(lib,"winmm.lib")

// path of WAV file
// ��Ƶ·�� 
#define wavPath "Windows XP shutdown.wav"

int main(int argc,char *argv[])
{
	// Disable Console window at once 
	// ��һʱ�������ն˴���
	ShowWindow(FindWindow("ConsoleWindowClass",argv[0]),0);
	
	
	// Playing....
	// ���� 
	BOOL flag = PlaySound(wavPath, NULL, SND_FILENAME | SND_ASYNC);
	
	// Waiting for end
	// �ȴ�������� 
	Sleep(8777);
	
	return 0;
}

