/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSMapTable, NSLock;

@interface VMUProcList : NSObject  {
    NSLock *procLock;
    NSMapTable *allProcs;
    NSMapTable *filteredProcs;
    BOOL appsOnly;
    BOOL ownedOnly;
}


- (void)dealloc;
- (id)init;
- (unsigned int)count;
- (id)procInfoWithPID:(int)arg1;
- (id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2;
- (id)newestProcInfoWithName:(id)arg1;
- (id)newestProcInfo;
- (id)allPathNames;
- (id)allNames;
- (id)allPIDs;
- (id)allProcInfos;
- (BOOL)appsOnly;
- (void)setAppsOnly:(BOOL)arg1;
- (BOOL)ownedOnly:(BOOL)arg1;
- (void)setOwnedOnly:(BOOL)arg1;
- (void)removeProcInfo:(id)arg1;
- (void)addProcInfo:(id)arg1;
- (void)setProcInfos:(id)arg1;
- (id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2 withContext:(void*)arg3;
- (void)_populateFromSystem;
- (BOOL)updateFromSystem;
- (BOOL)update;
- (void)finalize;

@end
