/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

@interface SOSLegacyContactsManager : NSObject {
    FKFriendsManager * _friendsManager;
}

@property (nonatomic, readonly) BOOL SOSLegacyContactsExist;
@property (nonatomic, retain) FKFriendsManager *friendsManager;

+ (BOOL)authorizedToUseContactStore;
+ (id)contactStore;
+ (void)preloadContactStoreIfNecessary;

- (void).cxx_destruct;
- (id)SOSLegacyContacts;
- (id)SOSLegacyContactsDestinations;
- (BOOL)SOSLegacyContactsExist;
- (id)_SOSDestinationsForFriend:(id)arg1;
- (id)_SOSFormattedDestinationForFriend:(id)arg1 withDestinationNumber:(id)arg2;
- (id)_SOSFriends;
- (id)_contactFromFriend:(id)arg1;
- (void)contactStoreDidChange;
- (void)dealloc;
- (id)friendsManager;
- (id)init;
- (void)setFriendsManager:(id)arg1;

@end
