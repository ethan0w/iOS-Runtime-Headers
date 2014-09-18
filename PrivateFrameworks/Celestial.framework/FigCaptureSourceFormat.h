/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSArray, NSDictionary, NSString;

@interface FigCaptureSourceFormat : NSObject <FigXPCCoding> {
    struct opaqueCMFormatDescription { } *_formatDescription;
    NSDictionary *_formatDictionary;
    bool_isMultiStreamFormat;
}

@property(readonly) NSArray * AVCaptureSessionPresets;
@property(readonly) float aeMaxGain;
@property(readonly) int autoFocusSystem;
@property(copy,readonly) NSString * debugDescription;
@property(getter=isDefaultActiveFormat,readonly) bool defaultActiveFormat;
@property(copy,readonly) NSString * description;
@property(getter=isExperimental,readonly) bool experimental;
@property(readonly) struct opaqueCMFormatDescription { }* formatDescription;
@property(readonly) int frontEndScalerCompanionIndex;
@property(readonly) bool hasFrontEndScalerCompanionIndex;
@property(readonly) bool hasSensorHDRCompanionIndex;
@property(readonly) unsigned long long hash;
@property(getter=isHDRSupported,readonly) bool hdrSupported;
@property(getter=isHighProfileH264Supported,readonly) bool highProfileH264Supported;
@property(getter=isHighResPhotoFormat,readonly) bool highResPhotoFormat;
@property(readonly) struct { int x1; int x2; } highResStillImageDimensions;
@property(getter=isHighResStillImageSupported,readonly) bool highResStillImageSupported;
@property(readonly) bool ispChromaNoiseReduction;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDuration;
@property(readonly) float maxISO;
@property(readonly) int maxIntegrationTimeOverride;
@property(readonly) unsigned int mediaType;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minExposureDuration;
@property(readonly) float minISO;
@property(getter=isMultiStreamFormat,readonly) bool multiStreamFormat;
@property(readonly) bool needsPreviewDPCC;
@property(getter=isPhotoFormat,readonly) bool photoFormat;
@property(readonly) bool prefersSensorHDREnabled;
@property(readonly) struct { int x1; int x2; } sensorCropDimensions;
@property(readonly) struct { int x1; int x2; } sensorDimensions;
@property(readonly) int sensorHDRCompanionIndex;
@property(readonly) struct { int x1; int x2; } sourceCropAspectRatio;
@property(getter=isStillImageStabilizationSupported,readonly) bool stillImageStabilizationSupported;
@property(readonly) Class superclass;
@property(readonly) int temporalNoiseReductionMode;
@property(getter=isVideoBinned,readonly) bool videoBinned;
@property(readonly) float videoDefaultMaxFrameRate;
@property(readonly) float videoDefaultMinFrameRate;
@property(readonly) struct { int x1; int x2; } videoDimensions;
@property(readonly) float videoFieldOfView;
@property(readonly) unsigned int videoFormat;
@property(readonly) int videoFormatIndex;
@property(getter=isVideoLowLightBinningSwitchSupported,readonly) bool videoLowLightBinningSwitchSupported;
@property(readonly) float videoMaxSupportedFrameRate;
@property(readonly) float videoMaxZoomFactor;
@property(readonly) float videoMinSupportedFrameRate;
@property(readonly) int videoRawBitDepth;
@property(readonly) float videoScaleFactor;
@property(readonly) int videoStabilizationTypeOverrideForStandard;
@property(getter=isVideoZoomDynamicSensorCropSupported,readonly) bool videoZoomDynamicSensorCropSupported;
@property(readonly) float videoZoomFactorUpscaleThreshold;
@property(getter=isVideoZoomSupported,readonly) bool videoZoomSupported;

+ (void)initialize;

- (id)AVCaptureSessionPresets;
- (struct { int x1; int x2; })_maxUseableSensorDimensions;
- (struct { int x1; int x2; })_outputDimensions;
- (struct { int x1; int x2; })_visibleSensorDimensionsIncludingCinematic:(bool)arg1;
- (float)aeMaxGain;
- (int)autoFocusSystem;
- (id)copyWithNewVideoPixelFormat:(unsigned int)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (int)frontEndScalerCompanionIndex;
- (bool)hasFrontEndScalerCompanionIndex;
- (bool)hasSensorHDRCompanionIndex;
- (struct { int x1; int x2; })highResStillImageDimensions;
- (id)initWithFigCaptureStreamFormatDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isDefaultActiveFormat;
- (bool)isEqual:(id)arg1;
- (bool)isExperimental;
- (bool)isHDRSupported;
- (bool)isHighProfileH264Supported;
- (bool)isHighResPhotoFormat;
- (bool)isHighResStillImageSupported;
- (bool)isMultiStreamFormat;
- (bool)isPhotoFormat;
- (bool)isStillImageStabilizationSupported;
- (bool)isVideoBinned;
- (bool)isVideoLowLightBinningSwitchSupported;
- (bool)isVideoStabilizationModeSupported:(int)arg1;
- (bool)isVideoZoomDynamicSensorCropSupported;
- (bool)isVideoZoomSupported;
- (bool)ispChromaNoiseReduction;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDuration;
- (float)maxISO;
- (int)maxIntegrationTimeOverride;
- (unsigned int)mediaType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minExposureDuration;
- (float)minISO;
- (bool)needsPreviewDPCC;
- (bool)prefersSensorHDREnabled;
- (struct { int x1; int x2; })sensorCropDimensions;
- (struct { int x1; int x2; })sensorDimensions;
- (int)sensorHDRCompanionIndex;
- (struct { int x1; int x2; })sourceCropAspectRatio;
- (int)temporalNoiseReductionMode;
- (float)videoDefaultMaxFrameRate;
- (float)videoDefaultMinFrameRate;
- (struct { int x1; int x2; })videoDimensions;
- (float)videoFieldOfView;
- (unsigned int)videoFormat;
- (int)videoFormatIndex;
- (float)videoMaxSupportedFrameRate;
- (float)videoMaxZoomFactor;
- (float)videoMinSupportedFrameRate;
- (int)videoRawBitDepth;
- (float)videoScaleFactor;
- (int)videoStabilizationTypeOverrideForStandard;
- (float)videoZoomFactorUpscaleThreshold;

@end