/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationRecordReplaceUpdate : UNSNotificationRecordUpdate {
    UNSNotificationRecord * _replacedNotificationRecord;
}

@property (nonatomic, readonly) UNSNotificationRecord *replacedNotificationRecord;

+ (id)updateWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)replacedNotificationRecord;

@end
