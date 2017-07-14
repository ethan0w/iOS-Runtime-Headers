/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBTouchOrderedTaskList : NSObject {
    NSValue * _currentTouchPoint;
    BOOL  _ignoredOnBegin;
    double  _originalStartTime;
    unsigned int  _pathIndex;
    NSMutableArray * _touchStateTasks;
    NSObject<OS_dispatch_queue> * _touchStateTasksQueue;
    NSUUID * _touchUUID;
}

@property (nonatomic, readonly, retain) NSValue *currentTouchPoint;
@property (nonatomic, readonly) BOOL hasTasks;
@property (nonatomic) BOOL ignoredOnBegin;
@property (nonatomic, readonly) double originalStartTime;
@property (nonatomic, readonly) unsigned int pathIndex;
@property (nonatomic, readonly, retain) NSUUID *touchUUID;

+ (id)taskListForTouchUUID:(id)arg1 withPathIndex:(unsigned int)arg2;

- (void)addTask:(id)arg1;
- (id)currentTouchPoint;
- (void)dealloc;
- (BOOL)executeTasksInView:(id)arg1 withBlock:(id /* block */)arg2;
- (id)firstTouchStateForUITouchPhase:(int)arg1;
- (BOOL)hasTasks;
- (BOOL)ignoredOnBegin;
- (id)initWithTouchUUID:(id)arg1 withPathIndex:(unsigned int)arg2;
- (BOOL)isExecutingFirstTask;
- (double)originalStartTime;
- (unsigned int)pathIndex;
- (void)removeTasksMatchingFilter:(id /* block */)arg1;
- (void)setIgnoredOnBegin:(BOOL)arg1;
- (id)touchUUID;

@end
