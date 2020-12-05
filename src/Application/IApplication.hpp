#ifndef __IAPPLICATION_HPP__
#define __IAPPLICATION_HPP__

class IApplication
{
public:
    IApplication() = default;
	virtual ~IApplication() = default;

    virtual void run() = 0;

protected:
	IApplication(const IApplication&) = delete;
	IApplication(const IApplication&&) = delete;
	IApplication& operator=(const IApplication&) = delete;
	IApplication& operator=(const IApplication&&) = delete;
};

#endif //__IAPPLICATION_HPP__