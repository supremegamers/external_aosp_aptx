# external_aosp_aptx
aptX/aptX HD encoders for AOSP, compile as shared library

This is the source of aptX/aptX HD encoders for Android, pulled from this patchset by Qualcomm
https://android-review.googlesource.com/c/platform/packages/modules/Bluetooth/+/2259745/3

Instead of backporting the commits from the patchset to older Android, it is easier to just pull the encoders out and then let the copy function from a2dp stack to do it's job.

To compile, clone this repo in `external/aosp_aptx` and add this in your device tree's `device.mk`

```
PRODUCT_PACKAGES += \
    libaptX_encoder \
    libaptXHD_encoder
```
