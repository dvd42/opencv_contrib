#include <opencv2/dnn_model.hpp>

cv::dnn::DnnModel::~DnnModel(){};
void cv::dnn::DnnModel::reloadModel(std::string path){

    this->setModelPath(path);
    this->setModel(cv::dnn::readNetFromONNX(this->modelPath));
}

std::string cv::dnn::DnnModel::getModelPath() {

    return this->modelPath;
}

int cv::dnn::DnnModel::getVerbose() {

    return this->verbose;
}

void cv::dnn::DnnModel::setModelPath(std::string path) {

    this->modelPath = path;
}

void cv::dnn::DnnModel::setModel(cv::dnn::Net newModel) {

    this->model = newModel;
}

void cv::dnn::DnnModel::setVerbose(int v) {

    this->verbose = v;
}
