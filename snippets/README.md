# 本目录用于记录一些编写C++程序过程中一些常用的代码片段

## 流式输入

### 读取若干个数

```cpp
#include <iostream>

int input;
while (std::cin >> input) {
    ...
}
// input = 0 / 1 根据istream退出while循环的情况而定
```

注意:

1. 输入的若干个数的数据类型应与input一致
2. 第一个不一致的输入将跳出循环.同时`input`的值变为0. 使用键盘退出输入流的情况下`input`的值是1
3. 第一个不一致的输入**并不会被接收**,如果输入流的情况还需要考虑到这个字符,比如若干个整数后面接一个字母那么考虑整体接收之后再做处理