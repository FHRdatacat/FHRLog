#include <Log.h>
#include <stdio.h>
#include <Windows.h>
#include<iostream>
using namespace std;
namespace FHRLog
{
	void console::test()
	{
		printf("Suscces!");
	}
	void console::error(string value)
	{
		SYSTEMTIME s;
		GetLocalTime(&s);
		printf("[%d/%d/%d/ %02d:%02d:%02d]", s.wYear, s.wMonth, s.wDay, s.wHour, s.wMinute, s.wSecond);
		cout << " [CONSOLE] [";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "ERROR";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
		cout << "]" + value << endl;
	}
	void console::info(string value)
	{
		SYSTEMTIME s;
		GetLocalTime(&s);
		printf("[%d/%d/%d/ %02d:%02d:%02d]", s.wYear, s.wMonth, s.wDay, s.wHour, s.wMinute, s.wSecond);
		cout << " [CONSOLE] [";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "INFO";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
		cout << "]" + value << endl;
	}
	void console::log(string value)
	{
		SYSTEMTIME s;
		GetLocalTime(&s);
		printf("[%d/%d/%d/ %02d:%02d:%02d]", s.wYear, s.wMonth, s.wDay, s.wHour, s.wMinute, s.wSecond);
		cout << " [CONSOLE] [";
		cout << "LOG";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
		cout << "]" + value << endl;
	}
	void console::warn(string value)
	{
		SYSTEMTIME s;
		GetLocalTime(&s);
		printf("[%d/%d/%d/ %02d:%02d:%02d]", s.wYear, s.wMonth, s.wDay, s.wHour, s.wMinute, s.wSecond);
		cout << " [CONSOLE] [";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		cout << "WARN";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
		cout << "]" + value << endl;
	}
	void console::clear()
	{
		system("cls");
	}
}