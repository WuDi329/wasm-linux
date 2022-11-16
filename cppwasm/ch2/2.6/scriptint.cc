#include<stdio.h>
#include <emscripten/emscripten.h>

// #ifdef __EMSCRIPTEN__
// #include <emscripten/emscripten.h>
// #endif



int main() {
	// emscripten_run_script("console.log(42);");
    int num = emscripten_run_script_int(R"(
function show_me_the_number() {
			return 13;
		}
		show_me_the_number();
	)");
    printf("num:%d\n", num);
	return 0;
}

 