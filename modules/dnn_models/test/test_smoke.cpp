#include "test_precomp.hpp"

namespace opencv_test { namespace {

    TEST(DetectionModel, smokeTest) {

        cv::dnn::DetectionModel* obj1 = new cv::dnn::DetectionModel("model.onnx");

        obj1->setVerbose(5);
        obj1->setLabels(std::vector<std::string> (1, "dog"));

        EXPECT_EQ("model.onnx", obj1->getModelPath());
        EXPECT_EQ(5, obj1->getVerbose());
        EXPECT_EQ(0.992, obj1->getConfidence()[0]);
        EXPECT_EQ("dog", obj1->getLabels()[0]);

    }

    TEST(ClassificationModel, smokeTest) {

        cv::dnn::ClassificationModel* obj1 = new cv::dnn::ClassificationModel("model.onnx");

        obj1->setVerbose(5);
        obj1->setTopk(2);
        obj1->setLabels(std::vector<std::string> (1, "dog"));

        EXPECT_EQ("model.onnx", obj1->getModelPath());
        EXPECT_EQ(5, obj1->getVerbose());
        EXPECT_EQ("dog", obj1->getLabels()[0]);
        EXPECT_EQ(2, obj1->getTopk());

    }

    TEST(GenerationModel, smokeTest) {

        cv::dnn::GenerationModel* obj1 = new cv::dnn::GenerationModel("model.onnx");

        obj1->setVerbose(5);
        obj1->setStyles(std::vector<std::string> (1, "van-goh"));

        EXPECT_EQ("model.onnx", obj1->getModelPath());
        EXPECT_EQ(5, obj1->getVerbose());
        EXPECT_EQ("van-goh", obj1->getStyles()[0]);

    }

    TEST(LandmarksModel, smokeTest) {

        cv::dnn::LandmarksModel* obj1 = new cv::dnn::LandmarksModel("model.onnx");

        obj1->setVerbose(5);

        EXPECT_EQ("model.onnx", obj1->getModelPath());
        EXPECT_EQ(5, obj1->getVerbose());
        EXPECT_EQ(0.992, obj1->getConfidence()[0]);

    }

    TEST(SegmentationModel, smokeTest) {

        cv::dnn::SegmentationModel* obj1 = new cv::dnn::SegmentationModel("model.onnx");

        obj1->setVerbose(5);
        obj1->setLabels(std::vector<std::string> (1, "dog"));

        EXPECT_EQ("model.onnx", obj1->getModelPath());
        EXPECT_EQ(5, obj1->getVerbose());
        EXPECT_EQ(0.992, obj1->getConfidence()[0]);
        EXPECT_EQ("dog", obj1->getLabels()[0]);

    }

}}
