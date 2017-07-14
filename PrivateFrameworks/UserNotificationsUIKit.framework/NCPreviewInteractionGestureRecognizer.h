/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCPreviewInteractionGestureRecognizer : UIGestureRecognizer <UIPreviewInteractionDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    }  _initialLocation;
    UIPreviewInteraction * _previewInteraction;
    float  _transitionProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float transitionProgress;

- (void).cxx_destruct;
- (void)_cancelPreviewInteraction;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(float)arg2 ended:(BOOL)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)reset;
- (void)setState:(int)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (float)transitionProgress;

@end
