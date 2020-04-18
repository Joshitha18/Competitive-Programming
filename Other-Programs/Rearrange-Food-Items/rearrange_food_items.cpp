/*
 * Problem Statement: Refer to the readme.md file.
 * Author: striker
 *
 * Copyright 2020 striker
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
*/

#include <iostream>
#include <array>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <cstdio>

typedef unsigned long long ull_t;
typedef long long ll_t;

#define FAST_IO(value) std :: ios :: sync_with_stdio(value); std :: cin.tie(NULL)
#define MOD 1000000007 // Constant (prime number) used in most competitive programming problems to reduce the answer to a 32-bit integer.
#define PI 3.141592653589793 // Number of digits(15) of Pi which JPL uses for Interplanetary Caculations.
#define GOLDEN_RATIO 1.618033988749895 // Number of digits(15).

int main(void) {
    FAST_IO(0);
    int test;
    std :: cin >> test;
    for(int t = 1; t <= test; ++t) {
        int n;
        std :: cin >> n;
        std :: map <std :: string, std :: vector <int>> food_items;
        for(int i = 0; i < n; ++i) {
            std :: string food_name;
            int food_price;
            std :: cin >> food_name >> food_price;
            food_items[food_name].push_back(food_price);
        }
        std :: cout << "Case #" << t << ":" << std :: endl;
        for(auto food_config = food_items.begin(); food_config != food_items.end(); ++food_config) {
            std :: cout << food_config->first;
            int min_val = *std :: min_element(food_config->second.begin(), food_config->second.end());
            std :: cout << " " << min_val;
            int max_val = *std :: max_element(food_config->second.begin(), food_config->second.end());
            std :: cout << " " << max_val;
            int avg_val = std :: accumulate(food_config->second.begin(), food_config->second.end(), 0) / food_config->second.size();
            std ::  cout << " " << avg_val << std :: endl;
        }
    }
    return 0;
}
