/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSDate, NSTimer, UILabel;

@interface PLCameraElapsedTimeView : UIImageView  {
    UILabel *_minutes;
    UILabel *_seconds;
    NSTimer *_timer;
    NSDate *_startTime;
    BOOL _autorotationEnabled;
    BOOL _watchingOrientationChanges;
    int _orientation;
}

@property BOOL autorotationEnabled;


- (void)setAutorotationEnabled:(BOOL)arg1;
- (BOOL)autorotationEnabled;
- (void)stopTimer;
- (void)_setDeviceOrientation:(int)arg1 animated:(BOOL)arg2;
- (id)_createTimeLabelWithFont:(id)arg1;
- (void)_startWatchingDeviceOrientationChanges;
- (void)_stopWatchingDeviceOrientationChanges;
- (void)_update:(id)arg1;
- (void)startTimer;
- (void)setOrientation:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_deviceOrientationChanged:(id)arg1;

@end
