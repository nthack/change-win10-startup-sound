#include <windows.h>
#include <stdio.h>
#pragma comment(lib,"winmm.lib")

// path of WAV file
// 音频路径 
#define wavPath "Windows XP startup.wav"

int main(int argc,char *argv[])
{
	// Disable Console window at once 
	// 第一时间隐藏终端窗口
	ShowWindow(FindWindow("ConsoleWindowClass",argv[0]),0);
	
	// 等待登陆界面，等待加载声卡驱动
	// Wait for the login view and load the sound drive 
	Sleep(1000);
	
	// Playing....
	// 播放 
	BOOL flag = PlaySound(wavPath, NULL, SND_FILENAME | SND_ASYNC);
	
	// Waiting for end
	// 等待播放完毕 
	Sleep(8777);
	
	return 0;
}

