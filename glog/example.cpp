#include <iostream>
#include <cstdlib>
#include <glog/logging.h>

int main(int argc, char *argv[]) {
  FLAGS_logtostderr = 1;
  FLAGS_v = 1;
  google::InitGoogleLogging(argv[0]);

  LOG(INFO) << "This is INFO";
  LOG(WARNING) << "This is WARNING";
  LOG(ERROR) << "This is ERROR";
  //fatal will terminate the program
  //LOG(FATAL) << "This is FATAL";

  LOG_IF(INFO, 1 == 1) << "Logging based on a condition";
  for(int i = 0; i < 20; i++) {
    LOG_EVERY_N(INFO, 10) << "Logging on " << google::COUNTER << "th time";
    LOG_FIRST_N(INFO, 10) << "Only Logging on " << google::COUNTER << "th time";
    VLOG(1) << "verbose logging on level 1";
  }

  exit(EXIT_SUCCESS);
}
