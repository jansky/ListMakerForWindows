#include <Windows.h>


typedef struct LMLIST
{
	LPSTR filename;
	char title[128];
	char author[128];
	BOOL openSuccess;
	char **contents;
	int numLines;


}LMLIST;

LMLIST OpenLMList(LPSTR filename);
BOOL SaveLMList(LMLIST lmList);