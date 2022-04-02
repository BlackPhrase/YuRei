#include <cstdlib>

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
	
	return EXIT_SUCCESS;
};