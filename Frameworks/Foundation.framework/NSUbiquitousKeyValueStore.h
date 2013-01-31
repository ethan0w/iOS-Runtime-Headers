/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUbiquitousKeyValueStore : NSObject  {
    id _private1;
    id _private2;
    id _private3;
    void *_private4;
    void *_reserved[3];
}

+ (void)_appWillActivate;
+ (void)_appWillDeactivate;
+ (id)defaultStore;
+ (id)additionalStoreWithIdentifier:(id)arg1;
+ (void)_synchronizeStoresForced:(BOOL)arg1;

- (id)arrayForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)stringForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (void)finalize;
- (id)initWithBundleIdentifier:(id)arg1;
- (BOOL)synchronize;
- (BOOL)boolForKey:(id)arg1;
- (void)setLongLong:(long long)arg1 forKey:(id)arg2;
- (long long)longLongForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)_unregisterFromDaemon;
- (void)registerDefaultValues:(id)arg1;
- (void)_useSourceSyncWithBlock:(id)arg1;
- (void)_useSourceAsyncWithBlock:(id)arg1;
- (unsigned int)maximumTotalDataLength;
- (unsigned int)maximumDataLengthPerKey;
- (unsigned int)maximumKeyLength;
- (unsigned int)maximumKeyCount;
- (BOOL)_synchronizeForced:(BOOL)arg1;
- (BOOL)_shouldAvoidSynchronize;
- (BOOL)_synchronizeForced:(BOOL)arg1 notificationQueue:(id)arg2;
- (void)_adjustTimerForAutosync;
- (void)_adjustTimer:(id)arg1;
- (void)_syncConcurrently;
- (void)_syncConcurrentlyForced:(BOOL)arg1;
- (BOOL)_postDidChangeNotificationExternalChanges:(id)arg1 sourceChangeCount:(int)arg2;
- (void)_rethrowException:(id)arg1;
- (void)_setHasPendingSynchronize:(BOOL)arg1;
- (BOOL)_hasPendingSynchronize;
- (int)_storeChangeFromSourceChange:(int)arg1;
- (void)_setShouldAvoidSynchronize:(BOOL)arg1;
- (id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2;
- (void)_pleaseSynchronize:(id)arg1;
- (void)_registerToDaemon;
- (void)_configurationDidChange;
- (void)_sourceDidChange:(id)arg1;
- (void)_scheduleRemoteSynchronization;
- (id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 additionalStore:(BOOL)arg3;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (double)doubleForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)_printDebugDescription;

@end
