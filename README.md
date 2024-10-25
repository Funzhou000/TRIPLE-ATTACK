# TRIPLE-ATTACK
本作业主要介绍了如何使用C++标准库中的next_permutation函数来生成一个序列的下一个字典序排列。通过给定一个序列，该函数可以有效地计算出其下一个排列，并广泛应用于全排列问题以及组合问题中。本作业详细讲解了该函数的使用方法，并通过示例代码展示了实际应用场景。
nglish Summary: This assignment primarily discusses how to use the next_permutation function in the C++ standard library to generate the next lexicographical permutation of a sequence. By providing a given sequence, this function can efficiently compute its next permutation and is widely used in problems involving permutations and combinations. The assignment elaborates on the usage of this function and demonstrates practical applications through example code.
​
写在前面：
只有在引入algorithm（算法）才能使用next _permutation哦！！

#include <algorithm> // 用于使用next_permutation函数

permutation      （排列）//为什么左边的括号不能用黑色打（sad）。

BidirectionalIterator（双向迭代器）

正文
一、next_permutation的标准用法： //顿号是|\键
bool next_permutation(BidirectionalIterator first, BidirectionalIterator last);

解释：实际上你只需要在BidirectionalIterator first，和BidirectionalIterator last放入你想要进行排列的数字的开始指针和结束指针//importance：你的结束指针并不会被进行排列

eg1:

a[3]={1,2,3};
next_permutation(a,a+3);
   在例子中a+3实际上是没有被初始化的数组位置。因为他不参与排列所以这段代码实际上是对1，2，3进行全排列。

二 、next_permutation 的返回值
next_permutation只会返回 true/ flase

eg2：（上接-eg1）

do{cout<<1<<" "
}while(next_permutation(a,a+3))
next_permutation会进行不重复的排列组合。当还有全新组合可以用的时候返回True。当没有全新的组合可用时返回Flase

因此eg2中的代码会重复3！次

三、next_permutation的注意事项
next_permutation会改元素在数组中的位置

eg3：

a[5]={1,2,3,4,5};
do{cout<<a[0];
}while（next_permutation(a,a+5));
因为next_permutation可能会改变a[0]储存的元素

一下为输出：

111111111111111111111111222222222222222222222222333333333333333333333333444444444444444444444444555555555555555555555555
这是我第一篇有点技术力的文章。希望在不久的将来和大家分享更有趣有用的东西

2024-10-24

Funzhou

​
