#pragma once
#include<vector>
#include <QGuiApplication>
#include <QMatrix4x4>
#include <QOpenGLShaderProgram>
#include <QScreen>
#include <QtMath>
#include "openglwindow.h"



class STL_Reader {

public :
	STL_Reader();
	~STL_Reader();
	std::vector <GLdouble> stl_Read();

};
