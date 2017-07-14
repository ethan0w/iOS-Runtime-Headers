/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPerformanceDiagnosticsSettings : PUSettings {
    double  _scrollTestCPUSustainDuration;
    double  _scrollTestCPUWarmupDuration;
    double  _scrollTestRampUpDuration;
    BOOL  _shouldTracePerformance;
}

@property (nonatomic) double scrollTestCPUSustainDuration;
@property (nonatomic) double scrollTestCPUWarmupDuration;
@property (nonatomic) double scrollTestRampUpDuration;
@property (nonatomic) BOOL shouldTracePerformance;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (double)scrollTestCPUSustainDuration;
- (double)scrollTestCPUWarmupDuration;
- (double)scrollTestRampUpDuration;
- (void)setDefaultValues;
- (void)setScrollTestCPUSustainDuration:(double)arg1;
- (void)setScrollTestCPUWarmupDuration:(double)arg1;
- (void)setScrollTestRampUpDuration:(double)arg1;
- (void)setShouldTracePerformance:(BOOL)arg1;
- (BOOL)shouldTracePerformance;

@end