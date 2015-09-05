/*
 * logTools.cpp
 *
 *  Created on: 2015Äê9ÔÂ4ÈÕ
 *      Author: Administrator
 */
#include "logTools.h"

#include<iostream>
#include <string>
#include "log4cplus/logger.h"
#include "log4cplus/consoleappender.h"
#include "log4cplus/loglevel.h"
using namespace std;
using namespace log4cplus;
SharedAppenderPtr pFileAppender2(new FileAppender("../log/logFile.log"));
logTools::logTools()
{
    auto_ptr<Layout> pTTCLayout(new TTCCLayout());
    pFileAppender2->setLayout(pTTCLayout);
    //Logger pTestLogger = Logger::getInstance(_T("LoggerName"));
}

logTools::~logTools()
{

}

void logTools::logMessage(char *logname,char *loglevel,char *loginfo)
{
	Logger pTestLogger = Logger::getInstance(logname);
	pTestLogger.addAppender(pFileAppender2);
	if(!strncmp(loglevel,"DEBUG",5))
	{
		LOG4CPLUS_DEBUG(pTestLogger, loginfo);
	}
	else if(!strncmp(loglevel,"INFO",4))
	{
		LOG4CPLUS_INFO(pTestLogger, loginfo);
	}
	else if(!strncmp(loglevel,"WARN",4))
	{
		LOG4CPLUS_WARN(pTestLogger, loginfo);
	}
	else if(!strncmp(loglevel,"ERROR",5))
	{
		LOG4CPLUS_ERROR(pTestLogger, loginfo);
	}
	else if(!strncmp(loglevel,"FATAL",5))
	{
		LOG4CPLUS_FATAL(pTestLogger, loginfo);
	}
	else
	{
		cout<<"System Message: Illegal log level!!"<<endl;;
	}
}


