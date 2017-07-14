/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUser : NSObject <HMFDumpState, NSSecureCoding> {
    HMDHome * _home;
    HAPPairingIdentity * _pairingIdentity;
    unsigned int  _privilege;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSMutableArray * _relayAccessTokens;
    NSString * _relayIdentifier;
    BOOL  _remoteAccessAllowed;
    BOOL  _remoteGateway;
    NSString * _userID;
    NSUUID * _uuid;
}

@property (getter=isCurrentUser, nonatomic, readonly) BOOL currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *encodingRemoteDisplayName;
@property (readonly) unsigned int hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, readonly) BOOL isAdministrator;
@property (nonatomic, readonly) BOOL isOwner;
@property (nonatomic, retain) HAPPairingIdentity *pairingIdentity;
@property (nonatomic) unsigned int privilege;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, copy) NSString *relayIdentifier;
@property (getter=isRemoteAccessAllowed, nonatomic) BOOL remoteAccessAllowed;
@property (getter=isRemoteGateway, nonatomic) BOOL remoteGateway;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *userID;
@property (nonatomic, copy) NSUUID *uuid;
@property (getter=isValid, readonly) BOOL valid;

+ (id)currentUserWithPrivilege:(unsigned int)arg1;
+ (id)destinationWithUserID:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)_compatiblePrivilege;
- (void)addRelayAccessToken:(id)arg1;
- (void)configureWithHome:(id)arg1;
- (BOOL)containsRelayAccessToken:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)displayName;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)encodingRemoteDisplayName;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserID:(id)arg1 pairingIdentity:(id)arg2 privilege:(unsigned int)arg3;
- (BOOL)isAdministrator;
- (BOOL)isCurrentUser;
- (BOOL)isOwner;
- (BOOL)isRemoteAccessAllowed;
- (BOOL)isRemoteGateway;
- (BOOL)isValid;
- (BOOL)mergeFromUser:(id)arg1 dataVersion:(int)arg2;
- (id)pairingIdentity;
- (id)pairingUsername;
- (unsigned int)privilege;
- (id)propertyQueue;
- (id)publicKey;
- (id)relayAccessTokenForAccessory:(id)arg1;
- (id)relayAccessTokens;
- (id)relayIdentifier;
- (void)removeRelayAccessToken:(id)arg1;
- (void)removeRelayAccessTokenForAccessory:(id)arg1;
- (id)residentCopy;
- (void)setHome:(id)arg1;
- (void)setPairingIdentity:(id)arg1;
- (void)setPrivilege:(unsigned int)arg1;
- (void)setRelayIdentifier:(id)arg1;
- (void)setRemoteAccessAllowed:(BOOL)arg1;
- (void)setRemoteGateway:(BOOL)arg1;
- (void)setUserID:(id)arg1;
- (void)setUuid:(id)arg1;
- (BOOL)updateAdministrator:(BOOL)arg1;
- (BOOL)updateRemoteAccessAllowed:(BOOL)arg1;
- (id)userCopy;
- (id)userID;
- (id)uuid;

@end
