#Introduction
NTR是基于经典桌游《谁是牛头 ~~人~~ 王》的多人 AI 博弈游戏。

#How to play NTR
此游戏总共有104张号码牌由1到104。

每一回合，玩家在不知道其他玩家所出号码牌的情况下，从手上选择出最合适的号码牌。

当所有玩家都选定该回合的号码牌，玩家同时开牌。

游戏进行时有四堆纸牌。每个回合开牌后按从小到大的顺序将牌放入牌堆中：每张牌放入堆顶点数小于且最接近自身的牌堆之上。

注意：

* 若该牌是一堆里面的第六张牌，该玩家则要将前五张拿走，该牌成为牌堆里的唯一一张牌。
* 如果玩家所出的号码牌比任何一堆最后一张都小，则必须选择其中一堆，将其全部取走后放上自己所出的牌。

_收到的牌不放回手牌，仅作计分使用。_

当所有牌都出完后，统计所有玩家的罚分（牌上的牛头数）总和，罚分最少的取胜。

#About this program
这是一个简单的 AI 对战平台，参赛选手均需继承自 Player 类，并要求实现包括带参数构造器在内的所有 public 方法，具体方法说明见 player.h 中的注释。

平台功能简单，不提供任何非法行为检查功能，希望大家自己控制程序运行时间、内存占用，尤其是杜绝崩溃的发生！
