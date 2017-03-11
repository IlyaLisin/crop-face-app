#include "Filelogger.h"

FileLogger::FileLogger() {}

void FileLogger::log(std::string message) {
    std::ofstream fout;
    fout.open("log.log", std::ios_base::app);

    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);

    fout << asctime(timeinfo);
    fout << " " << message << std::endl;

    fout.close();
}
