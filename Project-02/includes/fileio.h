/*
    fileio.h
    Tyler Lamb
    CPSC 327

*/
#ifndef FILEIO_H_
#define FILEIO_H_

#include "../includes/constants.h"

#include <vector>
#include <string>
#include <iostream>

int loadData(const std::string filename, std::vector<process> &myProcesses);
int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif /* FILEIO_H_ */