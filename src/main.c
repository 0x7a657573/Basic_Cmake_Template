/**********************************************************************
 * File : main.c
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
#include <stdio.h>
#include "../fibonacci/fibonacci.h"
#include "../math/fast_math.h"

#ifndef D_NAME
    #define D_NAME  "none"
#endif

int main(void)
{
    printf("Hello %s!\r\n",D_NAME);
    printf("fibonacci of 10 is %d\r\n",fibonacci_recursive(10));
    printf("sum of 158895 and 5568562 is %d\r\n",sum_int(158895,5568562));
    return 0;
}



