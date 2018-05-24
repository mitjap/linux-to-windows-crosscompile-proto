#include <iostream>

using namespace std;

#include <windows.h>
#include <stdio.h>
#include <tchar.h>

#define DIV 1024
#define WIDTH 7


int main()
{
    MEMORYSTATUSEX statex;

      statex.dwLength = sizeof (statex);

      GlobalMemoryStatusEx (&statex);

      _tprintf (TEXT("There is  %*ld percent of memory in use.\n"),
                WIDTH, statex.dwMemoryLoad);
      _tprintf (TEXT("There are %*I64d total KB of physical memory.\n"),
                WIDTH, statex.ullTotalPhys/DIV);
      _tprintf (TEXT("There are %*I64d free  KB of physical memory.\n"),
                WIDTH, statex.ullAvailPhys/DIV);
      _tprintf (TEXT("There are %*I64d total KB of paging file.\n"),
                WIDTH, statex.ullTotalPageFile/DIV);
      _tprintf (TEXT("There are %*I64d free  KB of paging file.\n"),
                WIDTH, statex.ullAvailPageFile/DIV);
      _tprintf (TEXT("There are %*I64d total KB of virtual memory.\n"),
                WIDTH, statex.ullTotalVirtual/DIV);
      _tprintf (TEXT("There are %*I64d free  KB of virtual memory.\n"),
                WIDTH, statex.ullAvailVirtual/DIV);

      // Show the amount of extended memory available.

      _tprintf (TEXT("There are %*I64d free  KB of extended memory.\n"),
                WIDTH, statex.ullAvailExtendedVirtual/DIV);

    cout << "Hello World!" << endl;
    return 0;
}
