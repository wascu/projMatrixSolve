//
// Created by wasku on 19-11-11.
//

#include "../../include/test11/MdisFunc.h"

#include <iostream>

using namespace std;

void MdisFunc::show() {
    cout<<"show from MdisFunc...\n";
}

double MdisFunc::operator()(const VectorXd &x, VectorXd &grad) {
    return 0;
}
