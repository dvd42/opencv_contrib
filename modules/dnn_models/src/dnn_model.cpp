#include <opencv2/dnn_model.hpp>

std::string cv::dnn::DnnModel::getModelPath(){return this->modelPath;}
cv::dnn::DnnModel::~DnnModel(){};

int cv::dnn::DnnModel::getVerbose(){return this->verbose;}
void cv::dnn::DnnModel::setVerbose (int verbose_level){this->verbose = verbose_level;}
