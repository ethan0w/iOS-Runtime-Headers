/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITransitionState : NSObject {
    NSDate * _beginDate;
    id /* block */  _completion;
    int  _transitionDirection;
}

@property (getter=isActive, nonatomic, readonly) BOOL active;
@property (nonatomic, readonly) NSDate *beginDate;
@property (nonatomic, readonly) int effectiveTransitionDirection;
@property (nonatomic, readonly) int transitionDirection;

- (void).cxx_destruct;
- (id)beginDate;
- (void)cleanupWithFinishedState:(BOOL)arg1 completedState:(BOOL)arg2;
- (id)description;
- (int)effectiveTransitionDirection;
- (id)initWithTransitionDirection:(int)arg1 completion:(id /* block */)arg2;
- (BOOL)isActive;
- (BOOL)isCompatibleWithTransitionInDirection:(int)arg1;
- (void)markBeginDate;
- (int)transitionDirection;

@end
