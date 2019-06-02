#include <opencv2/dnn_model.hpp>

cv::dnn::ClassificationModel::ClassificationModel(std::string path){
    this->modelPath = path;
    std::vector<double> vect2(1, 0.992);
    this->confidence = vect2;
}

void cv::dnn::ClassificationModel::forward(){

    printf("This is a forward function\n");
}

void cv::dnn::ClassificationModel::drawImage(){

    printf("I have drawn the image\n");
}

std::vector<std::string> cv::dnn::ClassificationModel::getLabels(){
    return this->labels;
}
int cv::dnn::ClassificationModel::getTopk(){
    return this->topk;
}

void cv::dnn::ClassificationModel::setLabels(std::vector<std::string> newLabels){
   this->labels = newLabels;;
}
void cv::dnn::ClassificationModel::setTopk(int k){
    this->topk = k;
}
