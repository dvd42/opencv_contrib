#include "test_precomp.hpp"
#include "npy_blob.hpp"

using namespace cv;
using namespace dnn;

namespace opencv_test { namespace {

    TEST(TestImport, smokeTest){

        readNetFromONNX("/home/diego/Projects/gsoc/models/attend_rectify.onnx");

        /*
        Mat inp = blobFromNPY("/home/diego/inorm_test_in.npy");
        Mat exp = blobFromNPY("/home/diego/inorm_test_out.npy");
        Net model = readNetFromONNX("/home/diego/inorm_model.onnx");
        model.setInput(inp);
        Mat out = model.forward();


        std::cout<<"SKLJDKLSAJDKLASJKDjKSLAJlkda"<<std::endl;
        Mat_<float>::iterator it = out.begin<float>(), itEnd = out.end<float>();
        for(; it != itEnd; ++it)
            std::cout<<*it<<std::endl;

        normAssert(out, exp, "");
        */


    }

}}
