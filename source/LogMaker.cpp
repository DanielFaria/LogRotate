#include "LogMaker.h"
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <time.h>




    LogMaker::LogMaker(){}

    void LogMaker::startCrazyLogs(){
        std::ofstream fileLog ("LogMaker.log");
        while(true){
           fileLog << "\n"+currentDateTime() + " Generate Logs ";
       }
       fileLog.close();

    }
    /**
     * I didn't  make this method, I get on
     * http://stackoverflow.com/questions/997946/how-to-get-current-time-and-date-in-c
     */
     std::string LogMaker::currentDateTime() {
        time_t     now = time(0);
        struct tm  tstruct;
        char       buf[80];
        tstruct = *localtime(&now);
        // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
        // for more information about date/time format
        strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

        return buf;
    }

