#include <stdio.h>
#include <Windows.h>
#include <Windowsx.h>
#include <mmsystem.h>

int main(int argc, char *argv[])
{
  PlaySound("D:\\Coding\\alaram\\song.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
  return 0;
}

