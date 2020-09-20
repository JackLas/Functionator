#ifndef IFUNCNODE_H
#define IFUNCNODE_H

class IFuncNode
{
private:
public:
	virtual ~IFuncNode(){}
	virtual double getResult() = 0;
};

#endif //IFUNCNODE_H