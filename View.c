#include <windows.h>
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
   SYSTEM_INFO info;
   GetSystemInfo(&info); 
   printf("Total Page size : %u\n", info.dwPageSize); 
   printf("Number of Cores : %u\n",info.dwNumberOfProcessors); 
   getch();
}
