/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSThread;

@interface IMThreadedInvocationTrampoline : IMInvocationTrampoline  {
    NSThread *_thread;
    BOOL _immediateForMatchingThread;
}


- (void)dealloc;
- (id)initWithTarget:(id)arg1 thread:(id)arg2 immediateForMatchingThread:(BOOL)arg3;
- (void)forwardInvocation:(id)arg1;

@end
