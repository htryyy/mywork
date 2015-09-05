/*
 * logToolsTest.cpp
 *
 *  Created on: 2015年9月4日
 *      Author: Administrator
 */

#include <iostream>
#include "logTools.h"
#include "log4cplus/logger.h"
#include "log4cplus/consoleappender.h"
#include "log4cplus/loglevel.h"
using namespace std;
using namespace log4cplus;
int main()
{
	logTools logtools;
	logtools.logMessage("test","DEBUG","DEBUG testing");
	logtools.logMessage("test","INFO","INFO testing");
	logtools.logMessage("test","WARN","WARN testing");
	logtools.logMessage("test","ERROR","ERROR testing");
	logtools.logMessage("test","FATAL","FATAL testing");
	return 0;
}
/*
#include <log4cplus/logger.h>
#include <log4cplus/fileappender.h>
#include <log4cplus/consoleappender.h>
#include <log4cplus/layout.h>
using namespace log4cplus;
using namespace log4cplus::helpers;
using namespace std;
// Link Lib

int main(int argc, char* argv[])
{
        // 定义一个控制台的Appender
        SharedAppenderPtr pConsoleAppender(new ConsoleAppender());

        // 定义一个简单的Layout,并绑定到Appender
        auto_ptr<Layout> pSimpleLayout(new SimpleLayout());
        pConsoleAppender->setLayout(pSimpleLayout);

        // 定义Logger,并设置优先级
        Logger pTestLogger = Logger::getInstance("LoggerName");
        pTestLogger.setLogLevel(WARN_LOG_LEVEL);

        // 将需要关联Logger的Appender添加到Logger上
        pTestLogger.addAppender(pConsoleAppender);

        // 输出日志信息
        LOG4CPLUS_WARN(pTestLogger, "This is a <Warn> log message...");

        return 0;
}
*/
