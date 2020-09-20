#ifndef APPLICATION_H
#define APPLICATION_H

#include <string>

class Application
{
private:

public:
	Application();
	~Application();

	void run();

	Application(const Application& app) = delete;
	Application& operator=(const Application& app) = delete;

private:
	std::string getStringFromUser();
};

#endif //APPLICATION_H