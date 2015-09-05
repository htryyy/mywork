/*
 * confparser.h
 *
 *  Created on: 2015Äê9ÔÂ4ÈÕ
 *      Author: Administrator
 */

#ifndef SRC_CONFPARSER_H_
#define SRC_CONFPARSER_H_
#include <vector>
#include <string>
#include "logTools.h"
using namespace std;

typedef struct Config
{
	int job_num;
	char seed[1024];
	int  deeps;
	char module_path[1024];

	vector<string> module_name;
	vector<string> file_type;
}Config;

class ConfigParser
{
public:
	ConfigParser();
	~ConfigParser();
	void loadConf(char *conf_filepath);
	char  *getSeed();
	int getDeeps();
	int getJobNum();
	char *getModulePath();
	vector<string> getModuleName();
	vector<string> getFileType();
private:
	int job_num;
	char seed[1024];
	int  deeps;
	char module_path[1024];
	vector<string> module_name;
	vector<string> file_type;

	logTools logtools;
};

#endif /* SRC_CONFPARSER_H_ */
