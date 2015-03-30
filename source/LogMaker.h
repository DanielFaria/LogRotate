#ifndef LogMaker_H
#define LogMaker_H
#include <string>

/*
 * Let's define a class.
 * Do you think I stupid at comments?
 */

class LogMaker{

   private:
      std::string currentDateTime();
   public:
      LogMaker();
      void startCrazyLogs();
};

#endif //
