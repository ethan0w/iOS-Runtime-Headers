/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectContext;

@interface _PFManagedObjectReferenceQueue : NSObject  {
    int _cd_rc;
    int _spinLock;
    int _flags;
    int _signalRunloop;
    NSManagedObjectContext *_context;
    struct __CFArray { } *_queue;
    struct __CFRunLoopObserver { } *_rlObserver;
}


- (unsigned int)retainCount;
- (id)retain;
- (void)dealloc;
- (void)release;
- (void)finalize;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (BOOL)_queueBatchForDealloc:(struct __CFArray { }*)arg1;
- (BOOL)_signal;
- (int)_queueCount;
- (id)initForContext:(id)arg1;
- (void)_contextDidDealloc;
- (void)_unregisterRunloopObservers;
- (void)_processReferenceQueue:(BOOL)arg1;
- (BOOL)_GC_queueForDealloc:(id)arg1;
- (BOOL)_queueForDealloc:(id)arg1;

@end
