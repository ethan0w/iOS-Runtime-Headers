/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSApplicationControllerRequest : NSObject {
    NSString * _SAMLRequest;
    NSArray * _attributeNames;
    NSString * _authenticationToken;
    NSString * _requestorVerificationToken;
    int  _type;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSString *SAMLRequest;
@property (nonatomic, copy) NSArray *attributeNames;
@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic, copy) NSString *requestorVerificationToken;
@property (nonatomic) int type;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)SAMLRequest;
- (id)attributeNames;
- (id)authenticationToken;
- (id)requestorVerificationToken;
- (void)setAttributeNames:(id)arg1;
- (void)setAuthenticationToken:(id)arg1;
- (void)setRequestorVerificationToken:(id)arg1;
- (void)setSAMLRequest:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUserInfo:(id)arg1;
- (int)type;
- (id)userInfo;

@end
