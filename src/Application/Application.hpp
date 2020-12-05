#ifndef __APPLICATION_H__
#define __APPLICATION_H__

#include "IApplication.hpp"

class Application : public IApplication
{
public:
	Application();
	~Application();

	void run() override;
};

#endif //__APPLICATION_H__