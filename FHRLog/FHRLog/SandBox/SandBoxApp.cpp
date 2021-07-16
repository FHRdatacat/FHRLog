#include <Log.h>
#include <Windows.h>
#include <iostream>
int main()
{
	FHRLog::console* console = new FHRLog::console();
	console->error("Suscces!");
	console->info("Suscces!");
	console->warn("Suscces!");
	system("pause");
}