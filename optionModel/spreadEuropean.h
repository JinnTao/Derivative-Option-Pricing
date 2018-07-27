#pragma once
#include "structure.h"
#include "algorithmLib.h"
#include <iostream>
using namespace optionSpace;
class spreadEuropean
{
public:
    spreadEuropean(void);
    double price(OptionType,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation);
    double delta1(OptionType,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation);
    double vega1(OptionType,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation);
    double theta1(OptionType,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation);
    double gamma1(OptionType,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation);
    
    double delta2(OptionType,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation);
    double vega2(OptionType,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation);
    double theta2(OptionType,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation);
    double gamma2(OptionType,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation);
    double rho(OptionType,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation);

private:
	algorithmLib m_math;
};

