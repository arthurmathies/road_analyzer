#ifndef ROAD_ANALYZER_H
#define ROAD_ANALYZER_H

#include <lms/math/polyline.h>
#include <lms/math/vertex.h>
#include <lms/module.h>
#include <street_environment/road_matrix/road_matrix.h>
#include <street_environment/street_environment.h>

/**
 * @brief LMS module road_analyzer
 **/
class RoadAnalyzer : public lms::Module {
   public:
    bool initialize() override;
    bool deinitialize() override;
    bool cycle() override;

   private:
    lms::ReadDataChannel<lms::math::polyLine2f> line;
    lms::ReadDataChannel<street_environment::EnvironmentObjects> obstacles;
    lms::WriteDataChannel<street_environment::RoadMatrix> roadMatrix;
};

#endif  // ROAD_ANALYZER_H
