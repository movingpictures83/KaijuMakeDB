#ifndef KAIJUMAKEDBPLUGIN_H
#define KAIJUMAKEDBPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class KaijuMakeDBPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "KaijuMakeDB";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
