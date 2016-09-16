{\rtf1\ansi\ansicpg1252\cocoartf1404\cocoasubrtf340
{\fonttbl\f0\fswiss\fcharset0 Helvetica;\f1\fnil\fcharset0 AppleSymbols;}
{\colortbl;\red255\green255\blue255;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <sstream>\
#include \'93Guerrero.h\'94\
#include  <string>\
#include <iostream>\
\
using std::string;\
using std::stringstream;\
using std::cout;\
\
Guerrero::Guerrero() \{\
\
\}\
\
Guerrero::Guerrero(string name, int HP, double offence, double defence, int force, int luck) : name(name), HP(HP) \{\
	if(offence > 1) \{\
		this -> offence = offence/100;\
	\} else if (offence > 0 && offence < 1) \{\
		this -> offence = offence;\
	\} else \{\
		cout << \'93incorrect values, setting offence to 10%\'94;\
		this -> offence = 0.1;\
	\}\
	if(force > 50 || force < 0) \{\
		cout << \'93value not permitted, setting force to max lvl\'85 \\n\'94;\
		this -> force = 50;\
	\}\
\
	if(luck < 0 || luck > 10) \{\
		cout << \'93value not permitted, setting luck to min lvl\'85 \\n\'94;\
		this -> luck = 0;\
	\}\
\}\
\
Guerrero::
\f1 \uc0\u8764 
\f0 Guerrero() \{\
\
\}\
\
string Guerrero::getName() \{\
	return this -> name;\
\}\
\
void Guerrero::setName(string name) \{\
	this -> name = name;\
\}\
\
int Guerrero::getHP() \{\
	return this -> HP;\
\}\
\
void Guerrero::setHP(int HP) \{\
	this -> HP = HP;\
\}\
\
double Guerrero::getOffence() \{\
	return this -> offence;\
\}}