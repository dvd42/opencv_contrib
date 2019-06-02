#include <opencv2/dnn_model.hpp>

cv::dnn::LandmarksModel::LandmarksModel(std::string path){
    this->modelPath = path;
    std::vector<double> vect2(1, 0.992);
    this->confidence = vect2;
}

void cv::dnn::LandmarksModel::forward(){

    printf("This is a forward function\n");
}

void cv::dnn::LandmarksModel::drawImage(){

    printf("I have drawn the image\n");
}

std::vector<double> cv::dnn::LandmarksModel::getConfidence(){
    return this->confidence;
}
