/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIBackdropColorSettings : NSObject {
    float  _averageBrightness;
    float  _averageHue;
    float  _averageSaturation;
    float  _contrast;
    BOOL  _hasObservedValues;
    _UIBackdropViewSettings * _parentSettings;
    float  _previousAverageBrightness;
    float  _previousAverageHue;
    float  _previousAverageSaturation;
    float  _previousContrast;
}

@property (nonatomic) float averageBrightness;
@property (nonatomic) float averageHue;
@property (nonatomic) float averageSaturation;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic) float contrast;
@property (nonatomic) BOOL hasObservedValues;
@property (nonatomic) _UIBackdropViewSettings *parentSettings;
@property (nonatomic) float previousAverageBrightness;
@property (nonatomic) float previousAverageHue;
@property (nonatomic) float previousAverageSaturation;
@property (nonatomic) float previousContrast;

- (BOOL)applyCABackdropLayerStatistics:(id)arg1;
- (float)averageBrightness;
- (float)averageHue;
- (float)averageSaturation;
- (id)color;
- (float)contrast;
- (BOOL)hasObservedValues;
- (id)parentSettings;
- (float)previousAverageBrightness;
- (float)previousAverageHue;
- (float)previousAverageSaturation;
- (float)previousContrast;
- (void)setAverageBrightness:(float)arg1;
- (void)setAverageHue:(float)arg1;
- (void)setAverageSaturation:(float)arg1;
- (void)setContrast:(float)arg1;
- (void)setDefaultValues;
- (void)setHasObservedValues:(BOOL)arg1;
- (void)setParentSettings:(id)arg1;
- (void)setPreviousAverageBrightness:(float)arg1;
- (void)setPreviousAverageHue:(float)arg1;
- (void)setPreviousAverageSaturation:(float)arg1;
- (void)setPreviousContrast:(float)arg1;
- (void)setValuesFromModel:(id)arg1;

@end
