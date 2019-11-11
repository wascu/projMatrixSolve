//
// Created by wasku on 19-11-11.
//

#ifndef EIGENSAMPLE_MDISFUNC_H
#define EIGENSAMPLE_MDISFUNC_H


#include <eigen3/Eigen/Eigen>



using namespace Eigen;
/**
 *
 *（L12为T1、T2的点间距 ...）
 * f12 = (S1*P1_x -S2*P2_x)² +(S1*P1_y -S2*P2_y)² +(S1*P1_z -S2*P2_z)² - L12² = 0;
 *
 *
 * */
class MdisFunc {
public:
    void show();

    double operator()(const VectorXd& x, VectorXd& grad);

public:
    int getT1(){
        return index_T1;
    }
    int getT2(){
        return index_T2;
    }

private:
    int index_T1 = 0;
    int index_T2 = 0;
};


#endif //EIGENSAMPLE_MDISFUNC_H
