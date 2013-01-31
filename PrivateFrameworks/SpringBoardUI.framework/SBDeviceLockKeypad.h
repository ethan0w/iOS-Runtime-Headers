/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class UIButton;

@interface SBDeviceLockKeypad : TPPhonePad  {
    UIButton *_deleteButton;
    UIButton *_cancelButton;
    BOOL _deleteEnabled;
    BOOL _playKeyboardClicks;
}

@property BOOL playsKeyboardClicks;
@property BOOL showsEmergencyCallButton;
@property(getter=isDeleteEnabled) BOOL deleteEnabled;
@property(readonly) BOOL deleteKeyChar;
@property(readonly) BOOL cancelKeyChar;
@property(readonly) BOOL emergencyKeyChar;

+ (id)pressedImage;
+ (id)keypadImage;
+ (struct CGSize { float x1; float x2; })defaultSize;

- (void)dealloc;
- (void)setDeleteEnabled:(BOOL)arg1;
- (BOOL)isDeleteEnabled;
- (BOOL)emergencyKeyChar;
- (BOOL)cancelKeyChar;
- (BOOL)deleteKeyChar;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (BOOL)showsEmergencyCallButton;
- (BOOL)playsKeyboardClicks;
- (id)initWithDefaultSizeForStyle:(int)arg1;
- (id)_keypadImage;
- (void)willBecomeVisible;
- (void)hiddenFromView;
- (id)_pressedImage;
- (void)setPlaysKeyboardClicks:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
