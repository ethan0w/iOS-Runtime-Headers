/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class UIImageView, UIImage, UIView<HandView>, NSCalendar, NSDate, NSTimeZone;

@interface AnalogClockView : UIView <Clock> {
    int _runMode;
    int _style;
    UIImage *_faceDayImage;
    UIImage *_faceNightImage;
    UIImageView *_faceView;
    UIView<HandView> *_dayHands[3];
    UIView<HandView> *_nightHands[3];
    UIView<HandView> *_shadowHands[3];
    UIImageView *_rivet;
    NSDate *_time;
    BOOL _nighttime;
    double _seconds;
    int _flutterIndex;
    BOOL _isRenderStateStale;
    NSCalendar *_calendar;
    BOOL _minuteHourAnimationTriggered;
}

@property int runMode;
@property int style;
@property(readonly) UIImageView * faceView;
@property(readonly) int hour;
@property(readonly) int minute;
@property(retain) NSDate * time;
@property(retain) NSTimeZone * timeZone;
@property(getter=isNighttime,readonly) BOOL nighttime;
@property(getter=isStarted,readonly) BOOL started;

+ (void)unregisterClock:(id)arg1;
+ (void)registerClock:(id)arg1;
+ (BOOL)isClockRegistered:(id)arg1;
+ (struct CGSize { float x1; float x2; })sizeForStyle:(int)arg1;
+ (void)unregisterSweepingClock:(id)arg1;
+ (void)unregisterTickingClock:(id)arg1;
+ (void)updateTimeForAllSweeping;
+ (void)updateTimeForAllTicking;
+ (void)registerSweepingClock:(id)arg1;
+ (void)registerTickingClock:(id)arg1;
+ (void)updateFlutterForAllTicking;
+ (void)initialize;

- (void)updateTime;
- (void)dealloc;
- (id)faceView;
- (void)setRunMode:(int)arg1;
- (BOOL)isNighttime;
- (void)setNighttime:(BOOL)arg1;
- (void)setTime:(id)arg1 animated:(BOOL)arg2;
- (void)updateTimeAnimated:(BOOL)arg1;
- (void)setHandAngle:(float)arg1 forHandIndex:(int)arg2;
- (id)initWithBitmapHandsForStyle:(int)arg1 hasRivet:(BOOL)arg2 centerOffset:(struct CGSize { float x1; float x2; })arg3 dayHandParts:(id*)arg4 dayHandRotationalCenters:(struct CGPoint { float x1; float x2; }*)arg5 nightHandParts:(id*)arg6 nightHandRotationalCenters:(struct CGPoint { float x1; float x2; }*)arg7 shadowHandParts:(id*)arg8 shadowHandRotationalCenters:(struct CGPoint { float x1; float x2; }*)arg9 shadowOffset:(struct CGSize { float x1; float x2; })arg10;
- (id)initWithVectorHandsForStyle:(int)arg1 resourcePath:(id)arg2 offsets:(struct CGPoint { float x1; float x2; }*)arg3 scales:(struct CGSize { float x1; float x2; }*)arg4;
- (id)initWithBitmapStyle:(int)arg1;
- (id)initWithVectorStyle:(int)arg1;
- (void)updateFlutter;
- (int)runMode;
- (BOOL)isStarted;
- (void)stop;
- (int)minute;
- (int)hour;
- (void)start;
- (id)timeZone;
- (id)initWithStyle:(int)arg1;
- (id)time;
- (void)setTime:(id)arg1;
- (int)style;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)setStyle:(int)arg1;
- (void)setTimeZone:(id)arg1;

@end
