#ifndef __ARGSHELPER_HPP__
#define __ARGSHELPER_HPP__

class ArgsHelper final
{
public:
    ArgsHelper(int argc, char** argv);
    ~ArgsHelper() = default;

    bool isTestApp();

private:
    bool mTestApp;

protected:
    ArgsHelper(const ArgsHelper&) = delete;
    ArgsHelper(const ArgsHelper&&) = delete;
    ArgsHelper& operator=(const ArgsHelper&) = delete;
    ArgsHelper& operator=(const ArgsHelper&&) = delete;
};

#endif //__ARGSHELPER_HPP__