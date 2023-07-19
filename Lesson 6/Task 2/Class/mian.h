#pragma once

class Counter
{ 
    private:
        int count_auto{ 1 };

    public:
        Counter(int i);

        void add_count();
        void min_count();
        void print_count();
        int close_prog();
};