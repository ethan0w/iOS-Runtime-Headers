/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface _GKStateMachine : NSObject {
    NSString * _currentState;
    <_GKStateMachineDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BOOL  _shouldLogStateTransitions;
    NSDictionary * _validTransitions;
}

@property (retain) NSString *currentState;
@property <_GKStateMachineDelegate> *delegate;
@property (nonatomic) BOOL shouldLogStateTransitions;
@property (retain) NSDictionary *validTransitions;

- (void)_performTransitionFromState:(id)arg1 toState:(id)arg2;
- (BOOL)_setCurrentState:(id)arg1;
- (id)_validateTransitionFromState:(id)arg1 toState:(id)arg2;
- (BOOL)applyState:(id)arg1;
- (id)currentState;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (void)setCurrentState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldLogStateTransitions:(BOOL)arg1;
- (void)setValidTransitions:(id)arg1;
- (BOOL)shouldLogStateTransitions;
- (id)validTransitions;

@end
