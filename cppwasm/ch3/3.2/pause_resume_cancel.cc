//pause_resume_cancel.cc
#include <emscripten.h>
#include <stdio.h>
#ifndef EM_PORT_API
#	if defined(__EMSCRIPTEN__)
#		include <emscripten.h>
#		if defined(__cplusplus)
#			define EM_PORT_API(rettype) extern "C" rettype EMSCRIPTEN_KEEPALIVE
#		else
#			define EM_PORT_API(rettype) rettype EMSCRIPTEN_KEEPALIVE
#		endif
#	else
#		if defined(__cplusplus)
#			define EM_PORT_API(rettype) extern "C" rettype
#		else
#			define EM_PORT_API(rettype) rettype
#		endif
#	endif
#endif

void msg_loop() {
	static int count = 0;
	if (count % 60 == 0) {
		printf("count:%d\n", count);
	}
	count++;
}

EM_PORT_API(void) pause_main_loop() {
	emscripten_pause_main_loop();
	printf("pause_main_loop()\n");
}

EM_PORT_API(void) resume_main_loop() {
	emscripten_resume_main_loop();
	printf("resume_main_loop()\n");
}

EM_PORT_API(void) cancel_main_loop() {
	emscripten_cancel_main_loop();
	printf("cancel_main_loop()\n");
}

int main() {
	printf("main() start\n");
	emscripten_set_main_loop(msg_loop, 0, 1);
	printf("main() end\n");
	return 0;
}