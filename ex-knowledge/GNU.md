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

## makefile [video](https://www.bilibili.com/video/BV1B4411F7EK?from=search&seid=17350658045965248271&spm_id_from=333.337.0.0)

已有文件，定义了宏，引用了标准库

```c
#include<stdio.h>
#define NAME "LuZhixing"
#define StudentID 2019300003075

void f2(){
    printf("this is function f2 in f2.c\n");
    printf("my name is %s and my student ID is %ld",NAME,StudentID);
    return;
}
```

## gcc 指令

- `gcc -E f2.c -o f2.i`：第一步预处理，把`.h .c`展开形成一个文件,宏定义替换，可以看到我定义的两个宏都已被替换

    ```c
    # 6 "f2.c"
    void f2(){
        printf("this is function f2 in f2.c");
        printf("my name is %s and my student ID is %ld","LuZhixing",2019300003075);
        return;
    }
    ```

- `gcc -S f2.i -o f2.s`:将预编译文件转成汇编语言，`f2.i`中多余的引用不会被汇编
- `gcc -c f2.s -o f2.o`:将汇编语言转变为机器码，二进制文件
- `gcc f2.o -o f2`:生成可执行文件,当然本身`f2`不能执行因为没有`main`作为主函数入口，可以使用`gcc -nostartfiles -e f2 f2.o -o f2`更改函数入口为`f2()`函数，但是这里不能使用`return`作为函数返回值，会出现段错误，应该使用`exit(0)`退出进程

## makefile 基本用法

- `CC:= gcc`： 固定变量，不可更改，调用使用`$(CC)`
- 反过来写，类似于栈
- 格式为

  ```shell
  目标文件:使用文件
      $(CC) -c f1.c -o f1.o
  ```

- `.PHONY:`执行副任务
- `make -f unixmake.mak` 执行某一个文件，默认执行`makefile`，不区分大小写

## printf

```c
# include <stdio.h>

int main() {
    int x = 100;
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
    return 0;
}
```

```txt
dec = 100; octal = 144; hex = 64
dec = 100; octal = 0144; hex = 0x64
```

关于printf的详细参数可以参考[C基础——使用printf打印各种数据类型的方式](https://blog.csdn.net/qq_37596943/article/details/103611607)

printf scanf都是多参数,

## 蜂鸣

我的电脑上printf("\a")并不有效,可以使用 `_beep`替代

```c
#include <stdio.h>

int main() {
    // beep a tone
    for (int i = 0; i < 8; i++) {
        _beep(1000 + i*200, 500);
    }
    return 0;
}
```

## 退格 \b

```c
int main() {
    // use \b to backspace
    printf("$___\b\b\b");
    printf("abc");
    return 0;
}
```

## 缓冲区buffer

最初,printf把输出发送到一个叫做缓冲区的中间存储区域,然后缓冲区中的内容再不断被发送到屏幕上.

C标准明确规定了何时把缓冲区中的内容发送到屏幕:

- 缓冲区满
- 遇到换行字符
- 需要输入

> 从缓冲区把数据发送到屏幕或文件被成为刷新缓冲区(fflush)


## 结语
