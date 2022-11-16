#include<stdio.h>
#include <emscripten/emscripten.h>

// #ifdef __EMSCRIPTEN__
// #include <emscripten/emscripten.h>
// #endif



int main() {
	// emscripten_run_script("console.log(42);");
    emscripten_run_script(R"(
		function my_print(s) {
			console.log("JS:my_print():", s);
		}
		my_print("Hello!");
	)");
	return 0;
}

 