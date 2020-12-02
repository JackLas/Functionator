#ifndef __APPLICATION_H__
#define __APPLICATION_H__

#include <string>

class Application
{
public:
	Application();
	~Application();

	void run();

protected:
	Application(const Application&) = delete;
	Application(const Application&&) = delete;
	Application& operator=(const Application&) = delete;
	Application& operator=(const Application&&) = delete;

private:
	std::string getStringFromUser();
};

#endif //__APPLICATION_H__