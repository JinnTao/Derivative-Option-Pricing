#include "spreadEuropean.h"


spreadEuropean::spreadEuropean(void)
{


}


double spreadEuropean::price(OptionType optionStyle,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation){
    double F = Q2*S2*std::exp((b2 - r)*T) / ( Q2*S2*std::exp((b2 - r)*T) + X * std::exp(-r*T));
    double S = Q1*S1*std::exp((b1 - r)*T) / ( Q2*S2*std::exp((b2 - r)*T) + X * std::exp(-r*T));
    double sigma = std::sqrt(sigma1*sigma1 + (sigma2*sigma2*F*F) - 2*correlation*sigma1*sigma2*F);
    double d1 = (std::log(S) + (sigma * sigma * 0.5)*T) / (sigma * std::sqrt(T));
    double d2 = d1 - sigma*std::sqrt(T);
    double p=  0;
    switch (optionStyle)
    {
    case optionSpace::CALL:
        p = (Q2 * S2 * std::exp((b2 - r)*T) + X*std::exp(-r*T)) * ( S * m_math.N(d1,0,1) - m_math.N(d2,0,1));
        break;
    case optionSpace::PUT:
        p = (Q2 * S2 * std::exp((b2 - r)*T) + X*std::exp(-r*T)) * ( m_math.N(-d2,0,1) - S * m_math.N(-d1,0,1));
        break;
    default:
        break;
    }
    return p;




}
double spreadEuropean::delta1(OptionType optionStyle,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation){
    double upPrice =  this->price( optionStyle,  S1 * (1 + 0.005L),  S2,  Q1,  Q2,  X,  T,  b1,  b2,  r,  sigma1,  sigma2,  correlation);
    double downPrice = this->price( optionStyle,  S1 * (1 - 0.005L),  S2,  Q1,  Q2,  X,  T,  b1,  b2,  r,  sigma1,  sigma2,  correlation);
    return (upPrice - downPrice)/(S1 * 2.0L * 0.005L);
}
double spreadEuropean::delta2(OptionType optionStyle,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation){
    double upPrice =  this->price( optionStyle,  S1 ,  S2* (1 + 0.005L),  Q1,  Q2,  X,  T,  b1,  b2,  r,  sigma1,  sigma2,  correlation);
    double downPrice = this->price( optionStyle,  S1 ,  S2* (1 - 0.005L),  Q1,  Q2,  X,  T,  b1,  b2,  r,  sigma1,  sigma2,  correlation);
    return (upPrice - downPrice)/(S2 * 2.0L * 0.005L);
}

double spreadEuropean::vega1(OptionType optionStyle,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation){
    return  0;
}
double spreadEuropean::theta1(OptionType optionStyle,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation){
    return  0;
}
double spreadEuropean::gamma1(OptionType optionStyle,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation){
    return  0;
}

double spreadEuropean::vega2(OptionType optionStyle,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation){
    return  0;
}
double spreadEuropean::theta2(OptionType optionStyle,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation){
   return  0;
}
double spreadEuropean::gamma2(OptionType optionStyle,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation){
    return  0;
}


double spreadEuropean::rho(OptionType optionStyle,const double S1,const double S2,const double Q1,const double Q2,const double X,const double T,const double b1,const double b2,const double r,const double sigma1,const double sigma2,const double correlation){
    return  0;

}

