// This file is part of OpenCV project.
// It is subject to the license terms in the LICENSE file found in the top-level directory
// of this distribution and at http://opencv.org/license.html.
#ifndef __OPENCV_DNN_MODEL_PRECOMP_HPP__
#define __OPENCV_DNN_MODEL_PRECOMP_HPP__

#include <string>

#include "opencv2/core.hpp"
#include "opencv2/dnn.hpp"

namespace cv {
    namespace dnn {
        class CV_EXPORTS DnnModel{

            public:
                virtual void forward() = 0;
                virtual void drawImage() = 0;
                virtual ~DnnModel() = 0;
                void reloadModel(std::string path);

                std::string getModelPath();
                int getVerbose();
                cv::dnn::Net getModel();

                void setVerbose(int v);
                void setModelPath(std::string path);
                void setModel(cv::dnn::Net newModel);

            protected:
                int verbose;
                std::string modelPath;
                cv::dnn::Net model;
        };

        class CV_EXPORTS DetectionModel : public DnnModel{

            public:
                void forward();
                void drawImage();
                DetectionModel(std::string path);

                std::vector<double> getConfidence();
                std::vector<std::string> getLabels();

                void setLabels(std::vector<std::string> newLabels);

            private:
                std::vector<double> confidence;
                std::vector<std::string> labels;

        };

        class CV_EXPORTS ClassificationModel: public DnnModel{

            public:
                void forward();
                void drawImage();
                ClassificationModel(std::string path);

                std::vector<double> getConfidence();
                int getTopk();
                std::vector<std::string> getLabels();

                void setTopk(int k);
                void setLabels(std::vector<std::string> newLabels);

            private:
                int topk;
                std::vector<double> confidence;
                std::vector<std::string> labels;

        };

        class CV_EXPORTS GenerationModel: public DnnModel{

            public:
                void forward();
                void drawImage();
                GenerationModel(std::string path);

                std::vector<std::string> getStyles();
                void setStyles(std::vector<std::string> newStyles);

            private:
                std::vector<std::string> styles;
        };

        class CV_EXPORTS LandmarksModel: public DnnModel{

            public:
                void forward();
                void drawImage();
                LandmarksModel(std::string path);

                std::vector<double> getConfidence();

            private:
                std::vector<double> confidence;
        };

        class CV_EXPORTS SegmentationModel: public DnnModel{

            public:
                void forward();
                void drawImage();
                SegmentationModel(std::string path);

                std::vector<double> getConfidence();
                std::vector<std::string> getLabels();

                void setLabels(std::vector<std::string> newLabels);

            private:
                std::vector<double> confidence;
                std::vector<std::string> labels;

        };
    }
}

#endif // __OPENCV_DNN_MODEL_PRECOMP_HPP__
