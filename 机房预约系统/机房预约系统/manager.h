﻿#pragma once
#include <iostream>
#include<fstream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
#include "Identity.h"
#include"globalFile.h"
#include"computerRoom.h"
#include"student.h"
#include"teacher.h"
class Manager : public Identity
{
public:
	//默认构造
	Manager();
	//有参构造 管理员姓名，密码
	Manager(string name, string pwd);
	//选择菜单
	virtual void operMenu();
	//添加账号
	void addPerson();
	//查看账号
	void showPerson();
	//查看机房信息
	void showComputer();
	//清空预约记录
	void cleanFile();
	//检测重复
	bool checkRepeat(int id, int type);
	//初始化容器
	void initVector();
	//学生容器
	vector<Student> vStu;
	//教师容器
	vector<Teacher> vTea;
	vector<ComputerRoom> vCom;
};