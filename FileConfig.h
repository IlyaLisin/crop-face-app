#ifndef FILECONFIG_H
#define FILECONFIG_H

#include "IConfig.h"
#include "tinyxml2.h"

class FileConfig:public IConfig {
private:
    std::string _imagePath;
    std::string _haarcascadePath;
    void read(std::string path);
public:
    FileConfig(std::string path);

    std::string getImagePath();
    std::string getHaarcascadePath();
};

#endif
