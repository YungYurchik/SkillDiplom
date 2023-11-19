#pragma once

#include <iostream>
#include <vector>
#include "searchserver.h"

/**
* ����� ��� ������ � JSON-�������
*/
class ConverterJSON
{
public:
	ConverterJSON() = default;

	/**
	* ����� ��������� ����������� ������
	* @return ���������� ������ � ���������� ������ �������������
	* � config.json
	*/
	std::vector<std::string> GetTextDocuments();

	/**
	* ����� ��������� ���� timer_sec ���������� ������ ���������� ����
	* � ��������
	* @return
	*/
	int GetTimeUpdate();

	/**
	* ����� ��������� ���� max_responses ��� ����������� �����������
	* ���������� ������� �� ���� ������
	* @return
	*/
	int GetResponsesLimit();

	/**
	* ����� ��������� �������� �� ����� requests.json
	* @return ���������� ������ �������� �� ����� requests.json
	*/
	std::vector<std::string> GetRequests();

	/**
	* �������� � ���� answers.json ���������� ��������� ��������
	*/
	//  void putAnswers(std::vector<std::vector<std::pair<int, float>>>answers);
	void putAnswers(std::vector<std::vector<RelativeIndex>> answers);
};