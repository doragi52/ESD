mnist_SRCS := \
tensorflow/lite/micro/examples/mnist/main.cc \
tensorflow/lite/micro/examples/mnist/main_functions.cc \
tensorflow/lite/micro/examples/mnist/mnist_model_data.cc \


mnist_HDRS := \
tensorflow/lite/micro/examples/mnist/main_functions.h \
tensorflow/lite/micro/examples/mnist/mnist_model_data.h \

#Find any platform - specific rules for this example.
include $(wildcard tensorflow/lite/micro/examples/mnist/*/Makefile.inc)

# Builds a standalone binary.
$(eval $(call microlite_test,mnist,\
$(mnist_SRCS),$(mnist_HDRS)))
