/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNProtocolIPSec : NEVPNProtocol {
    int  _authenticationMethod;
    BOOL  _extendedAuthPasswordPrompt;
    NSArray * _legacyExchangeMode;
    NSArray * _legacyProposals;
    NSString * _localIdentifier;
    NSString * _remoteIdentifier;
    NEKeychainItem * _sharedSecretKeychainItem;
    NSData * _sharedSecretReference;
    BOOL  _useExtendedAuthentication;
}

@property int authenticationMethod;
@property BOOL extendedAuthPasswordPrompt;
@property (copy) NSArray *legacyExchangeMode;
@property (copy) NSArray *legacyProposals;
@property (copy) NSString *localIdentifier;
@property (copy) NSString *remoteIdentifier;
@property (copy) NEKeychainItem *sharedSecretKeychainItem;
@property (copy) NSData *sharedSecretReference;
@property BOOL useExtendedAuthentication;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)authenticationMethod;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __SCNetworkInterface { }*)createInterface;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)extendedAuthPasswordPrompt;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1;
- (id)legacyExchangeMode;
- (id)legacyProposals;
- (id)localIdentifier;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences { }*)arg1;
- (BOOL)needToUpdateKeychain;
- (id)remoteIdentifier;
- (void)removeKeychainItemsInDomain:(int)arg1 keepIdentity:(bool)arg2;
- (void)setAuthenticationMethod:(int)arg1;
- (void)setExtendedAuthPasswordPrompt:(BOOL)arg1;
- (void)setLegacyExchangeMode:(id)arg1;
- (void)setLegacyProposals:(id)arg1;
- (void)setLocalIdentifier:(id)arg1;
- (void)setRemoteIdentifier:(id)arg1;
- (void)setSharedSecretKeychainItem:(id)arg1;
- (void)setSharedSecretReference:(id)arg1;
- (void)setUseExtendedAuthentication:(BOOL)arg1;
- (id)sharedSecretKeychainItem;
- (id)sharedSecretReference;
- (void)syncWithKeychainInDomain:(int)arg1 configuration:(id)arg2 suffix:(id)arg3;
- (BOOL)useExtendedAuthentication;

@end
