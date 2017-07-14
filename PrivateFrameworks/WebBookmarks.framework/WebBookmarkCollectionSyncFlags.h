/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkCollectionSyncFlags : NSObject {
    NSMutableSet * _lockSyncHoldRequestorPointers;
    BOOL  _postSyncNotificationWhenUnlocking;
    BOOL  _syncAllowed;
    int  _syncLockFileDescriptor;
    int  _syncNotificationType;
    BOOL  _unlockSyncRequested;
}

@property (nonatomic, readonly) NSMutableSet *lockSyncHoldRequestorPointers;
@property (nonatomic) BOOL postSyncNotificationWhenUnlocking;
@property (nonatomic, readonly) BOOL syncAllowed;
@property (nonatomic) int syncLockFileDescriptor;
@property (nonatomic) int syncNotificationType;
@property (nonatomic) BOOL unlockSyncRequested;

- (void).cxx_destruct;
- (id)initWithSyncAllowed:(BOOL)arg1;
- (id)lockSyncHoldRequestorPointers;
- (BOOL)postSyncNotificationWhenUnlocking;
- (void)setPostSyncNotificationWhenUnlocking:(BOOL)arg1;
- (void)setSyncLockFileDescriptor:(int)arg1;
- (void)setSyncNotificationType:(int)arg1;
- (void)setUnlockSyncRequested:(BOOL)arg1;
- (BOOL)syncAllowed;
- (int)syncLockFileDescriptor;
- (int)syncNotificationType;
- (BOOL)unlockSyncRequested;

@end
