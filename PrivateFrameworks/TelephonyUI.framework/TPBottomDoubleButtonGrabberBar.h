/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIImage, NSArray, UIView;

@interface TPBottomDoubleButtonGrabberBar : TPBottomDoubleButtonBar <TPBottomGrabberBar> {
    UIView *_grabberView;
    UIImage *_grabberImage;
    NSArray *_grabberGestureRecognizers;
    BOOL _isAnimatingOutGrabber;
}

@property(retain) UIImage * grabberImage;
@property(readonly) UIView * grabberView;
@property(retain) NSArray * grabberGestureRecognizers;

+ (id)videoAnswerButtonImage;
+ (id)videoDeclineButtonImage;
+ (id)answerButtonImage;
+ (id)declineButtonImage;

- (void)dealloc;
- (id)grabberGestureRecognizers;
- (void)animateGrabberOutWithCompletion:(id)arg1;
- (id)grabberView;
- (void)setGrabberImage:(id)arg1;
- (void)setGrabberGestureRecognizers:(id)arg1;
- (void)_layoutWells;
- (float)_buttonWidth;
- (id)initForVideoChatWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initForIncomingCallWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)grabberImage;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)layoutSubviews;

@end
