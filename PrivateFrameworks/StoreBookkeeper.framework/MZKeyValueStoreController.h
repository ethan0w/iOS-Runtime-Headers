/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class NSOperationQueue, MZKeyValueStoreTransaction, <MZKeyValueStoreControllerDelegate>, NSObject<OS_dispatch_queue>, NSMutableArray, MZKeyValueStoreAuthenticationController, MZKeyValueStoreDeserializer, NSString, NSURL, MZTaskAssertion;

@interface MZKeyValueStoreController : NSObject <MZKeyValueStoreOperationDelegate, MZKeyValueStoreDeserializeOperationDelegate> {
    <MZKeyValueStoreControllerDelegate> *_delegate;
    NSURL *_defaultGetURL;
    NSURL *_defaultSetURL;
    NSString *_defaultDomain;
    BOOL _enabled;
    MZKeyValueStoreAuthenticationController *_authenticationController;
    NSMutableArray *_pendingTransactions;
    MZKeyValueStoreTransaction *_currentTransaction;
    NSOperationQueue *_operationQueue;
    BOOL _resolvingError;
    MZKeyValueStoreDeserializer *_currentDeserializer;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    MZTaskAssertion *_backgroundTaskAssertion;
    id _networkTypeObserver;
}

@property <MZKeyValueStoreControllerDelegate> * delegate;
@property(copy) NSString * defaultDomain;
@property(retain) NSURL * defaultGetURL;
@property(retain) NSURL * defaultSetURL;
@property(getter=isEnabled) BOOL enabled;
@property(retain) MZKeyValueStoreAuthenticationController * authenticationController;
@property(retain) NSMutableArray * pendingTransactions;
@property(retain) MZKeyValueStoreTransaction * currentTransaction;
@property(retain) NSOperationQueue * operationQueue;
@property(retain) MZKeyValueStoreDeserializer * currentDeserializer;
@property(getter=isResolvingError) BOOL resolvingError;
@property NSObject<OS_dispatch_queue> * dispatchQueue;
@property id networkTypeObserver;
@property(retain) MZTaskAssertion * backgroundTaskAssertion;


- (void)setOperationQueue:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;
- (BOOL)isIdle;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)reset;
- (id)operationQueue;
- (void)dealloc;
- (void)_beginBackgroundTask;
- (void)setNetworkTypeObserver:(id)arg1;
- (id)networkTypeObserver;
- (void)setPendingTransactions:(id)arg1;
- (void)setAuthenticationController:(id)arg1;
- (void)cancelAllTransactionsCancelCode:(int)arg1;
- (void)cancelAllTransactions;
- (void)cancelScheduledTransaction:(id)arg1;
- (id)scheduleSetTransactionWithKeys:(id)arg1 processor:(id)arg2;
- (id)scheduleGetTransactionWithKeys:(id)arg1 processor:(id)arg2;
- (id)scheduleGetAllTransactionWithSinceDomainVersion:(id)arg1 processor:(id)arg2;
- (id)initWithDomain:(id)arg1 baseURLForGETAll:(id)arg2 baseURLForPUTAll:(id)arg3;
- (void)deserializeOperationDidFinish:(id)arg1 shouldReschedule:(BOOL)arg2;
- (void)keyValueStoreOperationOperationDidFinish:(id)arg1;
- (void)keyValueStoreOperation:(id)arg1 scheduleURLOperation:(id)arg2;
- (id)currentDeserializer;
- (void)_currentTransactionDidFinish;
- (void)_processOperationOutput:(id)arg1 operationAuthenticated:(BOOL)arg2;
- (void)setBackgroundTaskAssertion:(id)arg1;
- (id)backgroundTaskAssertion;
- (void)_errorResolutionDefault:(id)arg1;
- (void)_errorResolutionCancel:(id)arg1;
- (void)_errorResolutionRetry:(id)arg1;
- (void)setResolvingError:(BOOL)arg1;
- (void)setCurrentDeserializer:(id)arg1;
- (void)_delegateTransactionDidCancel:(id)arg1 withError:(id)arg2;
- (void)resolveError:(id)arg1 resolution:(int)arg2;
- (BOOL)_delegateTransactionDidFail:(id)arg1 withError:(id)arg2;
- (void)_delegateTransactionDidFinish:(id)arg1;
- (void)scheduleTransaction:(id)arg1;
- (BOOL)_clampsCanScheduleTransaction:(id)arg1 error:(id*)arg2;
- (BOOL)_isTransactionValid:(id)arg1 error:(id*)arg2;
- (BOOL)_isEnabledForTransaction:(id)arg1 error:(id*)arg2;
- (void)_addPendingTransaction:(id)arg1;
- (BOOL)_canScheduleTransaction:(id)arg1 error:(id*)arg2;
- (id)authenticationController;
- (id)_requestForTransaction:(id)arg1;
- (BOOL)_authenticationCanProcessTransaction:(id)arg1 error:(id*)arg2;
- (void)_processCurrentTransaction;
- (void)_transactionDidCancel:(id)arg1 withError:(id)arg2;
- (BOOL)isResolvingError;
- (void)setCurrentTransaction:(id)arg1;
- (void)_resolveError:(id)arg1 resolution:(int)arg2;
- (id)currentTransaction;
- (id)pendingTransactions;
- (void)_cancelTransaction:(id)arg1 error:(id)arg2;
- (void)_transactionDidFail:(id)arg1 withError:(id)arg2;
- (void)_scheduleTransaction:(id)arg1;
- (BOOL)_delegateShouldScheduleTransaction:(id)arg1 error:(id*)arg2;
- (id)_scheduleTransactionWithType:(int)arg1 sinceDomainVersion:(id)arg2 URL:(id)arg3 keys:(id)arg4 processor:(id)arg5;
- (void)operationQueue:(id)arg1 willAddOperation:(id)arg2;
- (void)operationQueue:(id)arg1 willRemoveOperation:(id)arg2;
- (void)_cancelAllTransactions:(id)arg1;
- (void)_processPendingTransactions;
- (id)defaultSetURL;
- (id)defaultDomain;
- (id)defaultGetURL;
- (void)clearWeakReferencesInOperation:(id)arg1;
- (id)clampsController;
- (void)setDefaultSetURL:(id)arg1;
- (void)setDefaultGetURL:(id)arg1;
- (void)setDefaultDomain:(id)arg1;
- (void)performBlock:(id)arg1;
- (void)performBlockAndWait:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)_endBackgroundTask;
- (id)dispatchQueue;
- (void)setDispatchQueue:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;

@end
