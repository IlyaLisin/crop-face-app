#include "FileConfig.h"

FileConfig::FileConfig(std::string path)
{
    read(path);
}

void FileConfig::read(std::string path) {

    TiXmlDocument* doc = new TiXmlDocument(path);

    if (!doc->LoadFile()) {
        std::cout << "Error loading xml file";
        exit(1);
    }

    TiXmlElement* xml_path = 0, *xml_imagePath = 0, *xml_haarcascadePath = 0;

    try {
    xml_path = doc->FirstChildElement("path");
    xml_imagePath = xml_path->FirstChildElement("imagePath");
    xml_haarcascadePath = xml_path->FirstChildElement("haarcascadePath");

    _imagePath = xml_imagePath->GetText();
    _haarcascadePath = xml_haarcascadePath->GetText();
    } catch(...) {
        std::cout << "Error reading xml file";
        exit(1);
    }
}

std::string FileConfig::getImagePath() {
    return _imagePath;
}

std::string FileConfig::getHaarcascadePath() {
    return _haarcascadePath;
}
