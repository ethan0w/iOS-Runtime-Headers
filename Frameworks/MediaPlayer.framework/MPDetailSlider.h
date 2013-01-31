/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImageView, UILabel, NSTimer, <MPDetailSliderDelegate>, NSString;

@interface MPDetailSlider : UISlider  {
    UILabel *_currentTimeInverseLabel;
    UILabel *_currentTimeLabel;
    BOOL _allowsScrubbing;
    BOOL _allowsDetailScrubbing;
    BOOL _autoscrubActive;
    NSTimer *_autoscrubTimer;
    double _availableDuration;
    struct CGPoint { 
        float x; 
        float y; 
    } _beginLocationInView;
    BOOL _canCommit;
    double _currentTime;
    id _delegate;
    float _detailScrubbingVerticalRange;
    BOOL _didBeginTracking;
    UIImageView *_downloadingTrackOverlay;
    double _duration;
    BOOL _durationAllowsDetailScrubbing;
    UIImageView *_glowDetailScrubImageView;
    BOOL _isTracking;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastCommittedLocationInView;
    float _minScale;
    float _minTimeLabelWidth;
    float _maxTrackWidth;
    BOOL _needsCommit;
    struct CGPoint { 
        float x; 
        float y; 
    } _previousLocationInView;
    int _scrubValue;
    int _style;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _timeLabelInsets;
    int _timeLabelStyle;
    UIImageView *_thumbImageView;
    float _trackInset;
}

@property <MPDetailSliderDelegate> * delegate;
@property BOOL allowsScrubbing;
@property BOOL allowsDetailScrubbing;
@property float detailScrubbingVerticalRange;
@property double duration;
@property double availableDuration;
@property(readonly) BOOL detailScrubbingAvailableForCurrentDuration;
@property int timeLabelStyle;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } timeLabelInsets;
@property float minTimeLabelWidth;
@property(readonly) NSString * localizedScrubSpeedText;

+ (float)defaultHeight;
+ (Class)labelClass;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 value:(float)arg3;
- (id)currentThumbImage;
- (id)createThumbView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)isTracking;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)allowsScrubbing;
- (float)minTimeLabelWidth;
- (int)timeLabelStyle;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })timeLabelInsets;
- (float)detailScrubbingVerticalRange;
- (double)availableDuration;
- (void)setMinTimeLabelWidth:(float)arg1;
- (void)setAllowsScrubbing:(BOOL)arg1;
- (id)_stringForTime:(double)arg1;
- (void)_updateTimeDisplayForTime:(double)arg1 force:(BOOL)arg2;
- (void)_resetScrubInfo;
- (float)_scaleForIdealValueForVerticalPosition:(float)arg1;
- (void)_autoscrubTick:(id)arg1;
- (float)_scaleForVerticalPosition:(float)arg1;
- (void)_commitValue;
- (void)_updateTimeDisplayForTime:(double)arg1;
- (void)_updateForAvailableDuraton;
- (void)_setValueWhileTracking:(float)arg1 animated:(BOOL)arg2;
- (void)_updateTrackInset;
- (void)_adjustMinScale;
- (id)_stringForInverseCurrentTime:(double)arg1;
- (id)_stringForCurrentTime:(double)arg1;
- (id)timeLabelShadowColorForStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })timeLabelShadowOffsetForStyle:(int)arg1;
- (id)timeLabelTextColorForStyle:(int)arg1;
- (id)timeLabelFontForStyle:(int)arg1;
- (float)timeLabelVerticalOffsetForStyle:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_thumbHitFrame;
- (void)_setupControlsForStyle;
- (void)cancelTracking;
- (BOOL)detailScrubbingAvailableForCurrentDuration;
- (void)setDetailScrubbingVerticalRange:(float)arg1;
- (void)setTimeLabelInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2 maxTrackWidth:(float)arg3;
- (id)localizedScrubSpeedText;
- (void)setAvailableDuration:(double)arg1;
- (void)setTimeLabelStyle:(int)arg1;
- (BOOL)allowsDetailScrubbing;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;

@end
