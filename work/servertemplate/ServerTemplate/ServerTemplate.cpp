// ServerTemplate.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "ServerIOCP.h"

int _tmain(int argc, _TCHAR* argv[])
{
	WSADATA WsaData;
	WSAStartup(MAKEWORD(2, 2), &WsaData);

	CServerIOCP *server = new CServerIOCP();

	server->Begin();
	server->End();

	return 0;
}
