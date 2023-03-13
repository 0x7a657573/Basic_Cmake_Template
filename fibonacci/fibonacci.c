/**********************************************************************
 * File : fibonacci.c
 * Copyright (c) 0x7a657573.
 * Created On : Sun Mar 12 2023
 * 
 * This program is free software: you can redistribute it and/or modify  
 * it under the terms of the GNU General Public License as published by  
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 **********************************************************************/
#include "fibonacci.h"
#include "../math/fast_math.h"

uint32_t fibonacci_recursive(uint32_t n)
{
    // Base cases: F(0) = 0, F(1) = 1
    if (n == 0) 
    {
        return 0;
    }
    if (n == 1) 
    {
        return 1;
    }
    // Recursive case: F(n) = F(n-1) + F(n-2)
    return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
}