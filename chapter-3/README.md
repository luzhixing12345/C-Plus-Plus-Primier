# 第三章 数据和C


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

