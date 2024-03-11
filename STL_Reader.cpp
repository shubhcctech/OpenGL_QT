#include "STL_Reader.h"
#include<fstream>
#include<sstream>

STL_Reader::STL_Reader() {

}

STL_Reader::~STL_Reader() {

}

std::vector<GLdouble> STL_Reader::stl_Read() {

    std::vector<GLdouble> vertices;
    std::ifstream inputFile("C:\\Users\\Shubham Kurkute\\Downloads\\Sphere3.stl");
    std::string line;
    while (std::getline(inputFile, line))
    {
        if (line.find("vertex") != std::string::npos)
        {
            double xCoordinate;
            double yCoordinate;
            double zCoordinate;
            std::string token;
            std::istringstream vertexStream(line);
            vertexStream >> token >> xCoordinate >> yCoordinate >> zCoordinate;
            vertices.push_back(xCoordinate);
            vertices.push_back(yCoordinate);
            vertices.push_back(zCoordinate);

        }

    }

    inputFile.close();
    return vertices;
}