/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation> {
    id /* block */  _callback;
    id  _cancellationToken;
    Class  _entityClass;
    BOOL  _finished;
    BOOL  _isCancelled;
    NSPredicate * _predicate;
    int  _retryCount;
    EKEventStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;

- (void).cxx_destruct;
- (void)_startActualWithCompletion:(id /* block */)arg1;
- (id)_startOSActivity;
- (void)cancel;
- (void)disconnect;
- (id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;
- (id)startWithCompletion:(id /* block */)arg1;
- (void)terminate;

@end
