LOCAL_PATH := $(call my-dir)

##Build libaptXHD_encoder
include $(CLEAR_VARS)
LOCAL_CFLAGS := -O2 -Werror -Wall -Wextra
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE := libaptXHD_encoder
LOCAL_SRC_FILES :=		\
        src/aptXHDbtenc.c \
        src/ProcessSubband.c \
        src/QmfConv.c \
        src/QuantiseDifference.c
LOCAL_C_INCLUDES := $(LOCAL_PATH)/src \
                           $(LOCAL_PATH)/include
include $(BUILD_SHARED_LIBRARY)
