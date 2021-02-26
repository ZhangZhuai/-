北邮cpp oop进阶 mooc https://www.icourse163.org/course/BUPT-1003564002
学习笔记
1.  cpp列表初始化 list initialization
2.  类型转换 static_cast<type>value类型转换中申明
3.  modern cpp :cpp11 对类型系统增强  计算机程序构造快 属于静态类型
4.  auto 定义时初始化
         一行同一类  
         不管引用&及常量const 若auto & 则相反
5.  常量指针 指针常量 常量指针常量 均不可以放在等号左侧(key 在前先读)
6.  using（代替typefef）
      eg. using UIt=unsigned int
7.  重载函数 overloading function
    看参数 编译时间执行
8.  函数重定义/声明时 不允许重定义默认参数
    默认参数放在右侧 （default argument）
9.  基于范围的 for loop
10. if/switch with initializer
11. oop 
        some features:APIE(抽象 继承 多态 封装)
        object consits of a unique identity, state, and behaviors
          how to define : instance of a class(class includes data fields and behavios)
        a class has two special types of functions: ctor anf dtor 构造和析构函数
12. 对象拷贝及匿名对象 申明对象时也最好使用列表初始化
13. 局部类和嵌套类  较少使用 名字空间也可嵌套
14. 对象指针与动态对象     箭头运算符、（*）解引用操作
15. 对象数组
16. 抽象 
    getter and setter（访问器和更改器）
    成员作用域 数据域与函数按任意顺序声明 同名屏蔽
    this指针 内建指针 适用于类的非静态成员 调用当前函数的调用对象
    避免同名屏蔽的简单方法 形参后加下划线
17.cpp11 类成员就地初始化 非静态成员 
    数组类型成员不能自动推断大小
    不允许使用小括号初始化
18. 构造函数初始化列表 内嵌对象需在被嵌对象的ctor执行前构造完成
19. 默认构造函数 无参调用的ctor 既可以是定义为空参数列表的ctor 也可以是 所有参数都有默认参数值的ctor
    若有含参构造函数 则需程序猿自行写出默认构造函数
20. 成员初始化次序  就地初始化>ctor初始化列表>在ctor函数体中为成员赋值（执行次序 ）
                  优先级相反
21. cpp11 数组类
    21.1. C Style Array (C++ raw array，也叫做C++原生数组)
          int arr[ ] = { 1, 2, 3 };
          arr 可能会退化为指针：void f(int a[]) { std::cout << sizeof(a)/sizeof(a[0]); }
          arr 不知道自己的大小： sizeof(arr)/sizeof(arr[0])
          两个数组之间无法直接赋值: array1 = array2;
          不能自动推导类型：auto a1[] = {1,2,3};
    21.2. C++ Style Array
         是一个容器类，所以有迭代器（可以认为是一种用于访问成员的高级指针）
         可直接赋值
         知道自己大小：size()
         能和另一个数组交换内容：swap()
         能以指定值填充自己: fill()
         取某个位置的元素( 做越界检查) ：at()
    cpp17对类模板参数类型推导
22. const&constexpr
23. 断言与静态断言
24. 声明与定义
    声明->编译器 标识符可声明多次
    定义->linker 标识符只可定义一次；可取代声明；伴随伴随编译器为标志符分配内存
25. 代理构造/委托构造函数    
    避免环形/递归调用
26. 不可变对象和类（immutable）数据域private 且无更改器函数（setter）
    通过getter函数也能够修改类成员的情形有：getter函数返回指向成员的指针/引用
27. 实例成员与静态成员（类外定义不加static 静态存储器 自动零初始化）
28. 析构函数 dtor
29. 友元函数
30. 拷贝构造函数 一个对象初始化另一个同类对象
    隐式声明的拷贝构造函数 将被拷贝对象的数值域一对一的赋值到新对象中
    深拷贝 数据域是指针 只拷贝指针的地址
          创建新对象的隐式构造函数或者为已有对象赋值的默认赋值运算符
    浅拷贝 拷贝指针指向的内容 自行编写拷贝构造函数或重载负责运算符
31. vector类&字符串字面量
32. 用于数组的结构化绑定 
    用于原生数组的结构化绑定
    数据成员公有 struct或者class声明public
    标识符数量与数据成员数量相等
    标识符类型与数据成员类型一致
33. 继承Inheritance
34. 继承中的构造函数和默认构造函数
    若派生类构造函数中没有显式调用基类构造函数，那么会被隐式自动调用的是 基类默认构造函数
35. 构造链和析构链


