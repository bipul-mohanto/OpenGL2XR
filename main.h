﻿// openxrOptix.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

#include <stdio.h>
#include <vector>
//#define XR_NO_PROTOTYPES 1


#include "openxr/openxr.h"
//#define XR_USE_GRAPHICS_API_VULKAN 1
#define XR_USE_GRAPHICS_API_OPENGL 1
#define XR_USE_PLATFORM_WIN32 1


#include <Windows.h>
#include "openxr/openxr_platform.h"


//#include <GL/glew.h>
// note: replacing glew with glad
#include <glad.h>

#include <GLFW/glfw3.h>
#define GLFW_EXPOSE_NATIVE_WIN32 1
#define GLFW_EXPOSE_NATIVE_WGL 1
#include <GLFW/glfw3native.h>

#include "GLSLShader.h"

#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtc/quaternion.hpp>
#include <gtc/type_ptr.hpp>

// TODO: Reference additional headers your program requires here.
