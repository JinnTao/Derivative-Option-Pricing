//// 
//// Autogenerated by xlw 
//// Do not edit this file, it will be overwritten 
//// by InterfaceGenerator 
////

#include "xlw/MyContainers.h"
#include <xlw/CellMatrix.h>
#include <stdexcept>
using namespace xlw;





double  // too lazy to comment this function
mxlw_TD_blackScholesMertonPrice		(
		std::string optionType, //too lazy to comment this one
		std::string valueType, //too lazy to comment this one
		double K, //too lazy to comment this one
		double rate, //too lazy to comment this one
		double b, //too lazy to comment this one
		double S, //too lazy to comment this one
		double volatility, //too lazy to comment this one
		double tau //too lazy to comment this one
 );
double  // too lazy to comment this function
mxlw_TD_americanBjsPrice		(
		std::string optionType, //too lazy to comment this one
		std::string valueType, //too lazy to comment this one
		double K, //too lazy to comment this one
		double rate, //too lazy to comment this one
		double b, //too lazy to comment this one
		double S, //too lazy to comment this one
		double volatility, //too lazy to comment this one
		double tau //too lazy to comment this one
 );
double  // too lazy to comment this function
mxlw_TD_americanBTreePrice		(
		std::string optionType, //too lazy to comment this one
		std::string valueType, //too lazy to comment this one
		double K, //too lazy to comment this one
		double rate, //too lazy to comment this one
		double b, //too lazy to comment this one
		double S, //too lazy to comment this one
		double volatility, //too lazy to comment this one
		double tau //too lazy to comment this one
 );
double  // too lazy to comment this function
mxlw_TD_asianPrice		(
		std::string optionType, //too lazy to comment this one
		std::string valueType, //too lazy to comment this one
		double K, //too lazy to comment this one
		double rate, //too lazy to comment this one
		double b, //too lazy to comment this one
		double S, //too lazy to comment this one
		double volatility, //too lazy to comment this one
		double tau, //too lazy to comment this one
		double SA, //too lazy to comment this one
		double toNextAPoint, //too lazy to comment this one
		double totalAPoint, //too lazy to comment this one
		double averagingPoint //too lazy to comment this one
 );
double  // too lazy to comment this function
mxlw_TD_barrierPrice		(
		std::string optionType, //too lazy to comment this one
		std::string valueType, //too lazy to comment this one
		double K, //too lazy to comment this one
		double rate, //too lazy to comment this one
		double b, //too lazy to comment this one
		double S, //too lazy to comment this one
		double volatility, //too lazy to comment this one
		double tau, //too lazy to comment this one
		double barrier, //too lazy to comment this one
		double rebate, //too lazy to comment this one
		std::string payoutStyle //too lazy to comment this one
 );
double  // too lazy to comment this function
mxlw_TD_cashOrNothing		(
		std::string optionType, //too lazy to comment this one
		std::string valueType, //too lazy to comment this one
		double K, //too lazy to comment this one
		double rate, //too lazy to comment this one
		double b, //too lazy to comment this one
		double S, //too lazy to comment this one
		double volatility, //too lazy to comment this one
		double tau, //too lazy to comment this one
		double payAmountK //too lazy to comment this one
 );
double  // too lazy to comment this function
mxlw_TD_assetOrNothing		(
		std::string optionType, //too lazy to comment this one
		std::string valueType, //too lazy to comment this one
		double K, //too lazy to comment this one
		double rate, //too lazy to comment this one
		double b, //too lazy to comment this one
		double S, //too lazy to comment this one
		double volatility, //too lazy to comment this one
		double tau //too lazy to comment this one
 );
double  // too lazy to comment this function
mxlw_TD_americanOneTouch		(
		std::string optionType, //too lazy to comment this one
		std::string valueType, //too lazy to comment this one
		double K, //too lazy to comment this one
		double rate, //too lazy to comment this one
		double b, //too lazy to comment this one
		double S, //too lazy to comment this one
		double volatility, //too lazy to comment this one
		double tau, //too lazy to comment this one
		std::string payoutStyle //too lazy to comment this one
 );
double  // too lazy to comment this function
mxlw_TD_ewma_vol		(
		MyMatrix logReturn_oldToNew, //too lazy to comment this one
		double lamuda //too lazy to comment this one
 );
double  // too lazy to comment this function
mxlw_TD_tradingDay		(
		int startDate, //too lazy to comment this one
		int endDate //too lazy to comment this one
 );
double  // too lazy to comment this function
mxlw_TD_spreadEuropean		(
		std::string optionType, //too lazy to comment this one
		std::string valueType, //too lazy to comment this one
		double S1, //too lazy to comment this one
		double S2, //too lazy to comment this one
		double Q1, //too lazy to comment this one
		double Q2, //too lazy to comment this one
		double K, //too lazy to comment this one
		double tau, //too lazy to comment this one
		double b1, //too lazy to comment this one
		double b2, //too lazy to comment this one
		double r, //too lazy to comment this one
		double v1, //too lazy to comment this one
		double v2, //too lazy to comment this one
		double corr //too lazy to comment this one
 );
double  // too lazy to comment this function
mxlw_TD_asianBarrierModel		(
		std::string optionType, //too lazy to comment this one
		std::string valueType, //too lazy to comment this one
		double S0, //too lazy to comment this one
		double K, //too lazy to comment this one
		double A, //too lazy to comment this one
		double r, //too lazy to comment this one
		double b, //too lazy to comment this one
		double T, //too lazy to comment this one
		double t1, //too lazy to comment this one
		int totalPoint, //too lazy to comment this one
		int averagingPoint, //too lazy to comment this one
		double barrier, //too lazy to comment this one
		double sigma, //too lazy to comment this one
		double compensation, //too lazy to comment this one
		double initPrice, //too lazy to comment this one
		int Nrep, //too lazy to comment this one
		int yearBase //too lazy to comment this one
 );
double  // too lazy to comment this function
mxlw_TD_version		(
		int i //too lazy to comment this one
 );
