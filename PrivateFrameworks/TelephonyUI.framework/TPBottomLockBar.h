/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPLockTextView, TPWell, TPLockKnobView, UIImageView, NSTimer, UIView, NSArray;

@interface TPBottomLockBar : TPBottomBar  {
    NSArray *_labels;
    int _currentLabelIndex;
    NSTimer *_cycleLabelTimer;
    id _delegate;
    id _representedObject;
    TPLockKnobView *_knobView;
    UIView *_trackArrow;
    TPLockTextView *_labelView;
    TPWell *_well;
    float _knobTrackInsetLeft;
    float _fontSize;
    float _deltaFromDefaultLabelWidth;
    UIImageView *_backgroundView;
}

+ (float)defaultLabelFontSize;
+ (struct CGSize { float x1; float x2; })defaultSize;

- (id)labels;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)setTextAlpha:(float)arg1;
- (void)setKnobWellWidthToDefault;
- (void)setKnobWellWidth:(float)arg1;
- (id)well;
- (int)currentLabelIndex;
- (id)knob;
- (void)setKnobColor:(int)arg1;
- (void)finishedCyclingLabelOut;
- (void)cycleToLabelAtIndex:(int)arg1;
- (void)cycleToNextLabel;
- (void)_adjustLabelOrigin;
- (float)_calcKnobYOffset;
- (BOOL)_shouldStopLabelAnimationForGrab;
- (void)stopCyclingLabels;
- (void)startCyclingLabels;
- (void)_adjustKnobOrigin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 knobImage:(id)arg2;
- (id)_knobImageForColor:(int)arg1;
- (void)setKnobImage:(id)arg1;
- (float)defaultWellWidth;
- (id)wellImageName;
- (BOOL)usesBackgroundImage;
- (void)slideBack:(BOOL)arg1;
- (void)upInKnob;
- (void)knobDragged:(float)arg1;
- (BOOL)allowsTouchTrackingBeyondVerticalThreshold;
- (float)knobTrackInsetRight;
- (float)knobTrackInsetLeft;
- (void)downInKnob;
- (void)setWellAlpha:(float)arg1;
- (void)setSuppressDrawingBackground:(BOOL)arg1;
- (void)freezeKnobInUnlockedPosition;
- (id)initForIncomingCallWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)relock;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 knobColor:(int)arg2;
- (void)_setLabel:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (BOOL)isAnimating;
- (void)setLabel:(id)arg1;
- (float)fontSize;
- (void)setFontSize:(float)arg1;
- (void)unlock;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)_canDrawContent;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)labelView;
- (void)setLabels:(id)arg1;
- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;

@end
