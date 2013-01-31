/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebPolicyDecisionListenerPrivate;

@interface WebPolicyDecisionListener : NSObject <WebPolicyDecisionListener> {
    WebPolicyDecisionListenerPrivate *_private;
}


- (void)_usePolicy:(int)arg1;
- (id)_initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (void)_invalidate;
- (void)use;
- (void)ignore;
- (void)download;
- (oneway void)_webcore_releaseOnWebThread;
- (oneway void)release;

@end
