/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBClient : NSObject {
    CBAdaptationClient * _adaptationClient;
    CBBlueLightClient * _blueLightClient;
    BrightnessSystemClient * bsc;
}

@property (readonly) CBAdaptationClient *adaptationClient;
@property (readonly) CBBlueLightClient *blueLightClient;

+ (BOOL)supportsAdaptation;
+ (BOOL)supportsBlueLightReduction;

- (id)adaptationClient;
- (id)blueLightClient;
- (void)dealloc;
- (id)init;

@end
