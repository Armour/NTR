#include "platform.h"
#include <iostream>
using namespace std;

Platform::Platform() {
	//TODO: 初始化各个玩家


}

void Platform::initLevels() {
	// http://zh.wikipedia.org/wiki/%E8%B0%81%E6%98%AF%E7%89%9B%E5%A4%B4%E7%8E%8B
	for (int i = 1; i <= MAX_CARD; ++i) {
		if ( (i - 5) % 5 == 0) {
			level.insert(pair <int, int>(i, 2)); 
			continue;
		}
		if (i % 10 == 0) {
			level.insert(pair <int, int>(i, 3)); 
			continue;
		}
		if (i % 11 == 0) {
			level.insert(pair <int, int>(i, 5));
			continue;
		}
		if (i == 55) {
			level.insert(pair <int, int>(i, 7));
			continue;
		}
		level.insert(pair <int, int>(i, 1));
	}
	// for (auto iter = level.begin(); iter != level.end(); ++iter) {
	// 	cout << iter->first << ' ' << iter->second<<endl;
	// }
}

void Platform::initCards() {
	for (int i = 1; i <= MAX_CARD; ++i) 
		cards.push_back(i);
	random_shuffle(cards.begin(), cards.end());
}