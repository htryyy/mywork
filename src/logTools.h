/*
 * logTools.h
 *
 *  Created on: 2015Äê9ÔÂ4ÈÕ
 *      Author: Administrator
 */

#ifndef SRC_LOGTOOLS_H_
#define SRC_LOGTOOLS_H_
#include <log4cplus/logger.h>
#include <log4cplus/fileappender.h>
#include <log4cplus/consoleappender.h>
#include <log4cplus/layout.h>
using namespace log4cplus;
using namespace log4cplus::helpers;

class logTools
{
public:
	logTools();
	~logTools();
	void logMessage(char *logname,char *loglevel,char *loginfo);
private:

};



#endif /* SRC_LOGTOOLS_H_ */
