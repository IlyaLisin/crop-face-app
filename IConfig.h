#ifndef ICONFIG_H
#define ICONFIG_H

#include <string>

class IConfig{
public:
    IConfig() {}

    virtual std::string getImagePath()=0;
    virtual std::string getHaarcascadePath()=0;
};

#endif
