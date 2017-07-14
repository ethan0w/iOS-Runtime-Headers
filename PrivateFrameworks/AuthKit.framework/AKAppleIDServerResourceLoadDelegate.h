/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAppleIDServerResourceLoadDelegate : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    NSString * _clientAppName;
    NSString * _continuationToken;
    NSNumber * _hasEmptyPasswordOverride;
    NSString * _heartbeatToken;
    NSString * _identityToken;
    NSArray * _loggedInServices;
    NSString * _passwordResetToken;
    AKDevice * _proxiedDevice;
    AKAnisetteData * _proxiedDeviceAnisetteData;
    NSString * _proxyAppName;
    NSString * _serviceToken;
    int  _serviceType;
    BOOL  _shouldSendAbsintheHeader;
    BOOL  _shouldSendEphemeralAuthHeader;
    BOOL  _shouldSendICSCIntentHeader;
    BOOL  _shouldSendLocalUserHasAppleIDLoginHeader;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *clientAppName;
@property (nonatomic, copy) NSString *continuationToken;
@property (nonatomic, retain) NSNumber *hasEmptyPasswordOverride;
@property (nonatomic, copy) NSString *heartbeatToken;
@property (nonatomic, copy) NSArray *loggedInServices;
@property (nonatomic, copy) NSString *passwordResetToken;
@property (nonatomic, retain) AKDevice *proxiedDevice;
@property (nonatomic, retain) AKAnisetteData *proxiedDeviceAnisetteData;
@property (nonatomic, copy) NSString *proxyAppName;
@property (nonatomic, copy) NSString *serviceToken;
@property (nonatomic) int serviceType;
@property (nonatomic) BOOL shouldSendAbsintheHeader;
@property (nonatomic) BOOL shouldSendEphemeralAuthHeader;
@property (nonatomic) BOOL shouldSendICSCIntentHeader;
@property (nonatomic) BOOL shouldSendLocalUserHasAppleIDLoginHeader;

+ (id)sharedController;
+ (unsigned int)signalFromServerResponse:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)clientAppName;
- (id)continuationToken;
- (void)encodeWithCoder:(id)arg1;
- (id)hasEmptyPasswordOverride;
- (id)heartbeatToken;
- (id)initWithAltDSID:(id)arg1 identityToken:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAuthenticationRequired:(id)arg1;
- (BOOL)isResponseActionable:(id)arg1;
- (BOOL)isResponseFinal:(id)arg1;
- (BOOL)isResponseFinalForHSA2ServerFlow:(id)arg1;
- (id)loggedInServices;
- (id)passwordResetToken;
- (id)proxiedDevice;
- (id)proxiedDeviceAnisetteData;
- (id)proxyAppName;
- (id)serviceToken;
- (int)serviceType;
- (void)setAltDSID:(id)arg1;
- (void)setClientAppName:(id)arg1;
- (void)setContinuationToken:(id)arg1;
- (void)setHasEmptyPasswordOverride:(id)arg1;
- (void)setHeartbeatToken:(id)arg1;
- (void)setLoggedInServices:(id)arg1;
- (void)setPasswordResetToken:(id)arg1;
- (void)setProxiedDevice:(id)arg1;
- (void)setProxiedDeviceAnisetteData:(id)arg1;
- (void)setProxyAppName:(id)arg1;
- (void)setServiceToken:(id)arg1;
- (void)setServiceType:(int)arg1;
- (void)setShouldSendAbsintheHeader:(BOOL)arg1;
- (void)setShouldSendEphemeralAuthHeader:(BOOL)arg1;
- (void)setShouldSendICSCIntentHeader:(BOOL)arg1;
- (void)setShouldSendLocalUserHasAppleIDLoginHeader:(BOOL)arg1;
- (BOOL)shouldSendAbsintheHeader;
- (BOOL)shouldSendEphemeralAuthHeader;
- (BOOL)shouldSendICSCIntentHeader;
- (BOOL)shouldSendLocalUserHasAppleIDLoginHeader;
- (void)signRequest:(id)arg1;

@end
