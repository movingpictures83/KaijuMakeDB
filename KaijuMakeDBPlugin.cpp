#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "KaijuMakeDBPlugin.h"

void KaijuMakeDBPlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void KaijuMakeDBPlugin::run() {}

void KaijuMakeDBPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "kaiju-makedb";
addRequiredParameter("-s", "database");
addRequiredParameter("-t", "parallel");
 system(myCommand.c_str());
}

PluginProxy<KaijuMakeDBPlugin> KaijuMakeDBPluginProxy = PluginProxy<KaijuMakeDBPlugin>("KaijuMakeDB", PluginManager::getInstance());
