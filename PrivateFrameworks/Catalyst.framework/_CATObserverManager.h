/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface _CATObserverManager : NSObject <CATOperationObserver> {
    BOOL  mIsObserving;
    NSObject<OS_dispatch_queue> * mObserverQueue;
    NSMutableSet * mObservers;
    CATOperation * mOperation;
    NSObject<OS_dispatch_source> * mProgressSource;
    int  mState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (void)notifyObserversOperationDidProgress:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)operationDidFinish:(id)arg1;
- (void)operationDidProgress:(id)arg1;
- (void)operationDidStart:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
