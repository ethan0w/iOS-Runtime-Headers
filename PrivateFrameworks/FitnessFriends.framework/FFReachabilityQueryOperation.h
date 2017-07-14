/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessFriends.framework/FitnessFriends
 */

@interface FFReachabilityQueryOperation : NSOperation <IDSBatchIDQueryControllerDelegate> {
    IDSBatchIDQueryController * _batchQueryController;
    id /* block */  _completionHandler;
    NSSet * _destinations;
    BOOL  _executing;
    BOOL  _finished;
    NSMutableDictionary * _rawIDSDestinationToOriginalDestination;
    NSMutableSet * _remainingDestinations;
    NSMutableDictionary * _results;
    NSString * _serviceIdentifier;
    FFReachabilityStatusCache * _statusCache;
    id /* block */  _updateHandler;
    NSObject<OS_dispatch_source> * timer;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSSet *destinations;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (nonatomic) FFReachabilityStatusCache *statusCache;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (void)_queryTimedOut;
- (id /* block */)completionHandler;
- (id)destinations;
- (void)finish;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (id)init;
- (BOOL)isAsynchronous;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isReady;
- (id)serviceIdentifier;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDestinations:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setStatusCache:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (void)start;
- (id)statusCache;
- (id /* block */)updateHandler;

@end
