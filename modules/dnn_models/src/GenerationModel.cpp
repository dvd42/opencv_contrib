#include <opencv2/dnn_model.hpp>

cv::dnn::GenerationModel::GenerationModel(std::string path){

    this->modelPath = path;
    this->model = cv::dnn::readNetFromONNX(this->modelPath);
}

void cv::dnn::GenerationModel::forward(){

    printf("This is a forward function\n");
}

void cv::dnn::GenerationModel::drawImage(){

    printf("I have drawn the image\n");
}

std::vector<std::string> cv::dnn::GenerationModel::getStyles(){
    return this->styles;
}

void cv::dnn::GenerationModel::setStyles(std::vector<std::string> newStyles){
   this->styles = newStyles;
}
