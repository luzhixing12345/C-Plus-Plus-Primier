# 第一章 初识C语言

## GNU

GNU项目始于1987,是一个开发大量免费的UNIX软件的集合, GNU的意思是GNU's Not UNIX

GNU 编译器集合也被称为GCC, 其中包含GCC C编译器

GCC在一个指导委员会的带领下只需不断地开发,它的C编译器紧跟C标准的改动.GCC有各种版本以适应不同的硬件平台和操作系统,包括UNIX,LINUX WINDOWS. 许多使用gcc的系统都用cc作为gcc的别名

LLVM项目是cc的另一个替代品,它的Clang编译器处理C代码,有多种版本共不同平台使用,Clang也对最新的C标准支持的很好

显示你所使用的编译器及其版本

```bash
gcc -v
```

```txt
Using built-in specs.
COLLECT_GCC=gcc
COLLECT_LTO_WRAPPER=D:/mingw64/bin/../libexec/gcc/x86_64-w64-mingw32/8.1.0/lto-wrapper.exe
Target: x86_64-w64-mingw32
Configured with: ../../../src/gcc-8.1.0/configure --host=x86_64-w64-mingw32 --build=x86_64-w64-mingw32 --target=x86_64-w64-mingw32 --prefix=/mingw64 --with-sysroot=/c/mingw810/x86_64-810-posix-seh-rt_v6-rev0/mingw64 --enable-shared --enable-static --disable-multilib --enable-languages=c,c++,fortran,lto --enable-libstdcxx-time=yes --enable-threads=posix --enable-libgomp --enable-libatomic --enable-lto --enable-graphite --enable-checking=release --enable-fully-dynamic-string --enable-version-specific-runtime-libs --disable-libstdcxx-pch --disable-libstdcxx-debug --enable-bootstrap --disable-rpath --disable-win32-registry --disable-nls --disable-werror --disable-symvers --with-gnu-as --with-gnu-ld --with-arch=nocona --with-tune=core2 --with-libiconv --with-system-zlib --with-gmp=/c/mingw810/prerequisites/x86_64-w64-mingw32-static --with-mpfr=/c/mingw810/prerequisites/x86_64-w64-mingw32-static --with-mpc=/c/mingw810/prerequisites/x86_64-w64-mingw32-static --with-isl=/c/mingw810/prerequisites/x86_64-w64-mingw32-static --with-pkgversion='x86_64-posix-seh-rev0, Built by MinGW-W64 project' --with-bugurl=https://sourceforge.net/projects/mingw-w64 CFLAGS='-O2 -pipe -fno-ident -I/c/mingw810/x86_64-810-posix-seh-rt_v6-rev0/mingw64/opt/include -I/c/mingw810/prerequisites/x86_64-zlib-static/include -I/c/mingw810/prerequisites/x86_64-w64-mingw32-static/include' CXXFLAGS='-O2 -pipe -fno-ident -I/c/mingw810/x86_64-810-posix-seh-rt_v6-rev0/mingw64/opt/include -I/c/mingw810/prerequisites/x86_64-zlib-static/include -I/c/mingw810/prerequisites/x86_64-w64-mingw32-static/include' CPPFLAGS=' -I/c/mingw810/x86_64-810-posix-seh-rt_v6-rev0/mingw64/opt/include -I/c/mingw810/prerequisites/x86_64-zlib-static/include -I/c/mingw810/prerequisites/x86_64-w64-mingw32-static/include' LDFLAGS='-pipe -fno-ident -L/c/mingw810/x86_64-810-posix-seh-rt_v6-rev0/mingw64/opt/lib -L/c/mingw810/prerequisites/x86_64-zlib-static/lib -L/c/mingw810/prerequisites/x86_64-w64-mingw32-static/lib '
Thread model: posix
gcc version 8.1.0 (x86_64-posix-seh-rev0, Built by MinGW-W64 project)
```

gcc和clang都可以根据不同的版本选择运行时选项来调用不同的C标准

```bash
gcc -std=c99 inform.c
gcc -std=c11 inform.c
```

## 复习题

1. 对于编程而言,可移植性意味着什么?

   完美的可移植程序是其源代码无需修改就能在不同的计算机系统中成功编译的程序

2. 解释源代码文件,目标代码文件和可执行文件有什么区别?

   源代码文件包含程序员使用的任何编程语言编写的代码

   目标代码文件包含机器语言代码,他不是完成的程序代码

   可执行文件包含组成可执行程序的完整机器语言代码

3. 编程的7个主要步骤是什么?

   1. 定义程序目标
   2. 设计程序
   3. 编写程序
   4. 编译程序
   5. 运行程序
   6. 测试和调试程序
   7. 维护和修改程序

4. 编译器的任务是什么?

   编译器把源代码翻译成等价的机器语言代码(目标代码)

5. 链接器的任务是什么?

   链接器把编译器翻译好的源代码以及库代码和启动代码组合起来,生成一个可执行程序
