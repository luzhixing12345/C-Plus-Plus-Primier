# makefile [video](https://www.bilibili.com/video/BV1B4411F7EK?from=search&seid=17350658045965248271&spm_id_from=333.337.0.0)

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

## 复习题懒得写了

太简单了...
