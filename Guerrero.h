{\rtf1\ansi\ansicpg1252\cocoartf1404\cocoasubrtf340
{\fonttbl\f0\fswiss\fcharset0 Helvetica;\f1\fnil\fcharset0 AppleSymbols;}
{\colortbl;\red255\green255\blue255;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #pragma once\
#include <string>\
\
using std::string;\
\
class Guerrero \{\
	protected:\
		string name;\
		int HP;\
		double offence;\
		double defence;\
		int force;\
		int luck;\
\
	public:\
		Guerrero();\
		
\f1 \uc0\u8764 
\f0 Guerrero();\
		Guerrero(string, int, double, double, int, int);\
		string getName();\
		void setName(string);\
		int getHP();\
		void setHP();\
		double getOffence();\
		void setOffence();\
		double getDefence();\
		void setDefence();\
		int getForce();\
		void setForce();\
		int getLuck();\
		void setLuck();\
\};}