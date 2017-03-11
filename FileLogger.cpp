#include "FileLogger.h"
#include <iostream>

FileLogger::FileLogger() {}

void FileLogger::log(std::string message) {
    std::ofstream fout;
    try {
        fout.open("log.log", std::ios_base::app);

        if (fout.is_open()) {
            time_t seconds = time(NULL);
            tm* timeinfo = localtime(&seconds);

            fout << asctime(timeinfo);
            fout << " " << message << std::endl;
        } else {
            std::cout << "Exception opening/reading log file" << std::endl;
        }
    } catch(const std::ifstream::failure& e) {
        std::cout << "Exception opening/reading log file" << std::endl;
    } catch(...) {
        std::cout << "Undefined error" << std::endl;
        exit(1);
    }

    if (fout.is_open()) {
        fout.close();
    }
}
