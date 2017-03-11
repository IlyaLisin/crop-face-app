#include "Ilogger.h"
#include <fstream>

class FileLogger:public ILogger
{
public:
    FileLogger();

    void log(std::string message);
};

