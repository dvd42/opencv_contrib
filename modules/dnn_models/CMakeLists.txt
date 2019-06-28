set(the_description "User friendly Dnn Model Zoo")

set( CMAKE_EXPORT_COMPILE_COMMANDS ON )

ocv_define_module(dnn_models opencv_imgproc opencv_dnn WRAP python)
