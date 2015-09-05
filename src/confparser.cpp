/*
 * confparser.cpp
 *
 *  Created on: 2015Äê9ÔÂ4ÈÕ
 *      Author: Administrator
 */
#include<list>
#include<iostream>
#include <stdio.h>
#include "strManager.h"
#include "confparser.h"
using namespace std;

ConfigParser::ConfigParser()
{
	job_num = 0;
	memset(seed,0,sizeof(seed));
	deeps = 0;
	//module_path = NULL;
	memset(module_path,0,sizeof(module_path));
	module_name.clear();
	file_type.clear();
}
ConfigParser::~ConfigParser()
{

}

void ConfigParser::loadConf(char *conf_filepath)
{
	InfoList info,infolist;
	char temp[1024];
	int conflist = getList(conf_filepath,info);
	if(conflist==0)
	{
		cout<<"getlist error\n"<<endl;
		logtools.logMessage("System INFO","ERROR","Getlist ERROR");
	}
	info = disposeStr(info);
	for(int i =0;i<info.size();i++)
	{
		infolist.clear();
		memset(temp,0,sizeof(temp));
		snprintf(temp,sizeof(temp),"%s",info[i].c_str());
		splitStr(temp,strlen(temp),infolist,'=');

		if(!strncmp(infolist[0].c_str(),"job_num",7))
		{
			job_num = atoi(infolist[1].c_str());
		}
		else if(!strncmp(infolist[0].c_str(),"seeds",5))
		{
			sprintf(seed,"%s",infolist[1].c_str());
		}
		else if(!strncmp(infolist[0].c_str(),"max_depth",9))
		{
			deeps = atoi(infolist[1].c_str());
		}
		else if(!strncmp(infolist[0].c_str(),"module_path",11))
		{
			sprintf(module_path,"%s",infolist[1].c_str());
		}
		else if(!strncmp(infolist[0].c_str(),"load_module",11))
		{
			module_name.push_back(infolist[1].c_str());
		}
		else if(!strncmp(infolist[0].c_str(),"accept_type",11))
		{
			file_type.push_back(infolist[1].c_str());
		}
	}

}

char *ConfigParser::getSeed()
{
	return this->seed;
}

int ConfigParser::getDeeps()
{
	return this->deeps;
}

int ConfigParser::getJobNum()
{
	return this->job_num;
}

char *ConfigParser::getModulePath()
{
	return this->module_path;
}

vector<string> ConfigParser::getModuleName()
{
	return this->module_name;
}

vector<string> ConfigParser::getFileType()
{
	return this->file_type;
}



