/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCMDMClient : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)_createAndStartMDMXPCConnection;
- (int)accessRights;
- (BOOL)authenticateWithCheckInURL:(id)arg1 identity:(struct __SecIdentity { }*)arg2 topic:(id)arg3 useDevelopmentAPNS:(BOOL)arg4 signMessage:(BOOL)arg5 outError:(id*)arg6;
- (BOOL)checkOutCheckInURL:(id)arg1 identity:(struct __SecIdentity { }*)arg2 topic:(id)arg3 signMessage:(BOOL)arg4 outError:(id*)arg5;
- (void)dealloc;
- (BOOL)isActivationLockAllowedWhileSupervised;
- (BOOL)isManagedByMDM;
- (void)migrateMDMWithContext:(int)arg1 completion:(id /* block */)arg2;
- (void)notifyNewConfiguration;
- (void)processDeviceRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)processDeviceRequest:(id)arg1 outError:(id*)arg2;
- (void)processUserRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)processUserRequest:(id)arg1 outError:(id*)arg2;
- (void)retryNotNowResponse;
- (void)scheduleTokenUpdate;
- (void)scheduleTokenUpdateIfNecessary;
- (void)setXpcConnection:(id)arg1;
- (void)simulatePush;
- (void)simulatePushIfNetworkTetheredWithCompletion:(id /* block */)arg1;
- (void)uprootMDM;
- (id)xpcConnection;

@end
