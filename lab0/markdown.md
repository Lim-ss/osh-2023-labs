下面是引用的一张图片

![](./src/rain "rain")

---

下面是用C写的一段代码

```c
#include <stdio.h>

//定义一个函数，用递归的方式计算阶乘
int factorial(int n) {
  //如果n为0或1，返回1
  if (n == 0 || n == 1) {
    return 1;
  }
  //否则，返回n乘以n-1的阶乘
  else {
    return n * factorial(n - 1);
  }
}

//主函数
int main() {
  //定义一个变量，存储用户输入的数值
  int num;
  //提示用户输入一个正整数
  printf("Enter a positive integer: ");
  //从标准输入读取一个整数，并赋值给num
  scanf("%d", &num);
  //如果num为负数，打印错误信息并退出程序
  if (num < 0) {
    printf("Invalid input.\n");
    return -1;
  }
  //否则，调用factorial函数计算num的阶乘，并打印结果
  else {
    printf("%d! = %d\n", num, factorial(num));
    return 0;
   }
}
```

---

下面是数学公式

$$f(x)=\frac1{\sqrt{2\pi}\sigma}\cdot e^{\frac{(x-\mu)^2}{2\sigma^2}}$$​





