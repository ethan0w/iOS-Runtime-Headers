/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSObject<OS_dispatch_source>, NSObject<OS_dispatch_queue>;

@interface AXTimer : NSObject  {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    BOOL _isCancelled;
    BOOL _isPending;
}


- (BOOL)isCancelled;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (BOOL)isPending;
- (void)afterDelay:(double)arg1 processBlock:(id)arg2;
- (void)afterDelay:(double)arg1 processBlock:(id)arg2 cancelBlock:(id)arg3;
- (void)_reallyCancel;
- (id)initWithTargetSerialQueue:(id)arg1;

@end
