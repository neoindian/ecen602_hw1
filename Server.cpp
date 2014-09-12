//============================================================================
// Name        : Server.cpp
// Author      : Nishant Pattanaik
// Version     : 1
// Copyright   : This program is being created for the multiple client server
//               implementation for ECEN 602  HW1
// Description : Server implementation for the
//============================================================================

#include <iostream>
#include "HeaderInclusions.H"
#include "Server.H"
using namespace std;

#define REQUIREDARGS 4

int main (int argc,char * argv[])
{
   if(argc != REQUIREDARGS )
   {
	 cout<<"Wrong usage of the program"<<endl;
	 cout<<"Proper usage is ./server <ip-address> <port> max_no_of_clients"<<endl;
   }

   return 0;
}
