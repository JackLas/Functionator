#include "ArgsHelper.hpp"
#include "cstring"

static const char* testArg = "-test"; 

ArgsHelper::ArgsHelper(int argc, char** argv)
: mTestApp(false)
{
    if (argc >= 2)
    {
        if (strcmp(argv[1], testArg) == 0)
        {
            mTestApp = true;
        }
    }
}

bool ArgsHelper::isTestApp()
{
    return mTestApp;
}