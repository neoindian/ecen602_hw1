/*
 * Server.H
 *
 *  Created on: 12-Sep-2014
 *      Author: nishant
 */

#ifndef SERVER_H_
#define SERVER_H_

class Server
{
public:
	Server(){};
	//Get Functions
	int getServerPort(void);
	int getServerIp(void);
	//Set functions
	bool setServerPort(const int serverPort);
	bool setServerIp(const int serverIp);

private:
	int serverPort_;
	int serverIp_;

}



#endif /* SERVER_H_ */
