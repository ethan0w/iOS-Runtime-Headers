/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAPriorityManager : NSObject {
    NSMapTable * _clientsToPriorityRequests;
    int  _currentPriority;
    int  _foregroundDataclasses;
}

@property (nonatomic, retain) NSMapTable *clientsToPriorityRequests;
@property (nonatomic, readonly) int currentPriority;
@property (nonatomic) int foregroundDataclasses;

+ (id)sharedManager;
+ (void)vendPriorityManagers;

- (void).cxx_destruct;
- (void)_SBApplicationStateChanged:(id)arg1;
- (int)_recalculatePriority;
- (void)_setForegroundDataclasses:(int)arg1;
- (void)_setNewPriority;
- (id)appIDsToDataclasses;
- (void)bumpDataclassesToUIPriority:(int)arg1;
- (id)clientsToPriorityRequests;
- (int)currentPriority;
- (void)dealloc;
- (int)foregroundDataclasses;
- (id)init;
- (void)requestPriority:(int)arg1 forClient:(id)arg2 dataclasses:(int)arg3;
- (void)setClientsToPriorityRequests:(id)arg1;
- (void)setForegroundDataclasses:(int)arg1;
- (id)stateString;

@end
