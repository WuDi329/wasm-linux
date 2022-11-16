#include<stdio.h>
#include <emscripten/emscripten.h>

// #ifdef __EMSCRIPTEN__
// #include <emscripten/emscripten.h>
// #endif


char* get_js_code(){
	static char buf[1024];
	sprintf(buf, "console.log('你好，Emscripten！');");
	return buf;
} 

int main() {
	// emscripten_run_script("console.log(42);");
    emscripten_run_script(get_js_code());
	return 0;
}

 