/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFocusLockBadge : CAMBadgeTextView {
    BOOL  _exposureLocked;
    BOOL  _focusLocked;
}

@property (getter=isExposureLocked, nonatomic) BOOL exposureLocked;
@property (getter=isFocusLocked, nonatomic) BOOL focusLocked;

- (void)_updateText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isExposureLocked;
- (BOOL)isFocusLocked;
- (void)setExposureLocked:(BOOL)arg1;
- (void)setFocusLocked:(BOOL)arg1;

@end