#include <opencv2/dnn_model.hpp>

cv::dnn::DetectionModel::DetectionModel(std::string path){

    this->modelPath = path;
    std::vector<double> vect2(1, 0.992);
    this->confidence = vect2;
    this->model = cv::dnn::readNetFromONNX(this->modelPath);
}

void cv::dnn::DetectionModel::forward(){

    printf("This is a forward function\n");
}

void cv::dnn::DetectionModel::drawImage(){

    printf("I have drawn the image\n");
}

std::vector<double> cv::dnn::DetectionModel::getConfidence(){
    return this->confidence;
}
std::vector<std::string> cv::dnn::DetectionModel::getLabels(){
    return this->labels;
}

void cv::dnn::DetectionModel::setLabels(std::vector<std::string> newLabels){
   this->labels = newLabels;
}
