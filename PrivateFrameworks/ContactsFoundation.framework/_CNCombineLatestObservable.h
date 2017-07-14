/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNCombineLatestObservable : CNObservable {
    NSMutableIndexSet * _activeObservableIndexes;
    NSMutableArray * _observables;
    <CNScheduler> * _observerScheduler;
    NSMutableArray * _results;
    NSMutableIndexSet * _silentObservableIndexes;
    NSMutableArray * _tokens;
}

@property (nonatomic, readonly) NSMutableIndexSet *activeObservableIndexes;
@property (nonatomic, readonly) NSArray *observables;
@property (nonatomic, readonly) <CNScheduler> *observerScheduler;
@property (nonatomic, readonly) NSMutableArray *results;
@property (nonatomic, readonly) NSMutableIndexSet *silentObservableIndexes;
@property (nonatomic, readonly) NSMutableArray *tokens;

- (void).cxx_destruct;
- (id)activeObservableIndexes;
- (id)initWithObservables:(id)arg1;
- (id)initWithObservables:(id)arg1 schedulerProvider:(id)arg2;
- (void)observableAtIndex:(unsigned int)arg1 didFailWithError:(id)arg2 forObserver:(id)arg3;
- (void)observableAtIndex:(unsigned int)arg1 didReceiveResult:(id)arg2 forObserver:(id)arg3;
- (void)observableAtIndexDidComplete:(unsigned int)arg1 forObserver:(id)arg2;
- (id)observables;
- (id)observerScheduler;
- (void)performWithResourceLock:(id /* block */)arg1;
- (id)results;
- (id)silentObservableIndexes;
- (id)subscribe:(id)arg1;
- (id)tokens;

@end
