/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
 */

@interface WLDeviceAuthenticationController : WLDaemonController {
    <WLDeviceAuthenticatorProtocol> * _authenticator;
    <WLDeviceAuthenticationDelegate> * _delegate;
    WLSourceDevice * _device;
}

@property (nonatomic, readonly) <WLDeviceAuthenticationDelegate> *delegate;
@property (nonatomic, readonly) WLSourceDevice *device;

- (void).cxx_destruct;
- (void)authenticate;
- (void)cancelAuthentication;
- (id)delegate;
- (id)device;
- (id)initWithSourceDevice:(id)arg1 delegate:(id)arg2;

@end
