//pkg.js
//LibraryManager.library可以简单的理解为JavaScript注入C环境的库，既2.2.1中所说的“模块B”。虽然事实上它远比这要复杂，但这种简单的类比足以应对大部分常规应用。
mergeInto(LibraryManager.library, {
    js_add: function (a, b) {
        console.log("js_add");
        return a + b;
    },

    js_console_log_int: function (param) {
        console.log("js_console_log_int:" + param);
    }
})

//之后调用  emcc capi_js.cc --js-library pkg.js -o capi_js.js
//  --js-library pkg.js意为将pkg.js作为附加库参与链接。命令执行后得到capi_js.js以及capi_js.wasm。按照之前章节的例子在网页中将其载入，并调用C导出的print_the_answer()函数：