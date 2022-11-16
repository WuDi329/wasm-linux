#include<stdio.h>
#include <emscripten/emscripten.h>

// #ifdef __EMSCRIPTEN__
// #include <emscripten/emscripten.h>
// #endif



int main() {
	// emscripten_run_script("console.log(42);");
    	const char* str = emscripten_run_script_string(R"(
		function show_me_the_answer() {
			return "The answer is 42.";
		}
		show_me_the_answer();
	)");
	printf("%s\n", str);
	return 0;
}

 