#include<stdio.h>

#ifdef __EMSCRIPTEN__
#include <emscripten/emscripten.h>
#endif

int main() {
	// EM_ASM(console.log(1231321));
	return 0;
}