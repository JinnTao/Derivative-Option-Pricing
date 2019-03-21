//
//
//                                                                    Test.h
//

#ifndef TEST_H
#define TEST_H

#include "xlw/MyContainers.h"
#include <xlw/CellMatrix.h>
#include <xlw/DoubleOrNothing.h>
#include <xlw/ArgList.h>
#include "option.h"
#include <string>


using namespace xlw;


//<xlw:libraryname=MyManagedTestLibrary

double TD_blackScholesMertonPrice(std::string optionType,std::string valueType,double K,double rate,double b,double S,double volatility,double tau);

double TD_americanBjsPrice(std::string optionType,std::string valueType,double K,double rate,double b,double S,double volatility,double tau);

double TD_americanBTreePrice(std::string optionType,std::string valueType,double K,double rate,double b,double S,double volatility,double tau);

double TD_asianPrice(std::string optionType,std::string valueType,double K,double rate,double b,double S,double volatility,double tau,double SA,double toNextAPoint,double totalAPoint,double averagingPoint);

double TD_barrierPrice(std::string optionType,std::string valueType,double K,double rate,double b,double S,double volatility,double tau,double barrier,double rebate,std::string payoutStyle);

double TD_cashOrNothing(std::string optionType,std::string valueType,double K,double rate,double b,double S,double volatility,double tau,double payAmountK);

double TD_assetOrNothing(std::string optionType,std::string valueType,double K,double rate,double b,double S,double volatility,double tau);

double TD_americanOneTouch(std::string optionType,std::string valueType,double K,double rate,double b,double S,double volatility,double tau,std::string payoutStyle);

double TD_ewma_vol(const MyMatrix &logReturn_oldToNew,double lamuda);

double TD_tradingDay(int startDate, int endDate);

double TD_spreadEuropean(std::string optionType,std::string valueType,double S1,double S2,double Q1,double Q2,double K,double tau,double b1,double b2,double r,double v1,double v2,double corr);

double TD_asianBarrierModel(std::string optionType,std::string valueType, double S0,double K,double A,double r,double b,double T,double t1,int totalPoint,int averagingPoint , double barrier,double sigma,double compensation,double initPrice,int Nrep, int yearBase);

double TD_version(int i);

double TD_euro_impVol(std::string optionType,double K,double rate,double b,double S,double optionPrice,double tau);


#endif
