#pragma once
#include <string>
using namespace std;
namespace FHRLog {
	class console
	{

	public:
		void test();
		void info(string value);
		void warn(string value);
		void error(string value);
		void log(string value);
		void clear();
	};
}
