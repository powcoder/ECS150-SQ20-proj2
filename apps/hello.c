https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "VirtualMachine.h" 	 	    		

void VMMain(int argc, char *argv[]){
    int Index;
    VMPrint("In VMMain:\n");
    for(Index = 0; Index < argc; Index++){
        VMPrint("%d = %s\n", Index, argv[Index]);
    }
    VMPrint("Goodbye\n");    
}

