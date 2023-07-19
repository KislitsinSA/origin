#include <iostream>
#include"mian.h"

using namespace std;

Counter::Counter(int count) {count_auto = count;}

void Counter::add_count() { count_auto += 1; cout << "\n"; }
void Counter::min_count() { count_auto -= 1; cout << "\n"; }
void Counter::print_count() { cout << count_auto << "\n\n"; }
int Counter::close_prog() { cout << "До свидания! \n"; return 0; }