convert: convert.h convert.c evidence_convert.c
	clang -Wall -o ev convert.c evidence_convert.c
