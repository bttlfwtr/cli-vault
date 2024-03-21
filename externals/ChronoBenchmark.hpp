/**
 * @file ChronoBenchmark.hpp
 * @brief chrono benchmark class using RAII
 * @version 1.01
 * @date 2024-02-11
 */

#ifndef ChronoBenchmark_HPP
#define ChronoBenchmark_HPP

#include <chrono>
#include <iostream>

class ChronoTimer
{
      public:
            ChronoTimer()
            {
                  timerStartPoint = std::chrono::high_resolution_clock::now();
            }

            ~ChronoTimer()
            {
                  Stop();
            }

      // RAII
      void Stop()
      {
            std::chrono::_V2::system_clock::time_point timerEndPoint{std::chrono::high_resolution_clock::now()};

            int64_t startMuS{std::chrono::time_point_cast<std::chrono::microseconds>(timerStartPoint).time_since_epoch().count()};
            int64_t endMuS{std::chrono::time_point_cast<std::chrono::microseconds>(timerEndPoint).time_since_epoch().count()};

            int64_t totalDurationMuS{endMuS - startMuS};

            // convert micro to milli cast
            double totalDurationMilli{(double)totalDurationMuS * 0.001};

            std::cout << totalDurationMilli << " ms\n";
      }

      private:
            std::chrono::time_point<std::chrono::high_resolution_clock> timerStartPoint;
};

#endif