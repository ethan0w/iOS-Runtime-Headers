/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRemoteNotification : NSObject <SSXPCCoding> {
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) int actionType;
@property (nonatomic, readonly) NSString *alertBodyString;
@property (nonatomic, readonly) NSString *alertCancelString;
@property (nonatomic, readonly) NSString *alertOKString;
@property (nonatomic, readonly) NSString *alertTitleString;
@property (nonatomic, readonly) id badgeValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSDictionary *notificationUserInfo;
@property (nonatomic, readonly) NSString *soundFileName;
@property (readonly) Class superclass;

- (id)_valueForAlertKey:(id)arg1;
- (int)actionType;
- (id)alertBodyString;
- (id)alertCancelString;
- (id)alertOKString;
- (id)alertTitleString;
- (id)badgeValue;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithNotificationUserInfo:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)notificationUserInfo;
- (id)soundFileName;
- (id)valueForKey:(id)arg1;

@end
