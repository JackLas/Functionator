#ifndef FUNCTIONATOR_H
#define FUNCTIONATOR_H

class Functionator
{
private:
public:
	Functionator();
	~Functionator();

	void calc();

	Functionator(const Functionator& func) = delete;
	Functionator& operator=(const Functionator& func) = delete;
};

#endif //FUNCTIONATOR_H