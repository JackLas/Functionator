#ifndef __TESTAPP_H__
#define __TESTAPP_H__

#include "IApplication.hpp"

class TestApp : public IApplication
{
public:
	TestApp();
	~TestApp();

	void run() override;
};

#endif //__TESTAPP_H__