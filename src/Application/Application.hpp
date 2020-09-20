#ifndef APPLICATION_H
#define APPLICATION_H

class Application
{
private:

public:
	Application();
	~Application();

	void start();

	Application(const Application& app) = delete;
	Application& operator=(const Application& app) = delete;
};

#endif //APPLICATION_H