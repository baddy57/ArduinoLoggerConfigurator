/*
 Name:		LoggerConfigurator.h
 Created:	2022-11-03 20:25:06
 Author:	cristian
 Editor:	http://www.visualmicro.com
*/

#ifndef PLATFORM_LOGGER_HPP_
#define PLATFORM_LOGGER_HPP_

#include "lib/arduino-logger/src/AVRCircularBufferLogger.h"

#ifndef LOG_BUFFER_SIZE
#define LOG_BUFFER_SIZE 512
#endif

using PlatformLogger = PlatformLogger_t<AVRCircularLogBufferLogger<LOG_BUFFER_SIZE>>;

#endif