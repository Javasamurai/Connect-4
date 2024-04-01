//
//  Cell.hpp
//  Connect-4
//
//  Created by Zain on 31/03/24.
//

#ifndef Cell_hpp
#define Cell_hpp

#include <stdio.h>

struct Cell
{
    int row;
    int col;
    Cell()
    {
        row = -1;
        col = -1;
    }
    Cell(int _row, int _col)
    {
        row = _row;
        col = _col;
    }
};
#endif /* Cell_hpp */
