#include <cstdlib>
#include <cstring>

#include <memory>

#include <iostream>

#include "capplication.hpp"

int main(int argc, char **argv)
{
	char sConfigFile[32]{};
	char sStartMap[32]{};
	
	bool bEditorMode{false};
	
	for(int i = 0; i < argc; ++i)
	{
		if(strstr(argv[i], "-i"))
			; // TODO
		
		if(strstr(argv[i], "-cfg"))
			strcpy(sConfigFile, argv[i + 1]);
		
		if(strstr(argv[i], "-start"))
			strcpy(sStartMap, argv[i + 1]);
		
		if(strstr(argv[i], "-load"))
			; // TODO
		
		if(strstr(argv[i], "-editor"))
			bEditorMode = true;
	};
	
	auto pApp{std::make_unique<capplication>()};
	
	pApp->start("");
	
	while(true)
		pApp->on_frame();
	
	//std::cin.get();
	
	return EXIT_SUCCESS;
};